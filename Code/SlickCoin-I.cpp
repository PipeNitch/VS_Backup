#include<iostream>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n,mx=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]>mx)mx=a[j]-a[i];
        }
    }
    cout<<mx;

    return 0;
}