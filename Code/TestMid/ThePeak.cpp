#include<iostream>
#include<vector>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;

int main(){windows;
    int n,c=0;cin>>n;
    string b="";
    vector<int> a;
    a.push_back(0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    a.push_back(0);
    for(int i=1;i<a.size()-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            c++;
            b+=to_string(i)+" ";
        }
    }
    cout<<c<<endl<<b;
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }

    return 0;
}