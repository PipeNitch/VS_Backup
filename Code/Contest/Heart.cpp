#include<iostream>
using namespace std;

int main() {
    int n;
    string s="_^+*#";
    cin >> n;
    for(int i=n/2;i>=-n;i--){
        for(int j=-n;j<=n;j++){
            int c=0;
            if(abs(i)+abs(j)==n&&i<=n/2)cout<<'o';
            else if(abs(i)+abs(j)<=n&&i==abs(j))cout<<'o';
            else if(abs(i)+abs(j)<n&&i<=n/2&&i<abs(j)){
                if(i==-n/2&&j==0)cout<<'X';
                else if(i==j-n/2)cout<<'/';
                else if(i==-j-n/2)cout<<'\\';
                else if(i==0)cout<<'-';
                else if(i==-n/2)cout<<'-';
                else{
                    if(i<0)c++;
                    if(i<j-n/2)c++;
                    if(i<-j-n/2)c++;
                    if(i<-n/2)c++;
                    cout<<s[c];
                }
            }
            else cout << '.';
        }
        cout<<endl;
    }

    return 0;
}