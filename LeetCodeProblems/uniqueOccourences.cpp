#include<iostream>
using namespace std;

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

bool uniqueOccourenece(int arr[],int n){

    

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

    cout<<uniqueOccourenece(arr,size);
    return 0;
}