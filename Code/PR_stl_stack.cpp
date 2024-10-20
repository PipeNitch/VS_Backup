#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    stack<int> st;
    while(t--)
    {
        int q;cin>>q;
        for(int j=1;j<=q;j++)
        {
            char cmd; cin>>cmd;
            if(cmd=='a')
            {
                int x; cin>>x;
                st.push(x);
            }
            else if(cmd=='b')
            {
                if(st.empty()==false)
                {
                    cout<<st.top()<<" ";
                    st.pop();
                }else{
                 cout<<"-1";
                 }
            }
            else if(cmd=='c') cout<<st.size()<<" ";
            else if(cmd=='d')
            {
                if(st.empty()==false)
                {
                    cout<<st.top()<<" ";
                }else cout<<"-1";
            }
        }
        cout<<'\n';
    }
}
