#include <bits/stdc++.h>
#define forr(i,a,n) for(int i=a;i<n;i++)
#define ios windows::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll "\n"
typedef long long ll;
using namespace std;
int main() {windows;
    int n,m,k;
    char ch;
    cin>>ch>>n>>m;
    k=2*n+1;
    forr(i,0,(2*n+1)*m){
        forr(j,0,(2*n+1)*m){
            if(i==j||i+j==(2*n+1)*m-1){
                cout<<'#';
            }else if(i%k==j%k||i%k+j%k==2*n||i%k==n||j%k==n){
                cout<<'+';
            }else if(i%k>=j%k-n&&i%k<=j%k+n&&i%k+j%k>=n&&i%k+j%k<=3*n){
                cout<<ch;
            }else{
                cout<<'.';
            }
        }
        cout<<endll;
    }

    return 0;
}