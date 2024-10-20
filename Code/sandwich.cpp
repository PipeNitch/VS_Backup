// #include<bits/stdc++.h>
// using namespace std;
// #define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// #define forr(i,a,n) for(int i=a;i<n;i++)
// #define endll '\n'

// int main(){windows;
//     int n,a,b;
//     cin>>n;
//     int s[n];
//     for(int i=0;i<n;i++)cin>>s[i];
//     int q;
//     cin>>q;
//     for(int i=0;i<q;i++){
//         int sum=0;
//         cin>>a>>b;
//         for(int j=a-1;j<n;j++){
//             if(s[j]<0) b+=s[j];
//             if(b<=0) break;
//             else if(s[j]>=0) sum+=s[j];
//         }
//         cout<<sum<<endll;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '
typedef long long ll;

int main(){windows;
    ll n,q;
    cin>>n;
    vector<ll> s,p,m,co=0;
    forr(i,0,n){
        ll x;
        cin>>x;
        s.push_back(x);
    }
    // forr(i,0,n)cout<<s[i]<<sp;
    // cout<<endll;

    cin>>q;
    forr(i,0,q){
        ll x,y;
        cin>>x>>y;
        p.push_back(x);
        m.push_back(y);
    }
    // forr(i,0,q)cout<<p[i]<<sp<<m[i]<<endll;

    forr(i,0,q){
        ll x=p[i],y=m[i];
        while(y>0){
            if(s[i]<0){
                
            }
        }
    }
    
    return 0;
}