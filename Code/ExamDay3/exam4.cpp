#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    double a,b,c,xa,xb;
    cin>>a>>b>>c;
    xa = (-b-sqrt(b*b-4*a*c))/(2*a);
    xb = (-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<fixed<<setprecision(2)<<"x = "<<xb<<endl<<"x = "<<xa;

    return 0;
}