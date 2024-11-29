#include <bits/stdc++.h>
using namespace std;

int L[int(1e9+1)];

int main(){
  int n,c=0;cin>>n;
  for(int i=1;i<=n;i++){
    int bin;cin>>bin;
    L[bin]++;
  }
  for(int i=1;i<=sizeof(L)/sizeof(L[0]);i++)if(!(L[i]%2))c++;
  cout<<c;

  return 0;
}