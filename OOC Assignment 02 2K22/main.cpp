#include <iostream>
#include "Date.h"
using namespace std;



int main() {

  int d1,m1,y1;
  Date ob;

  cout<<"Enter Day : ";
  cin>>d1;
  cout<<"Enter Month : ";
  cin>>m1;
  cout<<"Enter Year :";
  cin>>y1;

  ob.setDay(d1);
  ob.setMonth(m1);
  ob.setYear(y1);

  cout<<"Date : "<<ob.getDay()<<"/"<<ob.getMonth()<<"/"<<ob.getYear();


  
}
