#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,strf="";
    cin>>a>>b;

    int d=0;


    if(a.length()>=b.length())
        for(int i=b.length();i<=a.length();i++)
            b='0'+b;
    else
        for(int i=a.length();i<=b.length();i++)
            a='0'+a;

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for(int i=0;i<a.length();i++){
        int binsum=0;
        binsum=d+(a[i]-'0')+(b[i]-'0'); 
        d = 0;

        if(binsum>=10){
            d=binsum/10;
            binsum%=10;
        }
        strf=to_string(binsum)+strf;
    }
    if(d!=0)strf=to_string(d)+strf;
    cout<<strf;

    return 0;
}