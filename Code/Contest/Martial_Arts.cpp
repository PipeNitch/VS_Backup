//Martial_Arts

#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    vector<int> o;

    for(int i=0;i<n;i++){
        int x;cin>>x;o.push_back(x);
    }

    int max=0,c=0;

    for(int i=0;i<n-1;i++){
        if(o[i]<o[i+1])c++;
        else{
            if(max<c)max=c;
            c=1;
        }
    }

    if(max<c)max=c;
    cout<<max;

    return 0;
}