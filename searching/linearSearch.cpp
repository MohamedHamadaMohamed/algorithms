#include <iostream>
using namespace std;
#define size 5
/*
linear Search
complexity :O(n)
 */
int linearSearch(int arr[],int s,int key);
int main()
{
    int index =0;
    int arr[] ={1,5,2,3,4};
    int key = 5;
    index = linearSearch(arr,size,key);
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
int linearSearch(int arr[],int s,int key)
{
    for (int i = 0; i < s; i++)
    {
        /* code */
        if(arr[i] == key)
        {
            return i;
        }
    }    
        return -1;

    
}
