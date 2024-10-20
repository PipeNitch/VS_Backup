// #include<bits/stdc++.h>
// using namespace std;

// int findEvenAtPosition(int position) {
//     int count = 0;
//     int num = 2;
    

//     while (count < position) {
//         int temp=0;
//         num+=temp;
//         temp+=2;
//         count++;
//     }

//     return num;
// }

// main(){
//     int n,num=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         num+=findEvenAtPosition(n);
//         cout<<num;
//     }
    

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n;
  cin>>n;
  long long int sum=0;
  for(long long int i=1;i<=n;i++){
    long long int evenSum=0;
    for(long long int j=1;j<=i;j++){
      evenSum+=2*j;
    }
    sum+=evenSum;
  }
  cout<<sum;

  return 0;
}
