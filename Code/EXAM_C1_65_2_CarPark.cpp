#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int in = (a*60)+b;
    int out = (c*60)+d;
    int diff = out - in;
    if(diff<=15) cout<<"0";
    if(diff>15 && diff<=(3*60)) cout<<ceil(diff/60.0)*10;
    if(diff>3*60&& diff<=(6*60)) cout<< 3*10 + ceil((diff-180)/60.0)*20 ;
    if(diff>6*60)cout<<ceil(diff/60.0/24.0)*200;
    return 0;
}