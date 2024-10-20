#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int a,b,c,min,max;cin>>a>>b>>c;
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;

    min=a;
    if(b<min)min=b;
    if(c<min)min=c;

    cout<<"Max : "<<max<<"\nMin : "<<min;

    return 0;
}