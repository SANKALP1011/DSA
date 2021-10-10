#include <iostream>
using namespace std;

//Linear search function

int LinearSearch(int arr[],int n,int x )
{
    int i;
    for(i=0 ; i<n; i++)      //looping through the index
      if(arr[i] == x)      //if value is found at index position
            return i;
           return -1;
}

int main()
{
    int arr[5];
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Enter you array values"<<" "<<endl;
    for(int i = 0 ; i <= 5 ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search"<<" "<<endl;
    cin>>x;
    int result = LinearSearch(arr , n , x);
    (result == -1)? cout<<"Element does not exists" : cout<<"Element exist at index position"<<" "<<result<<" "<<endl;
}