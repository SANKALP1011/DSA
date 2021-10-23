#include <iostream>
#include <math.h>
using namespace std;

int JumpSearch(int arr[] , int x , int n){
    int blocksize = sqrt(n);
    int start = 0;
    while (arr[min(blocksize,n)] < x){
        start = blocksize;
        blocksize += sqrt(n);
        if (start > n){
            return -1;
        }
        else{
            
        }

    }


}