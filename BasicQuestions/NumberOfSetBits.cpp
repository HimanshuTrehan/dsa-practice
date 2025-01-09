#include<iostream>
using namespace std;


int numberOfBits(int n){
    int res = 0;
    while(n!=0){

        if ((n&1)==1){
           res++;
        }
        n = n/2;
    }
    return res;
}

int main(){
    int a,b;
    cin>>a>>b;

    int res = numberOfBits(a) + numberOfBits(b);

    cout<<res;

    return 0;


}