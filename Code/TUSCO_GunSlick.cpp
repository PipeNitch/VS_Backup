#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)


int main(){windows;
    int time[100001]={0};
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        for(int j=x;j<=y;j++){
            time[j]++;
        }
    }

    int mx=0,mxat;

    for(int i=0;i<=10;i++){
        cout<<time[i]<<" ";
    }

    // for(int i=0;i<=100000;i++){
    //     if(mx<time[i]){
    //         mx=time[i];
    //         mxat=i;
    //     }
    // }
    // cout<<mxat;

    return 0;
}