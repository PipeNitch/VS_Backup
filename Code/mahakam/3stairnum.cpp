#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int num;
    vector<int> n;
    cin>>num;
    while(num<10&&num>=0){
        n.push_back(num);
        cin>>num;
    }
    for(int i=0;i<n.size();i++){
        for(int j=0;j<n.size();j++){
            if(j+i>=n.size()-1)cout<<n[i];
            else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}