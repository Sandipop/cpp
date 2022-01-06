#include<iostream>
using namespace std;

int main(){
    int m,n,i;

    cout<<"enter the number ";
    cin>>n;

    for(i=1; i<=10; i++){
        m=n*i;
        cout<<n<<"x"<<i<<" = "<<m<<endl;
    }
    
}