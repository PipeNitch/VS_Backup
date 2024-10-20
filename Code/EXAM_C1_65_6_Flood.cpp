#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,u,mx;
  cin >> n;
  int a[n+1];
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  for(int i=0; i<n-1; i++) {
    if(a[i]<a[i+1])
    {
        cout << a[i] << ' ';
    }else {
      u=i+1;
      mx=i+1;
      while(u<n) {
        if(a[mx]<a[u])
        mx = u;
        u++;
        if(a[mx]>=a[i])
          break;
      }
      for(int j=0; j<mx-i; j++) cout << min(a[i], a[mx]) << " ";
      i = mx-1;
    }
  }

  return 0;
}