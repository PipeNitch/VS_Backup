#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int output(double k){
    cout<<fixed<<setprecision(2)<<"The area of circle = "<<k;
    return 0;
}
double cal(double r){
    double k=M_PI*r*r;
    return k;
}
double input(){
    double n;
    cout<<"Enter circle radius : ";
    cin>>n;

    return n;
}


int main(){
    output(cal(input()));

    return 0;
}