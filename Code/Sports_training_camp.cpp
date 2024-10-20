#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,n) for(int i=a;i<n;i++)
#define endll '\n'
#define fpre(n) fixed<<setprecision(n)

int main(){
    vector<double> w,h;
    double sum=0;
    int n;cin>>n;
    forr(i,0,n){
        double k,l;cin>>k>>l;
        w.push_back(k);
        h.push_back(l);
    }
    forr(i,0,n){
        printf("%.2lf\t%.2lf\t%.2lf\n",h[i],w[i],w[i]/(h[i]*h[i]));
        // cout<<fpre(2)<<h[i]<<"\t"<<w[i]<<"\t"<<w[i]/(h[i]*h[i])<<endl;
        sum+=w[i]/(h[i]*h[i]);
    }

    cout<<fpre(2)<<sum<<endl<<sum/n;

    return 0;
}