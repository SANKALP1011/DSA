#include <iostream>
using namespace std;

//Binary Search Function

int BinarySearch(int arr[] , int x , int low , int upper)
{
                            //Recursive Method
  while (low<=upper){
      int mid ;
      mid = low + (upper-low)/2;

      if(arr[mid]==x)
      
         return mid;
      
     else if(arr[mid] < x)
     
      low = mid + 1;   
     
     else
         upper = mid - 1;
}
return -1;
}

int main()
{
   int arr[5];
   int x;
   int n = sizeof(arr) / sizeof(arr[0]);

   cout<<"Enter your array"<<" "<<endl;
   for(int i = 0 ; i <= 5 ; i++)
   {
       cin>>arr[i];
   }
   cout<<"Enter your number to be searched"<<" "<<endl;
   cin>>x;

   int result = BinarySearch(arr , x , 0 , n-1);
   if (result == -1)
   {
       cout<<"Your element does not exists"<<" "<<endl;
   }
   else
   {
       cout<<"Your element exist in"<<" "<<result<<endl;
   }
}