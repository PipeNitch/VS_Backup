#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for(int i=0;i<300;i+=3)v.push_back(i);
    int t;cin>>t;

    bool f=0;

    for(int i=0;i<300;i++) {
        if(v[i]==t){
            cout<<"Number "<<t<<" found at index "<<i<<endl;
            f=true; 
            break;
        }
    }

    if (!f)cout<<"Number "<<t <<" not found."<<endl;

    return 0;
}
