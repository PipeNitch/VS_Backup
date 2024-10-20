#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,q,cmd;
    list<int> l;
    cin >> t ;
    for(int i=1;i<=t;i++){
            cin>>q;
        for(int j=1;j<=q;j++)
        {
            cin>>cmd;
            if(cmd==1){
            int x;cin>>x;
            l.push_back(x);
            for(auto a:l)cout<<a<<" ";
            cout<<'\n';
            }
        else if(cmd==2)
        {
            if(l.empty()==false){
                l.sort();
                for(auto a:l)cout<<a<<" ";
            }else cout<<"-1"; cout<<'\n';
        }
        else if(cmd==3)
        {
            if(l.empty()==false){l.reverse();for(auto a:l)cout<<a<<" ";}
            else cout<<"-1"; cout<<'\n';
        }
        else if(cmd==4)
        {
            if(l.empty()==false){cout<<l.size()<<" ";}
            else cout<<"-1"; cout<<'\n';
        }
        else if(cmd==5)
        {
            if(l.empty()==false){for(auto a:l)cout<<a<<" ";

            }else cout<<"-1"; cout<<'\n';
        }
        else if(cmd==6)
        {
            if(l.empty()==false){l.pop_back();for(auto a:l)cout<<a<<" ";    }
            else cout<<"-1"; cout<<'\n';
        }
        else if(cmd==7)
        {
            if(l.empty()==false){l.pop_front();for(auto a:l)cout<<a<<" ";   }
            else cout<<"-1"; cout<<'\n';
        }
        else if(cmd==8)
        {
            int b;
            cin>>b;
            l.push_front(b);
            for(auto a:l)cout<<a<<" ";
            cout<<'\n';


        }
    }
}
}
