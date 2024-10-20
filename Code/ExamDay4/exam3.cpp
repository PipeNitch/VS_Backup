#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    if(n%2==0) n*=n;
    else if(n%2!=0) n=n*n*n;

    cout<<"Output : "<<n;

    return 0;
}