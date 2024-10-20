#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if((x%4==0&&x%100!=0)||x%400==0)cout<<"True\n";
        else cout<<"False\n";
    }


    return 0;
}