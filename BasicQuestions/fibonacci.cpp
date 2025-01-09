#include<iostream>
using namespace std;

int fibonacci(int n){

    int a1 = 0;
    int a2 = 1;
    int res =0;
    if (n==1){
        return 0;
    }
     if(n==1 || n==2){
        return 1;
     }
     for(int i=2;i<n;i++){
       res = a1 + a2;
       a1 = a2;
       a2 = res;
     }



    return res;
}

int main()
{
   int n;
   cin>>n;

   cout<<fibonacci(n);

   return 0;

}