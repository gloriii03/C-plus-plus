#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"enter selling price ";
    cin>>sp;

    int cp;
    cout<<"enter cost price ";
    cin>>cp;

    if(sp>cp){
        cout<<"profit";
    }
        else if(sp<cp) {
            cout<<"loss";
        }
        else{
            cout<<"no profit no loss";
        }
        return 0;
}