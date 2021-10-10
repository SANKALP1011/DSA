#include <iostream>

using namespace std;

//Function for Interpolation search.

int InterpolationSearch(int arr[] , int start , int end , int x){
    int pos;
    if (start <= end && x > arr[start] && x < arr[end]){
        pos = start;
        pos = start + (((double)(end - start) / (arr[end] - arr[start])) * (x - arr[start])); //Probe Formula for search.

        if (arr[pos] == x)
            return pos;    //returns the index value.
        
        if (arr[pos] < x)
            return InterpolationSearch(arr , pos+1 , end , x);      //increments the start value.
        
        if (arr[pos] > x)
            return InterpolationSearch(arr , start , pos - 1 , x);  //decrements the end value.
    }
    return -1;
}

int main()
{
    int arr[5];
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Enter your array"<<" "<<endl;
    for(int i = 0 ; i<=5 ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be serached for"<<" "<<endl;
    cin>>x;

    int searchValue = InterpolationSearch(arr , 0 , n-1 , x);
    if (searchValue == -1)
    {
        cout<<"Your number does not exist"<<" "<<endl;
    }
    else
    {
        cout<<"Your number exist at"<<" "<<searchValue<<" "<<endl;
    }
    }