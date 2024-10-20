#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    cout<<((n%4==0&&n%100!=0)||n%400==0?"leapyear":"Not leapyear");

    return 0;
}