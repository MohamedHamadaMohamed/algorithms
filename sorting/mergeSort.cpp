#include <iostream>
using namespace std;
void mergeSort(int arr[],int l ,int r);
void merge(int arr[],int left,int mid,int right);

int main()
{
int arr[5] ={1,4,2,3,5};
for (auto i : arr)
{
    cout<<i<<"\t";
}
cout<<endl;
mergeSort(arr,0,4);
for (auto i : arr)
{
    cout<<i<<"\t";
}
cout<<endl;


}
void mergeSort(int arr[],int l ,int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        mergeSort( arr,l ,m);
        mergeSort( arr,m+1 ,r);
        merge(arr,l,m,r);
 
    }
}
void merge(int arr[],int left,int mid,int right)
{
    int i =0;
    int j =0;
    int k =0;
    int n1 = mid-left+1;
    int n2 = right-mid;
    int* L=new int[n1];
    int* R=new int[n2];
    for ( i = 0; i < n1; i++)
    {
        L[i] = arr[left+i];
    }
    for ( j = 0; j < n2; j++)
    {
        R[j] = arr[mid+1+j];
    }
    i =0;
    j =0;
    k =left;
    while (i<n1 &&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] =L[i];
            i++; 
        }
        else{
            arr[k] =R[j];
            j++; 
        }
        k++;
    }
        while (i<n1)
        {
       
            arr[k] =L[i];
            i++; 
            k++;
        }
        while (j<n2)
        {
       
            arr[k] =R[j];
            j++; 
            k++;
        }

    
    



}
