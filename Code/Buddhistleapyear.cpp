#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    cout<<"Enter year (Buddhist Era) : ";
    int n;cin>>n;
    n-=543;
    if(n%4==0&&n%100!=0)cout<<"This is leap year";
    else cout<<"This is not leap year";

    return 0;
}