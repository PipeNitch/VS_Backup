#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; getline(cin, n);

    char* ptr = &n[0];
    int c = 0;

    while (*ptr != '\0') {
        c++;
        ptr++;
    }
    cout << c;

    return 0;
}