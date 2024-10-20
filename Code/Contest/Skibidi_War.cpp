#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    double d = floor(sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0)));
    long long k = (pow(n+1,d))+(floor(log(n+1)))+5;
    cout<<k;

    return 0;
}