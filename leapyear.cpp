#include<iostream>
using namespace std;

int main(){
    int yr;
    
    cout<<"enter the year ";
    cin>>yr;
    if (yr%400==0 || yr%100!=0 && yr%4==0)
    cout<<"year "<<yr<< " is a leap year";
    else
    cout<<"year "<<yr<< "is not a leap year";
    

}