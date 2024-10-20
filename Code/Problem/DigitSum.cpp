#include <bits/stdc++.h>
using namespace std;

int main(){
  int num,sum=0,digit;
  cin>>num;
  do{
    digit=num%10;
    sum+=digit;
    num/=10;
  }while(num>0);
  cout<<sum<<endl;

  return 0;
}