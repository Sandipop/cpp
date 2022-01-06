#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int temp;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"before swaping a="<<a<<" b="<<b <<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping a="<<a<<" b="<<b;

    return 0;
    
   
}
