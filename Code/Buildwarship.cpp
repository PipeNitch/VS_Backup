#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    for(int j=-n;j<=n;j++){
      // cout<<"("<<j<<", "<<i<<") ";
      if(abs(j)-i>1) cout<<" ";
      else if(j==0) cout<<"-";
      else if(j<0) cout<<"/";
      else if(j>0) cout<<"\\";
      else cout<<"*";
    }
    cout<<endl;
  }
//   cout<<string(n-2, ' ')<<"//V\\\\"<<endl;
//   cout<<string(n-2, ' ')<<"//V\\\\"<<endl;
}