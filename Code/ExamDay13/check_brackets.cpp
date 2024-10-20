// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;cin>>n;cin.ignore();
//     for(int i=0;i<n;i++){
//         int o=0,c=0;
//         string x="";
//         getline(cin,x);
//         for(char i : x){
//             if(i=='(')o++;
//             else if(i==')')c++;
//         }
//         if(o==c)cout<<"Safe\n";
//         else cout<<"Danger\n";
//     }

//     return 0;
// }

















#include <iostream>
#include <stack>
using namespace std;

bool check_brackets(const string& x) {
    stack<char> s;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '(')
            s.push(x[i]);
        else if (x[i] == ')') {
            if (s.empty())
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    int lines;
    cin >> lines;
    cin.ignore();
    string x;

    for (int i = 0; i < lines; i++) {
        getline(cin, x);
        if (check_brackets(x))
            cout << "Safe\n";
        else
            cout << "Danger\n";
    }

    return 0;
}