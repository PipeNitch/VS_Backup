#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    n=n-1;

    for(int i=0;i<=n;i++){

        for(int j=-n;j<=n;j++){

            if(i==n||abs(j)==i) cout<<"*";
            else cout<<".";

            cout<<j<<","<<i<<"   ";   // เอาไว้แสดงผลคู๋อันดับ
        }

        cout<<"\n\n";

    }

    return 0;
}