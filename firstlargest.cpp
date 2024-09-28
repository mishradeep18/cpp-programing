// brruteforse approach 
 #include <bits/stdc++.h>
 using namespace std;

 
int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main(){
    vector<int> arr1 = {5,8,3,6};
    vector<int> arr2 = {9,3,6,7};

    cout<<"largest number at the end of the array1"<< sortArr(arr1)<<endl;
    cout<<"largesr number at the end of the array2"<<sortArr(arr2)<<endl;

}

// optimal approach using recusrsive method 

 #include <bits/stdc++.h>
 using namespace std;

 int findLargestElement(int arr[] , int n){
    int max = arr[0];
    for (int i = 0 ; i<n; i++){
        if (max<arr[i]){
            max = arr[i];
        }
    }
    return max;
 }

int main(){
    int arr1[] = {2,5,1,7,9};
    int n = 5;
    int max = findLargestElement(arr1,n);
    cout<<"Largest element of the array 1 is :"<< max << endl;

    int arr2[] = {7,3,2,9,5};
    n = 5;
    max = findLargestElement(arr2,n);
    cout<<"second Largest element array is :"<< max << endl;
}