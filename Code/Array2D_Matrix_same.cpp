#include<bits/stdc++.h>
using namespace std;
#define windows ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){windows;
    bool is=1;
    int ma,na,mb,nb;
    cin>>ma>>na;
    int A[ma][na];
    for(int i=0;i<ma;i++){
        for(int j=0;j<na;j++){
            cin>>A[i][j];
        }
    }
    cin>>mb>>nb;
    int B[mb][nb];
    for(int i=0;i<mb;i++){
        for(int j=0;j<nb;j++){
            cin>>B[i][j];
        }
    }

    for(int i=0;i<ma;i++){
        for(int j=0;j<na;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<mb;i++){
        for(int j=0;j<nb;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    if(ma!=mb||na!=nb){
        cout<<"A!=B";
        return 0;
    }

    for(int i=0;i<ma;i++){
        for(int j=0;j<na;j++){
            if(A[i][j]!=B[i][j]){
                is=0;
                break;
            }
        }
    }

    // cout<<(is?"A==B":"A!=B");
    if(is)cout<<"A==B";
    else cout<<"A!=B";

    return 0;
}