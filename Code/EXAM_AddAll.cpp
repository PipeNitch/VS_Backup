#include <bits/stdc++.h>
#define forr(i, a, n) for (int i = a; i < n; i++)
#define windows ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
using namespace std;
int main() {windows;

	int n,temp;
    priority_queue<ll,vector<ll>,greater<ll>> A;
    cin >> n;
    forr(i,0,n){
        cin >> temp;
        A.push(temp);
    }
    ll x,y,sum=0;
    while(1){
        if(A.size()==1){
            break;
        }else{
            x=A.top();
            A.pop();
            y=A.top();
            A.pop();
            A.push(x+y);
            sum+=x+y;
        }
    }
    cout << sum;

	return 0;
}