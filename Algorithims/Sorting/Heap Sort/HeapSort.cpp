#include <iostream>
using namespace std;

//Function to create a heap.
void heapify(int arr[] , int n , int i){
    int largest = i;
    int left = 2*i+1;                                     //Formula for the left.
    int right = 2*i+2;                                    //Formula for the right.

    if(left<n && arr[left]> arr[largest]){
        largest = left;                                   //Checking for the left.
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;                                  //Checking for the right.
    }
    if(largest != i){
        swap(arr[i] , arr[largest]);                      //Swapping the value if i is not the largest.
        heapify(arr,n,largest);
    }
}
//Function for sorting the array using heap sort.
void HeapSort(int arr[],int n){
    for(int i=n/2 -1;i>=0;i--){                           //Iterating through the array.
        heapify(arr,n,i);
    }
    for(int i = n-1;i>0;i--){
        swap(arr[0],arr[i]);                          
        heapify(arr,i,0);
    }
}
//Function to print the array.
void printArray(int arr[] , int n){
    for(int i = 0; i<=n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int arr[5];
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter your array"<<" "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    HeapSort(arr,n);               
    cout<<"The sorted array is"<<" "<<endl;
    printArray(arr,n);
}