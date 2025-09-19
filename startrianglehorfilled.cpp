#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<" * ";
            //cout<<j<<" "; (ulta number triangle)
            //cout<<(char)(j+64)<<" "; (ulta alphabet triangle)
 
        }
        cout<<endl;
    }
}