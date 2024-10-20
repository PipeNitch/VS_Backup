#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    srand(time(NULL));
    int n,secret = rand()%10+1;
    do{
        cin>>n;
    }while(n!=secret);

    cout<<"Congrats!";

    return 0;
}