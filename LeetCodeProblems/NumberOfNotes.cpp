#include<iostream>
using namespace std;


int main(){

int n;
cin>>n;
int notes_100=0,notes_50 = 0,notes_20 = 0, notes_10 = 0;

if(n%10 != 0){
    cout<<"Please enter Number with multiple of 10";
    return 0;
}

if(n>=100){
    notes_100 = n/100;
    n = n - (notes_100*100);
}
if(n>=50){
    notes_50 = n/50;
    n = n - (notes_50*50);

}
if(n>=20){
    notes_20 = n/20;
    n = n - (notes_20*20);

}
if(n>=10){
    notes_10 = n/10;
    n = n - (notes_10*10);

}

cout<<"Notes_100: "<<notes_100<<endl;
cout<<"Notes_50: "<<notes_50<<endl;
cout<<"Notes_20: "<<notes_20<<endl;
cout<<"Notes_10: "<<notes_10<<endl;

return 0;
}