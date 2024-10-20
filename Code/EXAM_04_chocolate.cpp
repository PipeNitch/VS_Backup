#include <bits/stdc++.h>
using namespace std;

int n ,targ;
vector<int> bcounter;
bool chk;
void solve(int arr[],int m,int sm)
{
    if(chk) return;
    if(sm>targ) return;
    if(n==m) {
        if(sm==targ) {
            chk = true;
            return;
        }
    }
    else {
        solve(arr,m+1,sm+arr[m]);
        solve(arr,m+1,sm);
    }
}

int main()
{
    int t; cin >> t;
    while(t--) {
        cin >> n;
        chk = false;
        int arr[n] ,sum = 0;
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            sum+=arr[i];
        }
        if(sum%2==1) {
            cout << "NO\n";
            continue;
        }
        targ = sum/2;
        solve(arr,0,0);
        if(chk) { cout << "YES\n"; }
        else { cout << "NO\n"; }
    }
}
