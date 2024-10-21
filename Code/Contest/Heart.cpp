#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s="_^+*#";
    cin >> n;
    for(int i=n/2;i>=-n;i--){
        for(int j=-n;j<=n;j++){
            int cnt=0;
            if(abs(i)+abs(j)==n && i<=n/2)cout << 'o';
            else if(abs(i)+abs(j)<=n && i==abs(j))cout << 'o';
            else if(abs(i)+abs(j)<n && i<=n/2 && i<abs(j)){
                if(i==-n/2 && j==0)cout << 'X';
                else if(i==j-n/2)cout << '/';
                else if(i==-j-n/2)cout << '\\';
                else if(i==0)cout << '-';
                else if(i==-n/2)cout << '-';
                
                else {
                    if(i<0)cnt++;
                    if(i<j-n/2)cnt++;
                    if(i<-j-n/2)cnt++;
                    if(i<-n/2)cnt++;
                    cout << s[cnt];
                }
            }
            
            else cout << '.';
        }
        cout<<endl;
    }

    return 0;
}