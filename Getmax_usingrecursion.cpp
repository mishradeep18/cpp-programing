#include <iostream>
using namespace std;
int getSum(int *arr , int size){
// base condition.
    if(size == 0){
        return 0;}
    if(size==1){
        return arr[0];}
int remainingpart = getSum(arr+1, size-1);
int sum = arr[0] + remainingpart;
return sum;
    
}

int main() {
    
int arr[5] = {2,4,7,9,5};
int size = 5;
int sum = getSum(arr, size);
cout << "the sum is " << sum <<endl;
    
    return 0;
}
