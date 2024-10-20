#include<iostream>
#include<cmath>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fpre(n) fixed<<setprecision(n)

int main(){windows;
    string n;cin>>n;
    // string 
    //find op
    char op;
    int arrskip;
    double a,b;
    string astr = "",bstr = "";
    for(int i=1;i<n.length();i++){
        if(n[i]=='+'){
            op='+';
            arrskip = i;
            break;
        }
        else if(n[i]=='-'){
            op='-';
            arrskip = i;
            break;
        }
        else if(n[i]=='*'){
            op='*';
            arrskip = i;
            break;
        }
        else if(n[i]=='/'){
            op='/';
            arrskip = i;
            break;
        }
    }

    for(int i=0;i<n.length();i++){
        if(i<arrskip){
            astr+=n[i];
        }else if(i>arrskip)bstr+=n[i];
    }

    a=stod(astr);
    b=stod(bstr);

    if(op=='+')cout<<fpre(2)<<a+b;
    else if(op=='-')cout<<fpre(2)<<a-b;
    else if(op=='*')cout<<fpre(2)<<a*b;
    else if(op=='/')cout<<fpre(2)<<a/b;

    return 0;
}