//matrix multiply 
#include<bits/stdc++.h>
#define ll long long
#define sp ' '
#define en '\n'
using namespace std;

int main(){
    int m1,n1,m2,n2; cin>>m1>>n1;
    int a[m1][n1];
    for(int i=0;i<m1;i++)for(int j=0;j<n1;j++) cin>>a[i][j];
    cin>>m2>>n2;
    int b[m2][n2];
    for(int i=0;i<m2;i++)for(int j=0;j<n2;j++) cin>>b[i][j];
    if(n1==m2){
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                int sum=0;
                for(int k=0;k<n1;k++) sum+=a[i][k]*b[k][j];
                cout<<sum<<sp;
            }
            cout<<en;
        }
    }
    else cout<<"Can not multiply";
    return 0;
}