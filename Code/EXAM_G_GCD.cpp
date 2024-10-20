#include<bits/stdc++.h>
using namespace std;

main(){
    int x,g,sum,mx;
    cin>>x;
    long long int n[x];
    for(int i=0;i<x;i++){
        cin>>n[i];
    }
    long long int gcd=n[0];
    for(int i=0;i<x;i++){
        while(n[i]){
            int temp=gcd;
            gcd=n[i];
            n[i]=temp%n[i];
        }
    }
    cout<<gcd;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int x[n];

//     while (n1 != n2)
//     {
//         if (n1 > n2)
//             n1 -= n2;
//         else
//             n2 -= n1;
//     }

//     cout << n1;

//     return 0;
// }