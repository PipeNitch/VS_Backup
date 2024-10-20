#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,i=2;cin>>n;
    int c=0;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
            c++;
            if(c==10){
                cout<<endl;
                c=0;
            }
        }
        i++;
    }

    return 0;
}