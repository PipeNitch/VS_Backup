#include<bits/stdc++.h>
using namespace std;

int main(){
    long  long int n,x[4],c=0;
    cin>>n;
    for(int i=0;i<4;i++)cin>>x[i];
    while (c<n){
        for(int i=0;i<3;i++){
            x[i+1]+=x[i];
        }
        c++;
        if(c>n-1)break;
        for(int i=3;i>0;i--){
            x[i-1]+=x[i];
        }
        c++;
        if(c>n-1)break;
    }
    for(int i=0;i<4;i++){
        cout<<x[i]<<" ";
    }

    return 0;
}