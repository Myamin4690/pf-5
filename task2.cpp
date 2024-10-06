#include<iostream>
#include<cmath>
using namespace std;
 float volume(float length, float width, float height);
int main()
{  
     float length,width,height;
    cout<<"Enter your length: ";
    cin>>length;
    cout<<"Enter your width: ";
    cin>>width;
   cout<<"Enter your height: ";
    cin>>height;
     volume(length,width,height);
}
    float volume(float length, float width, float height)
{
       float volume;
       string unit;
       volume=(1.0/3.0)*length*width*height;
       cout<<"Enter the desired input(millimeters,centimeters,meters,kilometers):";
       cin>>unit;
       if(unit=="millimeters")
       {volume=(volume)*1000;
       cout<<"The volume of pyramid is:"<<volume<<"  millimeters."<<endl;}
        if(unit=="centimeters")
       {volume=(volume)*100;
       cout<<"The volume of pyramid is: "<<volume<<"centimeters"<<endl;}
       if(unit=="meters")
       {volume=volume;
       cout<<"The volume of pyramid is: "<<volume<<" cubic meters"<<endl;}
       if(unit=="kilometers")
       {volume=(volume)/1000;
       cout<<"The volume of pyramid is:"<<volume<<" kilometers"<<endl;}
       return 0;
}
       
       
       
       
       