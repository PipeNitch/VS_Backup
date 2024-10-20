#include <bits/stdc++.h>
using namespace std;
#define sp ' '
#define en "\n"
#define endll "\n"
typedef long long ll;


struct tab
{
    ll alp,num;
    string s;

    bool operator<(const tab &rhs)const{
        if(alp!=rhs.alp)return alp<rhs.alp;
        else if(alp%2)return num<rhs.num;
        else return num>rhs.num;
    }
    
};


vector<tab> l,r,v;
ll lp[5][1000010],lg[5][1000010];
ll rp[5][1000010],rg[5][1000010];
ll lsum[5][1000010],rsum[5][1000010];
ll lap[5][1000010],rap[5][1000010];
ll ser[5],t;
ll lidx,ridx;


ll val(ll i,ll k){
    ll it=lower_bound(rsum[k],rsum[k]+ridx,ser[k]-lsum[k][i])-rsum[k];
    if(rsum[k][it]>ser[k]-lsum[k][i] || it>=r.size() )it--;
    if(it==-1)return 0;
    return rap[k][it];
}



int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    char inp;
    ll n,mxalp=0;
    string s,temp;
    ll num,alp;
    // while ((inp=getchar()) !=  '\n')s+=inp;
    getline(cin,s);
    ll si=s.size();
    for(ll i=0;i<si;i++){
        num=0,alp=0;
        while('0'<=s[i] && s[i]<='9'){num*=10;num+=s[i++]-'0';}
        while('A'<=s[i] && s[i]<='Z'){alp*=26;alp+=s[i++]-'A';}
        //cout << "d" << alp << sp;
        mxalp=max(mxalp,alp);
        v.push_back({alp,num,s});
    }
    mxalp=(mxalp+1)/2;
    //cout << mxalp << en;
    l.clear();
    r.clear();
    sort(v.begin(),v.end());
    for(auto i:v)cout << i.alp << sp;
    cout << en;

    for(auto i:v){
        if(i.alp>=mxalp){r.push_back(i);}
        else {l.push_back(i);}
    }
    //cout << "rsize" << r.size() << en;

    sort(l.begin(),l.end());
    sort(r.begin(),r.end());

    for(auto i:l)cout << i.s << sp;
    cout << en;
    for(int i=0;i<r.size();i++)cout << r[i].s << sp;
    cout << en;
    

    for(ll i=0;i<l.size();i++){
        for(ll j=0;j<5;j++)cin >> lp[j][i];
        for(ll j=0;j<5;j++)cin >> lg[j][i];
    }
    for(ll i=0;i<r.size();i++){
        for(ll j=0;j<5;j++)cin >> rp[j][i];
        for(ll j=0;j<5;j++)cin >> rg[j][i];
    }

    ll idx=0;
    ll mx[5]={0,0,0,0,0};
    for(ll k=0;k<5;k++){
        idx=0;
        for(auto i:l){
            lsum[k][idx]=lsum[k][idx-1]+lp[k][idx];
            lap[k][idx]=lap[k][idx-1]+lg[k][idx]*lp[k][idx];
            idx++;
        }
        if(k==0)lidx=idx;
        idx=0;
        for(auto i:r){
            rsum[k][idx]=rsum[k][idx-1]+rp[k][idx];
            rap[k][idx]=rap[k][idx-1]+rg[k][idx]*rp[k][idx];
            idx++;
        }
        if(k==0)ridx=idx;
    }
    cin >> t;
    
    while (t--)
    {
        for(ll i=0;i<5;i++)mx[i]=0;
        for(ll k=0;k<5;k++)cin >> ser[k];
       
        for(ll k=0;k<5;k++){
            for(ll i=0;lsum[k][i]<=ser[k] && i<lidx;i++){
                mx[k]=max(mx[k],val(i,k)+lap[k][i]);
            }
            ll it=lower_bound(rsum[k],rsum[k]+ridx,ser[k])-rsum[k];
            if(rsum[k][it]>ser[k] || it>=r.size() )it--;
            mx[k]=max(mx[k],rap[k][it]);

            cout << mx[k] << sp;
        }
        cout << en;
        
    }
    return 0;
}