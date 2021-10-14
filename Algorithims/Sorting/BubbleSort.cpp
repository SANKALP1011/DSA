#include <iostream>
using namespace std;

int swapValues(int *x , int *y){
   int temp =  *x;
   *x = *y;
   *y = temp;
}

int BubbleSort(int arr[] , int n){
    int i;
    bool swapped;
    for(i=0;i<=n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swapValues(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int printArray(int array[],int size){
    int i = 0;
    for(i;i<=size;i++){
        cout<<array[i]<<" "<<endl;
    }
}

int main()
{
    int arr[5];
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter your array"<<" "<<endl;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
     BubbleSort(arr , n);
    cout<<"THE SORTED ARRAY IS"<<" "<<endl;
    printArray(arr,n);
}