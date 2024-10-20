#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

void cal(char a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i)cout<<a;
            else cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;char a;
    cout<<"Enter Character : ";cin>>a;
    cout<<"Number of line : ";cin>>n;

    cal(a,n);

    return 0;
}