#include<iostream>
#include<iomanip>
using namespace std;
float taxcalculator(char type,float price);
int main()
{ float f_price=f_price;
  cout<<fixed << setprecision(2)<<f_price;
  char type;
   float price;
   cout<<"Enter the type code(M,E,S,V,T,):";
   cin>>type;
   cout<<"Enter the price of vehicle:$";
   cin>>price;
   taxcalculator(type,price);
}
 float taxcalculator(char type,float price)
 { float tax,f_price;
  if(type=='M')
  {tax=0.06*price;
  f_price=price+tax;
  cout<<"The final price of a vehicle after adding tax is:$"<<f_price<<endl;}
  if(type=='E')
  {tax=0.08*price;
  f_price=price+tax;
  cout<<"The final price of a vehicle after adding tax is:$"<<f_price<<endl;}
  if(type=='S')
  {tax=0.10*price;
  f_price=price+tax;
  cout<<"The final price of a vehicle after adding tax is:$"<<f_price<<endl;}
  if(type=='V')
  {tax=0.12*price;
  f_price=price+tax;
  cout<<"The final price of a vehicle after adding tax is:$"<<f_price<<endl;}
  if(type=='T')
  {tax=0.15*price;
  f_price=price+tax;
  cout<<"The final price of a vehicle after adding tax is:$"<<f_price<<endl;}
    return 0;
 }






