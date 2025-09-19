#include<iostream>
using namespace std;
int swap(int& x,int& y) {
    int temp=x;
    x = y;
    y = temp;
}
int main(){
    int x;
    cout<<"enter 1st no ";
    cin>>x;
    int y;
    cout<<"enetr 2nd no ";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y;

}