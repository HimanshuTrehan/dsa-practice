#include<iostream>
#include<math.h>
using namespace std;


int main()
{

    int n = 10101;
    int count =0,res=0;
    while(n>0)
    {
        if(n%10==1){
            res = res + pow(2,count); 
        }
        count++;
        n=n/10;
    }
   cout<<res;

}