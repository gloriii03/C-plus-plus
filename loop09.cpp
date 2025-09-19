#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no ";
    cin>>n;
    int f = 1; //store karega highest factor ko
    for( int i=1;i<n;i++){
        if(n%i==0)
       f = i;
    } 
    cout<<f;
} 


// factor of number