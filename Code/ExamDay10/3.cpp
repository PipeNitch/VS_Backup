#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void cal(double n,double r,int y){
    for(int i=0;i<y;i++){
        n*=(100+r)/100;
        printf("Year %d --> %.2lf\n",i+1,n);
    }
}

int main(){
    cout<<"Number of people : ";
    double n;cin>>n;
    cout<<"Increase rate : ";
    double r;cin>>r;
    cout<<"Number of year : ";
    int y;cin>>y;

    cal(n,r,y);

    return 0;
}