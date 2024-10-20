#include<bits/stdc++.h>
#define forr(i,a,n) for(int i=a;i<n;i++)
#define coutf(n,m) cout<<fixed<<setprecision(n)<<m<<endl
#define windows ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
using namespace std;
void countRomanNumerals(int n){
    int I=0,V=0,X=0,L=0,C=0;
    forr(i,1,n+1){
        int num=i;
        while(num>=100){
            num-=100;
            C++;
        }
        while(num>=90){
            num-=90;
            X++;
            C++;
        }
        while(num>=50){
            num-=50;
            L++;
        }
        while(num>=40){
            num-=40;
            X++;
            L++;
        }
        while(num>=10){
            num-=10;
            X++;
        }
        while(num>=9){
            num-=9;
            I++;
            X++;
        }
        while(num>=5){
            num-=5;
            V++;
        }
        while(num>=4){
            num-=4;
            I++;
            V++;
        }
        while(num>=1){
            num-=1;
            I++;
        }
    }
    cout<<I<<" "<<V<<" "<<X<<" "<<L<<" "<<C<<" ";
}

int main(){windows;
    int n;
    cin >> n;
    countRomanNumerals(n);
    return 0;
}