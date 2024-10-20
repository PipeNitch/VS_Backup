#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    string x;
    int sum=0;
    cin>>x;
    for(int i=0;i<9;i++){  
        sum=sum+((x[i]-'0')*(10-i));
    }
    cout<<x<<11-(sum%11);

    return 0;
}