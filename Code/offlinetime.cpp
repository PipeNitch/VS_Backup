#include <bits/stdc++.h>
using namespace std;

int main(){
  int d,h,m;cin>>m;
  d=m/1440;
  m=m%1440;
  h=m/60;
  m=m%60;
  cout<<"Last online: "<<(d>0? ("%d days",d) : "");
  
  return 0;
}