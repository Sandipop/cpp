#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<"before swaping a= "<<a<<" b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swaping a= "<<a<<" b= "<<b;
}

