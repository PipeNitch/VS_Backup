#include <bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;
    cin >> n;

    cout<<"B1000 = "<<n/1000<<endl;
    n %= 1000;
    cout<<"B500 = "<<n/500<<endl;
    n %= 500;
    cout<<"B100 = "<<n/100<<endl;

    return 0;
}