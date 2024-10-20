#include<bits/stdc++.h>
#define ll long long
#define en '\n'
#define sp ' '
#define pii pair<int,int>
#define pll pair<long long,long long>
using namespace std;

bool comp(const pii &a, const pii &b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int n; cin>>n;
    vector<pii> v;
    for(int i=0;i<n;i++){
        int a,b,c; cin>>a>>b>>c;
        v.push_back({a,b*2+c});
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<sp<<v[i].second<<en;
    }
    return 0;
}