#include <iostream>
#include <math.h>

using namespace std;

//Jump Search function.

int JumpSearch(int arr[] , int x , int n){
    
    int stepBlockSize = sqrt(n);
    int start = 0;

    while(arr[min(stepBlockSize,n)-1] < x){
        start = stepBlockSize;
        stepBlockSize += sqrt(n);
        if (start > n)
        {
            return -1;
        }
    }

    //Linear saerch for our value.

    while(arr[start] <x){
        start++;              //Incremneting the start so that we could search the value for the next position.

        if (start == min(stepBlockSize,n)){
            return -1;
        }
    }

    if (arr[start] == x){
        return start;
    }
    else{
        cout<<"Your number is not present"<<" "<<endl;
    }
}

int main()
{
    int arr[5];
    int x;
    int n = sizeof(arr)/sizeof(arr[0]);
     cout<<"Enter your array"<<" "<<endl;
     for(int i = 0 ; i<=5 ; i++){
         cin>>arr[i];
     }
     cout<<"Enter your number to be searched"<<" "<<endl;
     cin>>x;

     int jumpSearch = JumpSearch(arr , x , n);
     cout<<"Your number is present at position"<<" "<<jumpSearch<<" "<<endl;
}

