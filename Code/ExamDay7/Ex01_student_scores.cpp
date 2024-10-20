#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;
    cin>>n;

    if(n>100||n<1){
        cout<<"Error";
        return 0;
    }

    float a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    // float sum=0;
    // for(int i=0;i<n;i++){
    //     float x;
    //     cin>>x;
    //     sum+=x;
    // }

    cout<<fixed<<setprecision(2)<<sum/n;

    return 0;
}