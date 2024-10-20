#include<bits/stdc++.h>
using namespace std;

main(){
    int u[3],v[3],s[3];
    for(int i=0;i<3;i++){
        cin>>u[i];
    }
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    s[0]=(u[1]*v[2])-(u[2]*v[1]);
    s[1]=(u[2]*v[0])-(u[0]*v[2]);
    s[2]=(u[0]*v[1])-(u[1]*v[0]);

    for(int i=0;i<3;i++){
        cout<<s[i]<<" ";
    }

    return 0;
}