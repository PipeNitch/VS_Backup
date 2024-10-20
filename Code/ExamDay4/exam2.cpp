#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    double g;cin>>g;
    if(g>=3.5)cout<<"Highest honors for semester";
    else if(g>=3)cout<<"Dean's list for  semester";
    else if(g>=2)cout<<"No comment";
    else if(g>=1)cout<<"On probation for next semester";
    else cout<<"Fail semester - registration suspended";

    return 0;
}