#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<double> a;
    for(int i=0;i<n;i++){
        a.clear();
        for(int j=0;j<3;j++){
            int x;cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        if(a[2]==sqrt(a[0]*a[0]+a[1]*a[1]))cout<<"YES\n";else cout<<"NO\n";
        // for(int j=0;j<3;j++)cout<<a[j]<<" ";
        // cout<<endl;
    }

    return 0;
}