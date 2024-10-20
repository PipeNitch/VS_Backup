#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    string n;getline(cin,n);
    int c=0;
    for(char i : n){
        if(tolower(i)=='a'||tolower(i)=='e'||tolower(i)=='i'||tolower(i)=='o'||tolower(i)=='u')c++;
    }
    cout<<c;

    return 0;
}