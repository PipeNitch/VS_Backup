#include <bits/stdc++.h>
using namespace std;
#define windows                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

int main()
{
    windows;
    int n;
    cin >> n;

    if (n / 1000 > 0){
        cout << n % 10 << " is in the ones place\n"
             << ((n % 100) - (n % 10)) / 10 << " is in the tens place\n"
             << ((n % 1000) - (n % 100)) / 100 << " is in the hundreds place\n"
             << (n - (n % 100)) / 1000 << " is in the thousands place\n";
    }
    else if (n / 100 > 0){
        cout << n % 10 << " is in the ones place\n"
             << ((n % 100) - (n % 10)) / 10 << " is in the tens place\n"
             << ((n % 1000) - (n % 100)) / 100 << " is in the hundreds place\n";
    }
    else if (n / 10 > 0){
        cout << n % 10 << " is in the ones place\n"
             << ((n % 100) - (n % 10)) / 10 << " is in the tens place\n";
    }
    else{
        cout << n << " is in the ones place\n";
    }

    return 0;
}