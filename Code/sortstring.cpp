#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)

bool comp(const pair<string,int> a,const pair<string,int> b){
    return a.second<b.second;
}

int main(){
    vector<pair<string,int>> a;
    int n;cin>>n;
    forr(i,0,n){
        string s;cin>>s;
        a.push_back({s,s.length()});
    }
    sort(a.begin(),a.end(),comp);
    forr(i,0,n){
        cout<<a[i].first<<"\n";
    }

    return 0;
}