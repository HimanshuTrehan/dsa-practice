#include<iostream>
using namespace std;

void findMinMax(int arr[],int size){
    int max=arr[0],min = arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max element "<<max<<endl;
    cout<<"Min Element "<<min<<endl;
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
    findMinMax(arr,size);
}