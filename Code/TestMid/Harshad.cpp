#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// typedef long long ll;

int main(){windows;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string x;cin>>x;
        int binsum=0,binx=0;
        for(char &k : x){
            binsum+=(k-'0');
            binx=(binx*10)+(k-'0');
        }
        if(binx%binsum==0)cout<<"YES:";
        else cout<<"NO:";
        cout<<binsum<<endl;
    }

    return 0;
}