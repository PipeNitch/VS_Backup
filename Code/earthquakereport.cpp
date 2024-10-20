#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    cout<<"Enter richter level : ";
    double n;cin>>n;
    if(n<5)cout<<"Little or no damage";
    else if(n<5.5)cout<<"Some damage";
    else if(n<6.5)cout<<"Serious damage";
    else if(n<7.5)cout<<"Disaster";
    else cout<<"Catastrophe";

    return 0;
}