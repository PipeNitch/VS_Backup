// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;
//     long long f0 = 0, f1 = 1, f2 = 1;
//     long long i = 2;
//     while (i <= n)
//     {
//         f2 = f1 + f0;
//         f0 = f1;
//         f1 = f2;
//         i++;
//     }
//     cout << f2 << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int fibonacci(int n) {
if(n<=2&&n>=0)return n;

return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
int n;
cin >> n;
cout << fibonacci(n) << endl;
return 0;
}