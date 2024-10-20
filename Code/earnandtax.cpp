#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    string id,name;
    double s,o;
    cout<<"Input ID : ";cin>>id;
    cout<<"Input name : ";cin>>name;
    cout<<"Input Salary : ";cin>>s;
    cout<<"Input OT : ";cin>>o;
    double n=s+o;
    cout<<"ID : "<<id<<"\nName : "<<name<<fixed<<setprecision(2)<<"\nSalary : "<<s<<"\nOT : "<<o<<"\nTotal income : "<<s+o<<"\nTax : ";

    if(n>=100000)cout<<fixed<<setprecision(2)<<0.1*n;
    else if(n>=70000)cout<<fixed<<setprecision(2)<<7.0/100*n;
    else if(n>=50000)cout<<fixed<<setprecision(2)<<5.0/100*n;
    else if(n>=30000)cout<<fixed<<setprecision(2)<<3.0/100*n;
    else cout<<fixed<<setprecision(2)<<0.01*n;

    return 0;
}