#include<bits/stdc++.h>
using namespace std;
#define fpre(n) fixed<<setprecision(n)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        double x;
        cin>>x;
        sum+=x;
    }
    cout<<fpre(2)<<sum/n;

    return 0;
}