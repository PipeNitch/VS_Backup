#include <bits/stdc++.h>
using namespace std;

bool isValidPassword(string password){
  if(password.length()<3||password.length()>20)return 0;

  bool hasUpper=0,hasLower=0,hasNumber=0,hasSpecial=0;
  for(char i : password){
    if(isupper(i))hasUpper=1;
    else if(islower(i))hasLower=1;
    else if(isdigit(i))hasNumber=1;
    else hasSpecial=1;
  }
    return hasUpper&&hasLower&&hasNumber&&hasSpecial;
}

int main(){
  string password;
  cin>>password;
  
  if(isValidPassword(password)){
    cout<<"Valid";
  }else{
    cout<<"Invalid";
  }
}