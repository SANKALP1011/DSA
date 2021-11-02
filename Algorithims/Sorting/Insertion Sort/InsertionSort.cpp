#include <iostream>
using namespace std;

//Insertion sort function.
void InsertionSort(int arr[] , int n){
    int i , key , j;
    for(i=0;i<n;i++){                     //Iterating through the array.
        key = arr[i];  
        j = i-1;
        
        while(j>=0 && arr[j]>key){        //Checking the value.
            arr[j+1] = arr[j];            //Assigning the value. 
            j = j-1;
        }
        arr[j+1] = key;
    }
}
 
//Printing the values of the array.
int PrintValue(int array[] , int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" "<<endl;
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
    InsertionSort(arr,n);
    cout<<"The sorted array is"<<" "<<endl;
    PrintValue(arr,n);
}