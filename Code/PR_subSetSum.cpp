#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> bcounter;
int cnt=0;
void genbinary(int d[],int k,int m,int sum){
    if(sum>k){
        return;
    }
    if(m ==n){
        if(sum==k){
            cnt++;
            return;
        }

    }
    else{
        genbinary(d,k,m+1,sum+d[m]);
        genbinary(d,k,m+1,sum);
    }
}

int main(){
    cin >> n;
    int d[n];
    for(int i=0;i<n;i++){
        cin >> d[i];
    }
    int k;
    cin >>k;
    genbinary(d,k,0,0);
    cout << cnt;
}
