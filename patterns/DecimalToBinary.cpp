#include<iostream>
#include<math.h>
using namespace std;


int main()
{

  int n =10;

  int res = 0;
  int i =0;
  while(n!=0){
    int bit  = n&1;
     res = (bit * pow(10,i) + res);
    i++;
    n = n/2;
  }

  cout<<res;
   
}