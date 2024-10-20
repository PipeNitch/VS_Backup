#include <bits/stdc++.h>
using namespace std;

main(){
    int x;
    cin >> x;
    x-=1;
    for(int i=x;i>=-x;i--){
        for(int j=-x;j<=x;j++){
            if(abs(i)+abs(j)<=x)cout<<"*";else cout<<" ";
        }
        cout<<endl;
    }
}