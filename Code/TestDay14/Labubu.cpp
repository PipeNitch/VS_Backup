#include<bits/stdc++.h>
#define ll long long
#define en '\n'
#define sp ' '
#define pll pair<long long,long long>
using namespace std;

bool comp(const pll &a, const pll &b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main(){
    int n,sum=0; cin>>n;
    double mean;
    vector<pll> v;
    vector<int> hm;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        sum+=b;
        v.push_back({a,b});
    }
    mean=sum/n;
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<sp<<v[i].second<<en;
        if(v[i].second>mean)hm.push_back(v[i].first);
    }
    cout<<sum<<endl;
    reverse(hm.begin(),hm.end());
    for(int i=0;i<hm.size();i++)cout<<hm[i]<<endl;

    return 0;
}