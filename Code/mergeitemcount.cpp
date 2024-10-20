#include <bits/stdc++.h>
using namespace std;

int main(){
  string n,m;
  getline(cin,n);
  getline(cin,m);
  short cn=0,cm=0;
  for(char i : n){
    if(i==' ')cn++;
  }
  for(char i : m){
    if(i==' ')cm++;
  }
  if(cn!=cm){
    cout<<"Invalid";
    return 0;
  }
}