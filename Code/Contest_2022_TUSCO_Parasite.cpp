#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int mx=INT_MIN;
    int num;
    while(n--) {
        cin >> num;
        mx=max(mx,num);
    }
    cout << mx;
}
