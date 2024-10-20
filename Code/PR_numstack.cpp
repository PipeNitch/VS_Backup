#include <bits/stdc++.h>
using namespace std;


int main(){
    int x;
    cin >> x;
    string a;
    stack <int> st;
    for(int i=1;i<=x;i++){
        cin >> a;
        if(a[0]>= '*' && a[0] <= '/'){
            int g = st.top();
            st.pop();
            int h =st.top();
            st.pop();
            int calcu;
            if(a[0]=='+')
            {
                calcu=h+g;
            }
            if(a[0]=='-'){
                calcu=h-g;
            }
            if(a[0]=='*'){
                calcu=h*g;
            }
            if(a[0]=='/'){
                calcu=h/g;
            }
            st.push(calcu);
        }
        else
        {
            int num=stoi(a);
            st.push(num);
        }
    }
    cout << st.top();
    return 0;
}
