#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);

int main(){windows;
    char x;
    double b,h;
    cout<<"Enter Figure (R : Rectangle, T : Triangle) : ";
    cin>>x;
    cout<<"Enter Base : ";
    cin>>b;
    cout<<"Enter Height : ";
    cin>>h;

    x=tolower(x);
    if(x=='r')cout<<"Area of Rectangle : "<<fixed<<setprecision(2)<<h*b;
    if(x=='t')cout<<"Area of Triangle : "<<fixed<<setprecision(2)<<0.5*h*b;

    return 0;
}