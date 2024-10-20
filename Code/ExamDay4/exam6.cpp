#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    int n;
    string na,da;
    cout<<"Enter month number (1-12) : ";
    cin>>n;
    switch(n){
        case 1 : na="January"; da="31"; break;
        case 2 : na="February"; da="28"; break;
        case 3 : na="March"; da="31"; break;
        case 4 : na="April"; da="30"; break;
        case 5 : na="May"; da="31"; break;
        case 6 : na="June"; da="30"; break;
        case 7 : na="July"; da="31"; break;
        case 8 : na="AUgust"; da="31"; break;
        case 9 : na="September"; da="30"; break;
        case 10 : na="October"; da="31"; break;
        case 11 : na="November"; da="30"; break;
        case 12 : na="December"; da="31"; break;
    }

    cout<<"No."<<n<<" : "<<na<<" : "<<da<<" days";

    return 0;
}