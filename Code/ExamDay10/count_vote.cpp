#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,k;cin>>n>>k;
    int c[n]={0};
    for(int i=0;i<k;i++){
        int x;cin>>x;
        for(int j=0;j<n;j++){
            if(x==j){
                c[j]++;
                break;
            }
        }
    }
    int mx1,mx2=c[0];
    for(int i=0;i<n-1;i++){
        if(mx2<c[i+1]){
            mx2=c[i+1];
            mx1=i+1;
        }
    }
    cout<<mx1<<"\n"<<mx2;

    return 0;
}