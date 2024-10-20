#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n[10],c=0;
    for(int i=0;i<10;i++){
        cin>>n[i];
        if(n[i]>=10&&n[i]<=20)c++;
    }
    cout<<c;

    return 0;
}