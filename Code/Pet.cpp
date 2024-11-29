#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int a[5],max=0,maxat;
    for(int i=0;i<5;i++){
        int s=0;
        for(int j=0;j<4;j++){
            int x;cin>>x;
            s+=x;
        }
        a[i]=s;
    }

    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
            maxat=i+1;
        }
    }
    cout<<maxat<<" "<<max;

    return 0;
}