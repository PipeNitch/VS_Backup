#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    sum = 3000*(n/15);
    n -=(n/15)*15;
    if(n >= 9){
        sum =sum+ 3000;
        n = n- 15;
    }
    if(n >= 4){
        sum =sum + 1500;
        n = n-5;
    }
    if(n >= 2){
        sum = sum+800;
        n= n-2;
    }
    if(n == 1){
        sum = sum+500;
        n= n-1;
    }
    cout << sum;
    return 0;
}
