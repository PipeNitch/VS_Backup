#include <bits/stdc++.h>
using namespace std;

int main(){
    int T,Q,x;
    char command;
    cin >> T;
    while(T--){
        set<int> pm;
        cin >> Q;
        while(Q--){
            cin >> command;
            if(command == 'a'){
                cin >> x;
                pm.insert(x);
            }
            else if(command == 'b'){
                for(auto it=pm.begin();it!=pm.end();it++){
                    cout << *it << " ";
                }
            }
            else if(command == 'c'){
                cin >> x;
                pm.erase(x);
            }
            else if(command == 'd'){
                cin >> x;
                if(pm.count(x)){
                    cout << 1 << " ";
                }
                else{
                    cout << -1 << " ";
                }
            }
            else{
                cout << pm.size() << " " ;
            }
        }
        cout << "\n";
    }
    return 0;
}