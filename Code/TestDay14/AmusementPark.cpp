#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n;cin>>n;
    for(int i=1;i<=12;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}