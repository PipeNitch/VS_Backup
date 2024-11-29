#include<bits/stdc++.h>
using namespace std;

bitset<int(1e6+9)> a;
const long long N = 1e6;

int main(){
    int n,c=0;cin>>n;
    if(n<=0){
        cout<<"ไม่สามารถหาได้";
        return 0;
    }
    a[2]=0;
    for(long long i=3;i<=N;i+=2)if(!a[i])for(long long j = i*i;j<=N;j+=(i*2))a[j]=1;
    for(int i=2;i<=n;i++)if(!a[i]&&(i==2||i%2))c++;
    printf("จำนวนเฉพาะในช่วง 0 ถึง %d\nมีอยู่ %d จำนวน",n,c);

    return 0;
}