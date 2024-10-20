#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '
typedef long long ll;

int main(){windows;
    set<char> a;
    vector<char> b;
    int n;cin>>n;
    forr(i,0,n){
        char c;
        cin>>c;
        a.insert(c);
    }
    n=a.size();
    n-=1;
    for(char x:a){
        b.push_back(x);
    }
    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            if(abs(i)+abs(j)<=n)cout<<b[n-(abs(i)+abs(j))];else cout<<sp;
        }
        cout<<endll;
    }

    return 0;
}