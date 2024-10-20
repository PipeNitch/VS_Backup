#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fpre(n) fixed<<setprecision(n)

int a[10]={0};

int main(){windows;
    int n,m;cin>>n>>m;
    for(int i=n;i<=m;i++){
        string binstr=to_string(i);
        for(char l : binstr){
            switch (l){
                case '0' :  a[0]++;break;
                case '1' :  a[1]++;break;
                case '2' :  a[2]++;break;
                case '3' :  a[3]++;break;
                case '4' :  a[4]++;break;
                case '5' :  a[5]++;break;
                case '6' :  a[6]++;break;
                case '7' :  a[7]++;break;
                case '8' :  a[8]++;break;
                case '9' :  a[9]++;break;
            }
        }
    }
    for(int i=0;i<10;i++)cout<<i<<" = "<<a[i]<<endl;

    return 0;
}