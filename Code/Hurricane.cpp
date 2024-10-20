#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;

    if(n<=55)cout<<"Depression";
    else if(n<=103)cout<<"Tropical Storm";
    else if(n<=134)cout<<"Category 1 hurricane";
    else if(n<=155)cout<<"Category 2 hurricane";
    else if(n<=182)cout<<"Category 3 hurricane";
    else if(n<=219)cout<<"Category 4 hurricane";
    else cout<<"Category 5 hurricane";

    return 0;
}