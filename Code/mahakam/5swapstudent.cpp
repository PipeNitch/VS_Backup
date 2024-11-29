#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i,a,n) for(int i=a;i<n;i++)
#define endll '\n'
#define sp ' '

int main(){windows;
    cin.ignore(26);
    int n,sw;cin>>n;
    deque<string> name(n);
    cin.ignore(22);
    forr(i,0,n){
        cin.ignore(3);
        cin>>name[i];
    }
    cout<<"Initial Line: ";
    forr(i,0,n)cout<<name[i]<<" ";
    cin.ignore(27);
    cin>>sw;
    forr(i,0,sw){
        name.push_front(name[name.size()-1]);
        name.pop_back();
    }
    cout<<endll<<"After "<<sw<<" rotations: ";
    forr(i,0,n)cout<<name[i]<<" ";

    return 0;
}