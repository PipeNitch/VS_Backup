#include<bits/stdc++.h>
using namespace std;

int isPrime(int num){
    if(num<=1) return 0;
    
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,c=0;
    cin>>a;
    for(int i=0;i<=a;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            c++;
        }
    }
    cout<<endl<<c;
    
    return 0;
}