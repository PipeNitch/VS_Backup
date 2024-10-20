#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endll '\n'
#define sp ' '
typedef long long ll;

int ans=1,cnt=0;

void trvsal(vector<int> G[],bool visited[],int n,int s){
    visited[s]=true;
    for(auto i : G[s]){
        if(!visited[i]){
            trvsal(G,visited,n,i);
            cnt++;
        }
    }
}

int main() {windows;
    int n,u,v;
    cin>>n;
    vector<int> G[8];
    bool visited[8];
    memset(visited,false,sizeof(visited));
    forr(i,0,n){
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    forr(i,0,8){
        if(!visited[i]){
            trvsal(G,visited,n,i);
            ans*=cnt+1;
            cnt=0;
        }
    }
    cout<<ans<<endll;

    return 0;
 }