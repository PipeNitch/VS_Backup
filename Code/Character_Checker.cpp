#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    string n;
    getline(cin,n);
    bool hi=0,lo=0;
    for(char i : n){
        if(isupper(i))hi=1;
        else if(islower(i))lo=1;
        if(hi&&lo){
            cout<<"Mix";
            return 0;
        }
    }
    if(hi&&!lo)cout<<"All Capital Letter";
    else cout<<"All Small Letter";

    return 0;
}