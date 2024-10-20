#include<bits/stdc++.h>
using namespace std;
#define coutf(n,m) cout<<fixed<<setprecision(n)<<m
#define forr(i,a,n) for(int i=a;i<n;i++)
#define forl(i,a,n) for(int i=a;i>n;i--)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '
typedef long long ll;
int main(){windows;
    int n;cin>>n;
    forr(i,0,n){
        forr(j,0,n){
            if(i==0||j==0||i==j||i==n-1||j==n-1||i+j==n-1)cout<<"*";else cout<<"-";
        }
        cout<<endll;
    }

    return 0;
}