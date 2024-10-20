#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool isprime(int n){
    if(n<=1)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}

int main(){windows;
    int n,max=INT_MIN;

    do{
        cin>>n;
        if(isprime(n)){
            if(n>max)max=n;
        }
    }while(n!=0);

    if(max==INT_MIN){
        cout<<"0";
    }
    else cout<<max;

    return 0;
}