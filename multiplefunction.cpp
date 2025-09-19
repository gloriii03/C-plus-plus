#include<iostream>
using namespace std;
void usa(){
    cout<<"hey"<<endl;
    cout<<"hello usa"<<endl;
}
void india(){
    cout<<"namaste india"<<endl;
    usa();
}

int main(){
    cout<<"hola"<<endl;
    india();
    usa();
}