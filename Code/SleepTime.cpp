#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n,h1,m1,h2,m2,bin;cin>>n;
    while(n--){
        cin>>h1;cin.ignore();cin>>m1;

        cin>>h2;cin.ignore();cin>>m2;

        if(h1==0&&m1==0){cout<<h2<<":"<<m2<<endl;continue;}

        m1+=h1*60;
        m2+=h2*60;
        if(m1>m2)bin=1440-m1+m2;
        else bin=m2-m1;
        cout<<bin/60<<":"<<setw(2)<<setfill('0')<<bin%60<<endl;
    }

    return 0;
}