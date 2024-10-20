#include<bits/stdc++.h>
using namespace std;

main(){
    int n;
    cin>>n;
    int a=n-2;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<=i;j++)cout<<"X";
        for(int j=0;j<a;j++)cout<<".";
        for(int j=0;j<=i;j++)cout<<"X";
        a-=2;
        cout<<endl;
    }
    for(int i=0;i<n;i++)cout<<"X";
    cout<<endl;
    a=-1;
    
    for(int i=n/2;i>0;i--){
        a+=2;
        for(int j=0;j<i;j++)cout<<"X";
        for(int j=0;j<a;j++)cout<<".";
        for(int j=0;j<i;j++)cout<<"X";
        cout<<endl;
    }

    return 0;
}