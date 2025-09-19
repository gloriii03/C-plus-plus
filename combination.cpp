#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int r;
    cout<<"enter r ";
    cin>>r;
    int a = 1; 
    for( int i=1;i<n;i++){
      a *= n;
    } 
    int b = 1; 
    for( int i=1;i<r;i++){
      b *= r;
    } 
    int c = 1; 
    for( int i=1;i<n-r;i++){
      c *= n;
    } 
    cout<<a/(b*c);
} 