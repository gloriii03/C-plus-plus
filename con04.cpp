#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no ";
    cin>>n;
    if(n%5==0 && n%2==0) {
        cout<<"divisible by 5 and 2";
    }
    else{
        cout<<"not divisible by 5 and 2";
    }
    return 0;
}