#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,x;
    char com;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>q;
        vector<int> v;
        for(int j=1;j<=q;j++)
        {
          cin>>com;
          if(com=='a') {cin>>x; v.push_back(x);}
          else if(com=='b') sort(v.begin(),v.end());
          else if(com=='c') reverse(v.begin(),v.end());
          else if(com=='d') cout<<v.size()<<" ";
           else if(com=='e')
            for(int d=0;d<v.size();d++)
          {
              cout<<v[d]<<" ";

          }
           else if(com=='f') sort(v.begin(),v.end(),greater<int>());

        }
        cout<<'\n';
    }
}
