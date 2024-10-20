#include<iostream>
using namespace std;
#define windows ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int n,c=0;
void f(int mn=1,int v=0){for(int i=mn;i<=(n-v)>>1;++i)f(i,v+i);c++;}

int main(){windows;
    cin>>n;f();
    cout<<c;

    return 0;
}