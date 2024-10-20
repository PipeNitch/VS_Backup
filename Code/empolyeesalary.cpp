#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    cout<<"Enter type of employee ( Daily : D, Monthly : M, Temp : T) : ";
    char x;cin>>x;
    double b,bo;
    switch(x){
        case 'D' :
        case 'd' : b=4000; bo=0.2;break;
        case 'M' :
        case 'm' : b=8000; bo=0.5;break;
        case 'T' :
        case 't' : b=6000; bo=0.2;break;
    }
    printf("Salary = %.0lf+(%.0lf*%.1lf) = %.0lf",b,b,bo,b+(b*bo));

    return 0;   
}