#include<iostream>
using namespace std;

int fact(int n){

   int res = 1;

   while(n!=1){

    res = res * n;

    n--;
   }
   return res;
}


int nCr(int n, int r){

     int res = fact(n) / (fact(r) * fact(n-r));

     return res;

}



int main(){

    int n,r;
    cin>>n>>r;

   cout<<nCr(n,r);

    return 0;

}