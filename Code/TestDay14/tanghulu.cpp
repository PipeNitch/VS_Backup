#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n,k;cin>>n>>k;
    vector<int> l;
    for(int i=0;i<n;i++){
        int x;cin>>x;l.push_back(x);
    }
    sort(l.begin(),l.end());
    for(int i=0;i<n;i++)cout<<l[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++){
        if(l[i]>=k){
            cout<<i;
            break;
        }
    }

    return 0;
}