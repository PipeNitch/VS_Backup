// carpark
#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int h1,m1,h2,m2,c=0,ut;
    cin >> h1 >> m1 >> h2 >> m2;
    m1=h1*60+m1;
    m2=h2*60+m2;
    ut=m2-m1;
    
    if(ut<=15){
        cout<<0;
        return 0;
    }
    if(ut>360){
        cout<<200;
        return 0;
    }
    for(int i=0;i<3;i++){
        if(ut<=0){
            cout<<c;
            return 0;
        }
        c+=10;
        ut-=60;
    }
    for(int i=0;i<3;i++){
        if(ut<=0){
            cout<<c;
            return 0;
        }
        c+=20;
        ut-=60;
    }

    cout << c;

    return 0;
}