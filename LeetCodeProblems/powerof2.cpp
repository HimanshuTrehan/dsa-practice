#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int count = 0;
    while(n>0){
        if((n & 1) == 1){
            count++;
        }
        n = n/2;
    }
    if (count == 1){
        cout<<"True";
        return 1;
    }
    
    return 0;


}