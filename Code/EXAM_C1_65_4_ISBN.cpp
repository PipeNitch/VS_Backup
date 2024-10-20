#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int all=10;
    int sum=0;
    for(char x:s){
     sum+=all*(x-'0');
     all--;
    }
    for(int i=0; i<10; i++) {
    if((sum+i)%11==0) {
      cout << s << i;
      break;
    }
  }

   return 0;
}