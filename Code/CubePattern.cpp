#include<iostream>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    n-=1;

    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            // cout<<j<<","<<i<<" ";
            
            if((j>=0&&i==-n)
             ||(j<=0&&(i==0||i==n))
             ||(j==n&&i<=0)
             ||(i>=0&&(j==-n||j==0))
             ||(abs(i+j)==n)
             ||(i+j==0&&i<=0))
                cout<<"*";

            else if (i+j>n)
                cout<<" ";

            else
                cout<<"-";
        }
        cout<<endl;
    }

    return 0;
}