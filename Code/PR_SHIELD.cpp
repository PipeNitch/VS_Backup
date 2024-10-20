#include<bits/stdc++.h>
using namespace std;

main(){
    // char ch;
    int n;
    // cin>>ch>>n;
    cin>>n;
    for(int i=1;i<=2*n+1;i++){
        for(int j=1;j<=2*n+1;j++){
            if(i==j||j==n+1||i+j==2*n+2||i==n+1){
                cout<<'+';
            }else if(abs(i+j)<=n+1||abs(i-j)>=n+1||i+j>=3*n+3){
                cout<<'.';
            }
            // else cout<<ch;
            else cout<<"A";
        }
        cout<<endl;
    }

    return 0;
}