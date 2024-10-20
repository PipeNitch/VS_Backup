#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> price;
    vector<string> product;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        price.push_back(tmp);
    }
    sort(price.begin(),price.end());
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        product.push_back(s);
    }
    sort(product.begin(),product.end());
    // for(int i=0;i<product.size();i++)cout<<product[i];

    int cnt=1;
    vector<int> p;
    string st=product[0];
    for(int i=1;i<product.size();i++){
        if(st==product[i])cnt++;
        else{
            p.push_back(cnt);
            cnt=1;
            st=product[i];
        }
    }
    p.push_back(cnt);
    sort(p.begin(),p.end(),greater<int>());
    // for(int i=0;i<p.size();i++)cout<<p[i];

    long long sum=0;
    for(int i=0;i<p.size();i++)sum+=p[i]*price[i];
    cout<<sum<<" ";

    reverse(price.begin(),price.end());

    sum=0;
    for(int i=0;i<p.size();i++)sum+=p[i]*price[i];
    cout<<sum;

    return 0;
}