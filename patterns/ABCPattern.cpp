#include<iostream>
using namespace std;


// A A A
// B B B
// C C C

int main(){

    char a = 'A';
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<a<<" ";
        }
        a++;
        cout<<endl;
    }

}