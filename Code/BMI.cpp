#include <bits/stdc++.h>
using namespace std;

int main(){
  double w,h,b;cin>>w>>h;
  h=h/100;
  b=w/(h*h);
//   b=round(b*100.f)/100.f;
  if(b<18)cout<<fixed<<setprecision(2)<<b<<"\nThin";
  else if(b<22)cout<<fixed<<setprecision(2)<<b<<"\nGood Health";
  else if(b<24)cout<<fixed<<setprecision(2)<<b<<"\nFat Level 1";
  else if(b<29)cout<<fixed<<setprecision(2)<<b<<"\nFat Level 2";
  else cout<<b<<"\nFat Level 3";
}