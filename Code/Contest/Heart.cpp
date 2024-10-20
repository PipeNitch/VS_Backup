#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    double n;cin>>n;
    for(int i=0;i<floor((3*n)/2+1);i++){
        for(int j=-n;j<=n;j++){
            // cout<<j<<","<<i<<" ";
            if(abs(i)+abs(j)==floor((3*n)/2)||abs(j)-abs(i)==ceil(n/2)||(abs(i)+abs(j)==floor(n/2)))cout<<"O";
            else if(  )
            // else if((abs(i)+j==n))cout<<"/";
            else if((i+abs(j)==n))cout<<"\\";
            else cout<<".";
        }
        cout<<endl;
    }

    return 0;
}

// input 10 output 21 คอลัมน์ 16 แถว
// input 8 output 17 คอลัมน์ 13 แถว
// input 7 output 15 คอลัมน์ 11 แถว