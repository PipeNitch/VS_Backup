#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,Q;
    int x,y;
    char command;
    cin >> T;
    while(T--){
        cin >> Q;
        map<int,int> p;
        while(Q--) {
            cin >> command;
            if(command=='a') {
                cin >> x >> y;
                p[x]=y;
            }
            if(command=='b') {
                cin >> x;
                if(p.count(x)) cout << p[x] << " ";
                else cout << -1 << " ";
            }
            if(command=='c') {
                for(auto x:p){
                    cout << x.first << " " << x.second << " ";
                }
            }
        }
        cout << '\n';
    }
}