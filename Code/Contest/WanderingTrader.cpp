#include<iostream>
#include<vector>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define sp ' '
#define forr(i,a,n) for(int i=a;i<n;i++)

int main(){windows;
    int n;cin>>n;
    int a[n+2]={0};
    vector<int> v;v.push_back(1);
    forr(i,1,n+1)cin>>a[i];
    forr(i,1,n+1)if(a[i]<a[i-1]&&a[i]<a[i+1])v.push_back(i);
    v.push_back(n);
    for(int i=1;i<v.size();i++) cout<<v[i]-v[i-1]+1<<' ';

    return 0;
}