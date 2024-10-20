#include <bits/stdc++.h>
#define forr(i, a, n) for (int i = a; i < n; i++)
#define windows ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
using namespace std;

int mo=1000000007;

int main() {windows;

    vector<ll> A;
    A.push_back(1);
    forr(i,1,100001){
        A.push_back((A[i-1]*26)%mo);
    }

    string s;
    cin >> s;

    ll sum=0;
    forr(i,0,s.size()){
        if(i+1==s.size()){
            sum+=((s[i]-'a')*A[s.size()-i-1])%mo;
            sum%=mo;
        }else{
            sum+=(((s[i]-'a')+1)*A[s.size()-i-1])%mo;
            sum%=mo;
        }
    }
    cout << sum;

  return 0;
}