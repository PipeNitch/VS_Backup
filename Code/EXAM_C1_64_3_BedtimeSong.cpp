#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define sp ' '

// int main(){windows;
//     double h,m;cin>>h>>m;
//     m+=h*60;
//     if(m<1245){
//         cout<<1245-m<<sp<<ceil((1245-m)/2);
//     }else cout<<"0 0";

//     return 0;
// }

int main(){
    int h,m,c=0;cin>>h>>m;
    m+=h*60;

    if(m>=1245){
        cout<<"0 0";
        return 0;
    }

    m=1245-m;

    cout<<m<<" ";

    while(m>0){
        m-=2;
        c++;
    }

    cout<<c;

    return 0;
}