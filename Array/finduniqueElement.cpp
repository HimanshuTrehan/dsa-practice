#include<iostream>
using namespace std;

int findUniqueElements(int arr[],int n){

    int res =0;

    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    return res;
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

    cout<<findUniqueElements(arr,size);
    return 0;
}