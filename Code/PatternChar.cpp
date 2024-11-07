#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i,a,n) for(int i=a;i<n;i++)

int main(){windows;
    // cout<<int('a')<<" "<<int('A');
    int n,c=0;cin>>n;
    bool ishigh;

    for(int i=0;i<n;i++){
        if(!(i%2))ishigh=1;else ishigh=0;
        for(int j=0;j<=i;j++){
            c++;
            if(ishigh){ishigh=0;cout<<char(65+c-1)<<" ";}
            else {ishigh=1;cout<<char(97+c-1)<<" ";}
        }
        cout<<endl;
    }

    return 0;
}

/*
A
b C
D e F
g H i J
*/