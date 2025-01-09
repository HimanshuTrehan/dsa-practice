#include<iostream>
using namespace std;



// 1
// 2 1
// 3 2 1
// 4 3 2 1


int main()
{

 for (int i = 1;i<=4;i++){
    for(int j=i;j>0;j--){
        cout<<j<<" ";
    }
    cout<<endl;
 }

}