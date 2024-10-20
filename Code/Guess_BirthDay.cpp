#include <iostream>
#include <iomanip>
using namespace std;

// main()
// {
//     string a, x="y";
//     int co;
//     for (int i = 0; i <= 4; i++)
//     {
//         cin >> a;
//         if(a==x){
//             co+=pow(2,i);
//         }
//     }
//     cout << co;

//     return 0;
// }

int main(){
    int i,j,sum=0;
    char ch;
    for(i=1;i<32;i*=2){
        int co;
        co=0;
        for(j=1;j<32;j++)
        if((j&i)==1){
            cout<<setw(3)<<j;
            co++;
            if(co%5==0) cout<<endl;
        }
        cout<<endl<<"Is your birthday in the table (y/n)?";
        cin>>ch;
        if(ch=='Y'||ch=='y')sum+=i;
    }
    if (sum==0) cout<<"Error"; else
                cout<<"Yout birthday is "<<sum;
    return 0;
}