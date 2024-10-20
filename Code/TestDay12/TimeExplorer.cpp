#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    int d1,m1,y1,d2,m2,y2,c=0;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(d1==d2&&y1==y2&&m1==m2){
        cout<<0;
        return 0;
    }
    while(d1!=d2||m1!=m2||y1!=y2){
        // กุมภามี 29
        if((y1%4==0||y1%100==0)&&y1%400!=0){
            if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12){
                if(d1<31){
                    d1++;
                    c++;
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
                else{
                    m1++;
                    d1=1;
                    c++;
                    if(m1>12){
                        y1++;
                        m1=1;
                    }
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
            }
            else if(m1==4||m1==6||m1==9||m1==11){
                if(d1<30){
                    d1++;
                    c++;
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
                else{
                    m1++;
                    d1=1;
                    c++;
                    if(m1>12){
                        y1++;
                        m1=1;
                    }
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
            }else {
                if(d1<29){
                    d1++;
                    c++;
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
                else{
                    m1++;
                    d1=1;
                    c++;
                    if(m1>12){
                        y1++;
                        m1=1;
                    }
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
            }
        }
        else {
            if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12){
                if(d1<31){
                    d1++;
                    c++;
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
                else{
                    m1++;
                    d1=1;
                    c++;
                    if(m1>12){
                        y1++;
                        m1=1;
                    }
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
            }
            else if(m1==4||m1==6||m1==9||m1==11){
                if(d1<30){
                    d1++;
                    c++;
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
                else{
                    m1++;
                    d1=1;
                    c++;
                    if(m1>12){
                        y1++;
                        m1=1;
                    }
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
            }else {
                if(d1<28){
                    d1++;
                    c++;
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
                else{
                    m1++;
                    d1=1;
                    c++;
                    if(m1>12){
                        y1++;
                        m1=1;
                    }
                    cout<<d1<<" "<<m1<<" "<<y1<<endl;
                }
            }
        }
    }

    cout<<c;

/*
1   31
2   28/29
3   31
4   30
5   31
6   30
7   31
8   31
9   30
10  31
11  30
12  31
*/

    return 0;
}