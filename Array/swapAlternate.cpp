#include<iostream>
using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


void swapAlternate(int arr[],int n){

    int i=0;
    while(i<=(n-2)){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i+=2;
    }

}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr[i] = element;
    }

    swapAlternate(arr,size);
    printArr(arr,size);
}