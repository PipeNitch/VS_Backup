#include <bits/stdc++.h>
using namespace std;

int main() {
  string num1, num2;
  cin >> num1 >> num2;

  string result = "";
  int carry = 0;
  for (int i = num1.size() - 1; i >= 0; i--) {
    for (int j = num2.size() - 1; j >= 0; j--) {
      int digit1 = num1[i] - '0';
      int digit2 = num2[j] - '0';
      int product = digit1 * digit2 + carry;
      carry = product / 10;
      result += (product % 10) + '0';
    }
    if (carry) {
      result += carry + '0';
      carry = 0;
    }
  }

  reverse(result.begin(), result.end());

  cout << result << endl;

  return 0;
}
