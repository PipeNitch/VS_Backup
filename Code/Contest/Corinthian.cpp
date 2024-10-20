#include <bits/stdc++.h>
using namespace std;

double x[101], y[101];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for (int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    double ans = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                double cal = abs( (x[i]*y[j]) + (x[j]*y[k]) + (x[k]*y[i]) - (y[i]*x[j]) - (y[j]*x[k]) - (y[k]*x[i]) ) / 2.0;

                if (cal > ans) ans = cal;
            }
        }
    }

    cout << fixed << setprecision(3) << ans;
}