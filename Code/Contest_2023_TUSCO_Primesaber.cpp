#include<bits/stdc++.h>
using namespace std;

main(){
    int l;
    cin>>l;
    int a[l],b[l];
    for(int i=0;i<l;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<l;i++){
        long long int c=1;
        for(int j=1;j<=a[i];j++){
            c=(c*j)%b[i];
        }
        if(c%b[i]==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}