#include <bits/stdc++.h>
using namespace std;
#define windows                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

bitset<481> x;

int main()
{
    windows;
    x.flip();
    int n, c = 0;
    cin >> n;
    int e, o;
    for (int i = 0; i < n; i++)
    {
        cin >> e >> o;
        for (int j = e; j <= o; j++)
        {
            x[j] = false;
        }
    }

    for (int i = 0; i < 480; i++)
        if (x[i])
            c++;
    cout << c;

    return 0;
}