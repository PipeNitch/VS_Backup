#include <bits/stdc++.h>
using namespace std;

// int isPrime(int num) {
//     if (num <= 1) {
//         return 0;
//     }

//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//     }

//     return 1;
// }

// int findPrimeAtPosition(int position) {
//     int count = 0;
//     int num = 2;

//     while (count < position) {
//         if (isPrime(num)) {
//             count++;
//             if (count == position) {
//                 return num;
//             }
//         }
//         num++;
//     }

//     return -1;
// }

// int main() {
//     int pos1,pos2;
//     cin>> pos1>>pos2;
//     int primepos1 = findPrimeAtPosition(pos1);
//     int primepos2 = findPrimeAtPosition(pos2);
//     cout<<primepos1<<primepos2;

//     return 0;
// }

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,b,c=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            c++;
        }
    }
    cout<<c;
}