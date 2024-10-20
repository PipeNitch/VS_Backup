#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

bool check(string s){
    int c1=0,c2=0,c3=0;
    for(char i : s){
        if(i=='(')c1++;
        else if(i==')')c1--;
        else if(i=='[')c2++;
        else if(i==']')c2--;
        else if(i=='{')c3++;
        else if(i=='}')c3--;
        if(c1<0||c2<0||c3<0)return 0;
    }
    if(!c1&&!c2&&!c3)return 1;
    else return 0;
}

int main(){
    int n;cin>>n;cin.ignore();
    for(int i=0;i<n;i++){
        string s;getline(cin,s);
        cout<<(check(s)?"Human Safe\n":"AI Intrusion Detected\n");
    }

    return 0;
}