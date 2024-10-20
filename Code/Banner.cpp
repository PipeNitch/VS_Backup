#include <bits/stdc++.h>
using namespace std;

main()
{
    char ch;
    int k, n, w, l, m;
    cin >> ch >> n >> w >> l;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i <= j % m + n && i + n >= j % m && i + j % m >= n && i + j % m <= 3 * n)
            {
                cout << ch;
            }
            else
            {
                cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}
