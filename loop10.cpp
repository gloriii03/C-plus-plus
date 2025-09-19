#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    if(i==3 || i==8) continue;
    if(i==25) break;
    cout<<i<<" ";
    }
}

// continue = jo round se nikl jata hai