#include <iostream>
using namespace std;

//To swap values.
int swapyValues(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//Logical function of selection sort.
void SelectionSort(int arr[],int n){
    int i , j , min_index;
    for(i=0;i<n-1;i++){
        min_index = i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[min_index])
          min_index = j;
        swapyValues(&arr[min_index],&arr[i]);
    }
}
//To print the value of array.
void printArray(int array[],int size){
    int i = 0;
    for(i;i<=size;i++)
      cout<<array[i]<<" "<<endl;
}
//Test function to check the selection sort.
int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter your array"<<" "<<endl;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    cout<<"The swapped value after selection sort is"<<" "<<endl;
    printArray(arr,n);
    return 0;
}