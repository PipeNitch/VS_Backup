#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int eh,em,oh,om,ch=0;
    cin>>eh>>em>>oh>>om;
    em=(eh*60)+em;
    om=(oh*60)+om;
    int ut=om-em;
    if(ut>360){
        cout<<200;
        return 0;
    }else if(ut>240){
        ch+=30;
        ut-=180;
        while(ut>0){
            ut-=60;
            ch+=20;
        }
    }else if(ut>15){
        while(ut>0){
            ut-=60;
            ch+=10;
        }
    }

    cout<<ch;

    return 0;
}