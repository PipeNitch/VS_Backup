#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int small=0,big=0;
    cin>>ch;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]<='Z'&&ch[i]>='A')big++;
        else if(ch[i]<='z'&&ch[i]>='a')small++;
    }
    if(big<=small)
    {
        for(int i=0;i<ch.length();i++)
        {
            if(ch[i]<='z'&&ch[i]>='a') continue;
            else if(ch[i]<='Z'&&ch[i]>='A') ch[i]+=32;
        }
    }
        if(big>small)
    {
        for(int i=0;i<ch.length();i++)
        {
            if(ch[i]<='Z'&&ch[i]>='A') continue;
            else if(ch[i]<='z'&&ch[i]>='a') ch[i]-=32;
        }
    }
    cout<<ch;

}
