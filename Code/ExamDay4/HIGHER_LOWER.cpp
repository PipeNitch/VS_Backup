#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    cout<<"Enter Number : ";
    int n;cin>>n;
    if(n<0||n>99) return 0;
    if(n>50)cout<<"Higher than 50";
    else if(n<50)cout<<"Lower than 50";
    else cout<<"Equal to 50";
    return 0;
}