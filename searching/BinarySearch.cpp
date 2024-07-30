#include <iostream>
using namespace std;
#define size 5
/*
binary Search
array must be sorted
complexity :O(logn)
 */
int BinarySearch(int arr[],int s,int key);
int main()
{
   int index =0;
    int arr[] ={1,2,3,4,5};
    int key = 5;
    index = BinarySearch(arr,size,key);
    if(index == -1)
    {
        cout<<"elemeny is not exist\n";
    }
    else
    {
        cout<<"elemeny is exist in index : "<<index<<endl;
    }
return 0 ;
}
int BinarySearch(int arr[],int s,int key)
{
    int low =0;
    int high = s-1;
    while(low<=high)
    {
        int mid = low +(high-low)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid-1;
        }
        else if (arr[mid] < key)
        {
            low = mid+1;
        }
        
    }
return -1;
}
