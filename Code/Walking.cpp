#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back((x*60+y)-1020);
    }
    sort(a.begin(),a.end(),greater<int>());
    cout<<a[1]/60<<" "<<a[1]%60;

    return 0;
}