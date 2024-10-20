#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    char n;
    cout<<"Enter student grade : ";
    cin>>n;
    switch(n){

        case 'A' :
        case 'a' : cout<<"Excellent"; break;
        case 'B' :
        case 'b' : cout<<"Good"; break;
        case 'C' :
        case 'c' : cout<<"O.K."; break;
        case 'D' :
        case 'd' : 
        case 'F' : 
        case 'f' : cout<<"Poor, student is on probation"; break;

        default : cout<<"Invalid letter grade";
    }

    return 0;
}