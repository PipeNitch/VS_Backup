#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=1;cin>>n;

    for(int i=1;i<=n;i++){
        if(c==4){
            cout<<"P";
            c=0;
        }
        cout<<i;
        c++;
    }

    return 0;
}