#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n[5];
    for(int i=0;i<5;i++)cin>>n[i];
    int x;cin>>x;
    bool hon=0;
    for(int i=0;i<5;i++){
        if(x==n[i]){
            hon=1;
            break;
        }
    }
    if(hon==0){
        cout<<"Item not found in the bag";
        return 0;
    }
    for(int i=0;i<5;i++){
        if(x==n[i]){
            for(int j=i;j<5;j++){
                n[j]=n[j+1];
            }
            break;
        }
    }
    n[4]=0;
    for(int i=0;i<5;i++){
        cout<<n[i]<<" ";
    }

    return 0;
}