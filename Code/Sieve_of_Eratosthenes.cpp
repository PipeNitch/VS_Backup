#include <iostream>
#include <bitset> 
#include <vector>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

// bitset<1000001> is_prime;
// int main() {windows;
//     vector<int> n;

//     is_prime.flip();

//     is_prime[0] = is_prime[1] = false; 

//     for (int i=2; i<=1000000; i++) {
//         if (is_prime[i]) {
//             for (int j=i*2; j<=1000000; j+=i) {
//                 is_prime[j] = false;
//             }
//             cout << i << ' ';
//         }
//     }

//     return 0;
// }






// bitset<1000001> is_prime;

// void sieve() {
//     is_prime.flip();
//     is_prime[0] = is_prime[1] = false;

//     for (int i = 2; i * i <= 1000000; i++) {
//         if (is_prime[i]) {
//             for (int j = i * 2; j <= 1000000; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
// }

// bool isPrime(int number) {
//     if (!is_prime[2]) {
//         sieve();
//     }
//     return is_prime[number];
// }



// int isPrime(int n){
//     for(long long i=3;i<=N;i+=2)if(!a[i])for(long long j=i*i;j<=N;j+=(i*2))a[j]=1;
     
//     if((!(n%2) && n!=2)||n<=1)return 0;
//     if(!a[n])return 1;
//     return 0;
// }



const int N=1e6;
bitset<int(1e6+10)> a;

int main() { 
    windows;
    
    int n;
    cin>>n;

    for(long long i=3;i<=N;i+=2)if(!a[i])for(long long j=i*i;j<=N;j+=(i*2))a[j]=1;
    for(int i=0;i<=n;i++){
        if((!(i%2) && i!=2)||i<=1)continue;
        if(!a[i])cout<<i<<' ';
    }

    return 0;
}