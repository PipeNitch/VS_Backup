#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    long long n,t;cin>>n>>t;
    long long x[t];
    vector<int> k(n);
    for(int i=0;i<n;i++)cin>>k[i];
    for(int i=0;i<t;i++)cin>>x[i];

    sort(k.begin(),k.end());

    for(int i=0;i<t;i++){
        int high=k.size(),low=0,mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(x[i]==k[mid])
        }
    }

    return 0;
}   