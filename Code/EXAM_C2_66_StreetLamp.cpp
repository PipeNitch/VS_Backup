#include<bits/stdc++.h>
using namespace std;
#define coutf(n,m) cout<<fixed<<setprecision(n)<<m
#define forr(i,a,n) for(int i=a;i<n;i++)
#define forl(i,a,n) for(int i=a;i>n;i--)
#define windows ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '
typedef long long ll;

int main(){windows;
    vector<int> pole;
    int n;
    ll sum=0;
    cin>>n;
    forr(i,0,n){
        int x;
        cin>>x;
        pole.push_back(x);
    }
    // forr(i,0,pole.size())cout<<pole[i]<<sp;
    sort(pole.begin(),pole.end());
    forr(i,0,pole.size()){
        int tmp=0;
        forr(j,0,i+1){
            tmp+=pole[j];
        }
        sum+=tmp;
    }
    cout<<sum*2;

    return 0;
}