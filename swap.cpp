#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter 1st no ";
    cin>>x;
    int y;
    cout<<"enetr 2nd no ";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    int temp=x;
    x = y;
    y = temp;
    cout<<x<<" "<<y;

}