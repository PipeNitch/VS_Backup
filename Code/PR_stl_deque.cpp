#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,q;
    cin>>t>>q;
    deque<int> d;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=q;j++)
        {

            int x;
            cin>>x;
            if(x==1){

             int a;
             cin>>a;
             d.push_front(a);
             for(auto x:d) cout<<x<<" ";
             cout<<'\n';
            }
            else if(x==2)
            {
                int b;
                cin>>b;
                d.push_back(b);
                for(auto x:d) cout<<x<<" ";
                cout<<'\n';
            }
            else if(x==3)
            {
                d.pop_front();
                if(d.empty()==true) cout<<"-1";
                else  for(auto x:d) cout<<x<<" ";
                cout<<'\n';

            }
            else if(x==4)
            {
                d.pop_back();
                if(d.empty()==true) cout<<"-1";
                else  for(auto x:d) cout<<x<<" ";
                cout<<'\n';
            }
            else if(x==5)
            {
                if(d.empty()==true) cout<<"-1";
                else  sort(d.begin(),d.end());
            }
            else if(x==6)
            {
                if(d.empty()==true) cout<<"-1";
                else  reverse(d.begin(),d.end());
            }
            else if(x==7)
            {
                if(d.empty()==true) cout<<"-1";
                else for(auto x:d) cout<<x<<" ";
                cout<<'\n';
            }
            else if(x==8)
            {
                if(d.empty()==true) cout<<"-1";
               else cout<<d.size()<<'\n';
            }
            else if(x==9)
            {
                if(d.empty()==true) cout<<"-1";
                else cout<<d.front()<<'\n';
            }
            else if(x==10)
            {
                if(d.empty()==true) cout<<"-1";
                else cout<<d.back()<<'\n';
            }
        }
    }
}
