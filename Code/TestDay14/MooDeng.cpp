#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int n;cin>>n;
    while(n--){
        double x,y;
        cin>>x>>y;
        if(x>0&&y>0)cout<<"Q1\n";
        else if(x<0&&y>0)cout<<"Q2\n";
        else if(x<0&&y<0)cout<<"Q3\n";
        else if(x>0&&y<0)cout<<"Q4\n";
        else if(x!=0&&y==0)cout<<"X\n";
        else if(x==0&&y!=0)cout<<"Y\n";
        else cout<<"O\n";
    }

    return 0;
}