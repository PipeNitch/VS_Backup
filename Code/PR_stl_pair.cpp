#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,Q;
    char command;
    string s;
    int x,y;
    cin >> T;
    while(T--) {
        vector<pair<int,pair<int,string>>> pm;
        cin >> Q;
        while(Q--) {
            cin >> command;
            if(command=='a') {
                cin >> s >> x >> y;
                pm.push_back({x,{y,s}});
            }
            else if(command=='b') {
                cout << pm.size() << " ";
            }
            else if(command=='c') {
                for(auto x:pm) {
                    cout << x.second.second << " " << x.first << " " << x.second.first << " ";
                }
            }
            else if(command=='d') {
                sort(pm.begin(),pm.end());
            }
        }
        cout << '\n';
    }
}