#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '

int main(){windows;
    int n;cin>>n;
    n-=1;
    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            if(i+j==-n||i+j==n||(i==-n&&j>=0)||(j==-n&&i>=0)||(j==n&&i<=0)||(i==n&&j<=0)||(i==0&&j<=0)||(j==0&&i>=0)||(i+j==0&&j>=0))cout<<'*';
            else if(i+j>n)cout<<sp;
            else cout<<'-';
        }
        cout<<endll;
    }

    return 0;
}