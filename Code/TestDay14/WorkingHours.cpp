#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int summ=0;
    for(int i=0;i<5;i++){
        int h1,m1,h2,m2,diff=0;
        cin>>h1;cin.ignore();cin>>m1;
        cin>>h2;cin.ignore();cin>>m2;
        if(h2>h1)diff=(h2*60+m2)-(h1*60+m1);
        else diff=abs((h1*60+m1)-(h2*60+m2)-1440);
        summ+=diff;
        // cout<<diff/60<<" "<<diff%60<<endl;
    }
    cout<<endl<<summ/60<<" "<<summ%60;

    return 0;
}