#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    float a[3] = {22.2,44.4,66.6};
    double x=11;
    cout<<"x = "<<x<<endl;
    a[3]=88;
    cout<<"x = "<<x<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}