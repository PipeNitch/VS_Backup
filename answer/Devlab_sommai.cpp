#include <bits/stdc++.h>
using namespace std;

string calcharge(int dif){
  int charge;
  if(dif<=15){
    string chargeone="FREE";
    return chargeone;
  }else if(dif<=120){
    charge=50;
    return to_string(charge);
  }else if(dif<900){
    charge=50;
    dif=dif-120;
    while(dif>=60||dif>0){
      dif=dif-60;
      charge+=10;
    }
    return to_string(charge);
  }else {
    charge=300;
    return to_string(charge);
  }
}

int main(){
  int enterhr,entermin,outhr,outmin;
  int fenter,fout;
  string charge;
  cin>>enterhr;cin.ignore();cin>>entermin>>outhr;cin.ignore();cin>>outmin;
  fenter=enterhr*60+entermin;
  fout=outhr*60+outmin;
  int dif=fout-fenter;
  charge=calcharge(dif);
  cout<<"Enter time : "<<setw(2)<<setfill('0')<<enterhr<<":"<<setw(2)<<setfill('0')<<entermin;
  cout<<"\nOut time : "<<setw(2)<<setfill('0')<<outhr<<":"<<setw(2)<<setfill('0')<<outmin;
  cout<<"\nTotal time : "<<dif/60<<" hour "<<dif%60<<" min";
  if(charge=="FREE"){
    cout<<"\nCharge : "<<charge<<".";
  }else {cout<<"\nCharge : "<<charge<<" Baht.";}
}