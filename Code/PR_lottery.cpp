#include<bits/stdc++.h>
using namespace std;
int A[13],n;
vector<int> num;
void solve(int i){
    if(num.size()==6){
        for(auto k:num)cout<<k<<" ";
        cout<<'\n';
    }else{
        for(int j=i;j<n;j++){
           num.push_back(A[j]);
           solve(j+1);
           num.pop_back();
        }
    }
}

int main(){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        solve(0);
}