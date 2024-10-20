#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,cx=0,cy=0;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2==0)cx++;
        else cy++;
    }
    cout<<"X coordinate: "<<cx
        <<"\nY coordinate: "<<cy;

    return 0;
}