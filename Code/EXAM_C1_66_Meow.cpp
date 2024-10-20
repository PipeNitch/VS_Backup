#include <bits/stdc++.h>
using namespace std;
string word;
// string arr[500];
// bool chk(string str){
//     for ()
// }
int main () {
    int t;
    string ck="meow";
    cin >> t >> ws;
    
    bool b=false;
    char ch[4]={'m','e','o','w'};
    while (t--){
        b=false;
        getline (cin,word);
        word=' '+word+' ';
        for(int i=1;i<word.size();i++){
            if(word[i-1]==' '&&word[i]=='m'){
                int j=i;
                bool v=false;
                for(int k=0;j<word.size();j++){
                    if(k==4){
                        k=0;
                    }
                    if(word[j]!=ch[k]){
                        v=true;
                    }else{
                        if(word[j]=='w'&&word[j+1]==' '){
                            b=true;
                            break;
                        }
                        k++;
                    }
                    if(v){
                        break;
                    }
                }
                i=j;
            }
            if(b){
                break;
            }
        }
        if(b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}