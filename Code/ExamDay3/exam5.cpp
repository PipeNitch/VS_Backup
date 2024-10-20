#include <bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;
    cin >> n;

    cout<<"1000 baht : "<<n/1000<<endl;
    n %= 1000;
    cout<<"500 baht : "<<n/500<<endl;
    n %= 500;
    cout<<"100 baht : "<<n/100<<endl;
    n %= 100;
    cout<<"50 baht : "<<n/50<<endl;
    n %= 50;
    cout<<"20 baht : "<<n/20<<endl;
    n %= 20;
    cout<<"10 baht : "<<n/10<<endl;
    n %= 10;
    cout<<"5 baht : "<<n/5<<endl;
    n %= 5;
    cout<<"2 baht : "<<n/2<<endl;
    n %= 2;
    cout<<"1 baht : "<<n/1<<endl;

    return 0;
}