#include<iostream>
using namespace std;

int main(){
    int km, mtr, cm;
    long ft, inch;

    cout<<"Enter the distance ";
    cin>>km;
    mtr=km*1000;
    cm=km*100000;
    ft=km*3280.84;
    inch=km*39370.1;
    cout<<"distance in meter "<<mtr<<endl;
    cout<<"distance in centimeter "<<cm<<endl;
    cout<<"distance in feet "<<ft<<endl;
    cout<<"distance in inch "<<inch;

}