#include<iostream>
using namespace std;

bool isSorted(int *arr, int size) {

    // base case
    if(size == 0 || size == 1){
        return true;
    }

    // check if array is sorted or not
    if(arr[0] > arr[1]) {
        return false;
    }
    
    // if array is sorted perform binary search operation
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }

    
}


int main() {

    int arr[5] = {2,4,5,6,9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans) {
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "array is not sorted" << endl;
    }
}