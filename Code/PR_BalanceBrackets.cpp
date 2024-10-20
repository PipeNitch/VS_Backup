#include<bits/stdc++.h>
using namespace std;

int main() {
  string str;
  int cp = 0, cc = 0, cs = 0;

  cin >> str;

  for (int i=0;i<str.length();i++) {
    if(str[i]=='('||str[i]==')')cp++;
    else if(str[i]=='{'||str[i]=='}')cc++;
    else if(str[i]=='['||str[i]==']')cs++;
    }

  // แสดงผลลัพธ์
  cout << "จำนวน (, ): " << cp << endl;
  cout << "จำนวน {, }: " << cc << endl;
  cout << "จำนวน [, ]: " << cs << endl;

  return 0;
}
