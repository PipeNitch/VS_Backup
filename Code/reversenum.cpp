#include <bits/stdc++.h>
using namespace std;

int main()
{
  string n,m;
  cin>>n;
  cin.ignore(2);
  cin>>m;
  reverse(n.begin(),n.end());
  reverse(m.begin(),m.end());
  int newn=0,newm=0;
  for(char i : n){
    newn = (newn*10)+(i-'0');
  }
  for(char i : m){
    newm = (newm*10)+(i-'0');
  }
  cout<<newn<<" + "<<newm<<" = "<<newn+newm;
}