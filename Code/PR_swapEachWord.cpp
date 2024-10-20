#include <bits/stdc++.h>
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef long long ll;
using namespace std;
int main(){windows;
    string s;
    getline(cin,s);
    stack<char> st;
    forr(i,0,s.length()) {
        if(s[i]!=' ')st.push(s[i]);
        if(s[i]==' '||i==s.length()-1) {
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    }

    return 0;
}