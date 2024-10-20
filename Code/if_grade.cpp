#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;

    if(n>=80)cout<<"4";
    else if(n>=75)cout<<"3.5";
    else if(n>=70)cout<<"3";
    else if(n>=65)cout<<"2.5";
    else if(n>=60)cout<<"2";
    else if(n>=55)cout<<"1.5";
    else if(n>=50)cout<<"1";
    else cout<<"0";

    return 0;
}