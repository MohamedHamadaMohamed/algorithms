#include <iostream>
using namespace std;

/*
complexity : O(n^2)
*/
void insertingSort(int arr[],int size);
int main()
{
int arr[5] ={1,4,2,3,5};
for (auto i : arr)
{
    cout<<i<<"\t";
}
cout<<endl;
insertingSort(arr,5);
for (auto i : arr)
{
    cout<<i<<"\t";
}
cout<<endl;


}
void insertingSort(int arr[],int size)
{
int key =0 , j =0;
for(int i =1;i<size;i++)
{
    key = arr[i];
    j = i-1;
    while(j>= 0 && arr[j]>key)
    {
       arr[j+1] = arr[j];
       j = j-1;
    }
    arr[j+1] = key;
}

}
