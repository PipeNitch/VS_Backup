#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int q; cin>>q;
        queue<int> Q;
        for(int j=1;j<=q;j++)
        {
            char cmd; cin >> cmd;
            if(cmd=='a')
            {
                int x; cin>>x;
                Q.push(x);
            }else if(cmd=='b')
            {
                if(Q.empty()==false)
                {
                    cout<<Q.front()<<" ";
                    Q.pop();
                }else
                cout<<"-1"<<" ";
            }
                else if(cmd=='c')
                {
                    cout<<Q.size()<<" ";
                }
                else if(cmd=='d')
                {
                    if(Q.empty()==false)
                {
                    cout<<Q.front()<<" ";
                }
                else cout<<"-1"<<" ";
            }else if(cmd=='e'){
                if(Q.empty()==false)
                {
                    cout<<Q.back()<<" ";
            }else cout<<"-1"<<" ";
        }
    }cout<<'\n';
}
}
