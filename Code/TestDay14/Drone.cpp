#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fpre(n) fixed<<setprecision(n)

int main(){windows;
    int n;cin>>n;
    double x1,y1,x2,y2;
    while(n--){
        cin>>x1>>y1>>x2>>y2;
        double d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        cout<<fpre(6)<<d<<endl;
    }

    return 0;
}