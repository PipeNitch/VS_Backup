#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, p, n, j, co, maxn = 300001;
    vector<bool> prime(maxn, true);
    for (i = 3; i < maxn; i += 2)
    {
        if (prime[i])
        {
            for (j = i * 2; j < maxn; j += i)
                prime[j] = false;
        }
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p == 4)
            cout << 1 << endl;
        else
        {
            co = 0;
            for (j = 3; j <= p / 2; j += 2)
            {
                if (prime[j] && prime[p - j])
                    co++;
            }
            cout << co << endl;
        }
    }

    return 0;
}