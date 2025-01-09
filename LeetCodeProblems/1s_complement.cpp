#include<iostream>
using namespace std;


// input = 5       101

// output = 2      010

// Need to Inverse the binary digit of the number

int main(){

    int n;
    cin>>n;

    int mask = 0;

    int m = n;

    if (n==1){
        return 1;
    }

    while(m!=0){
        mask = (mask << 1) | 1;
        m = m>>1; 
    }

    int res = (~n) & mask;
    cout<<res;

}