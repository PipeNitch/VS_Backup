#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int odd(int n){
    // n is even now
    for(int i=-n/2;i<=n/2;i++){
        for(int j=-n/2;j<=n-1;j++){
            // cout<<j<<","<<i<<" ";
            if(i+j==n/2||i+j==-n/2||i-j==n/2||i-j==-n/2||(j==n-1&&abs(i)<n/2))cout<<"#";
            else if(abs(i)+abs(j)<n/2||j-abs(i)>=(n-1)/2+1)cout<<"=";
            else cout<<".";
        }
        cout<<endl;
    }
    return 0;
}

int even(int n){
    // n is odd now
    for(int i=-n/2;i<=(n+1)/2;i++){
        for(int j=-n/2;j<=(n/2+1)+(n+1)/2-1;j++){
            // cout<<j<<","<<i<<" ";
            if(i-j==(n-1)/2+1||j-i==(n+1)/2||i+j==-n/2||i+j==(n+3)/2||(j==n&&i>-(n-1)/2&&i<(n+1)/2))cout<<"#";
            else if((abs(j)+abs(i)<=n/2+1&&i+j>-(n+1)/2)||j-abs(i)>=n/2+1&&(j>(n+3)/2&&i+j!=(n+1)/2))cout<<"=";
            else cout<<".";
        }
        cout<<endl;
    }
    return 0;
}

int main(){windows;
    vector<int> x;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;x.push_back(k);
    }

    for(int i=0;i<n;i++){
        if(n%2==0)even(x[i]-1);
        else odd(x[i]-1);
        // cout<<endl;
    }
    
    // if(n%2==0)even(n-1);
    // else odd(n-1);


    return 0;
}