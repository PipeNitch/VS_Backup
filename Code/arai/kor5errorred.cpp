#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie();cout.tie();
    const int width = 400;
    const int flipsPerLine = 5;
    int i = 0,x = 0;
    srand(time(NULL));
    bool switches[width] = {0};
    const string ch = "1234567890qwertyuiopasdfghjkl"
             "zxcvbnm,./';[]!@#$%^&*()-=_+";
    const int l = ch.size();
    system ("Color 4");
    while (true){
        for (i=0;i<width;i+=2){
            if (switches[i]){
                cout << ch[rand() % l] << "";
            }
            else{
                cout << " ";
            }
        }
        for (i=0;i != flipsPerLine; ++i){
            x = rand() % width;
            switches[x] = !switches[x];
        }
        cout << endl;
    }
return 0;
}