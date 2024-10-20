#include<bits/stdc++.h>
using namespace std;

main(){
    int n,t=0,i=2;
    cin>>n;
    do{
        if(n%i==0)t++;
        i++;
    }while(i!=n);
    if(t>=1){cout<<n<<" is not prime number";}
    else{cout<<n<<" is prime number";}
}