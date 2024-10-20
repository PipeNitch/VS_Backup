#include<bits/stdc++.h>
using namespace std;

main(){
    int n;
    cin>>n;
    long long int sum=0;
    for(int i=1;i<=n;i++){
        long long int temp=0;
        for(int j=1;j<=i;j++){
            temp+=j;
        }
        sum+=temp;
    }
    cout<<sum;

    return 0;
}