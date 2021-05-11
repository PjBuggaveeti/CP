//merge an array of size n into array of size m+n
#include <iostream>
#include <algorithm>
using namespace std; 
#define NA -1
void moveToEnd(int arr[], int size){
    int j=size-1;
    for(int i=size-1;i>=0;i--){
        if(arr[i]!= NA){
            arr[j]=arr[i];
            j--;
        }   
    }
}
void merge(int arr[],int arr2[],int m,int n){
    int i=n;
    int j=0;
    int k=0;
    while (k < (m + n))
   {
    if ((j == n)||(i < (m + n) && arr[i] <=arr2[j]))
    {
        arr[k] = arr[i];
        k++;
        i++;
    }
    else 
    {
       arr[k] = arr2[j];
       k++;
       j++;
    }
   }
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main()
{
   int arr[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
   int arr2[] = {5, 7, 9, 25};
    
   int n = sizeof(arr2) / sizeof(arr2[0]);
   int m = sizeof(arr) / sizeof(arr[0]) - n;
 
   moveToEnd(arr, m + n);
 
   merge(arr, arr2, m, n);
 
   printArray(arr, m+n);
 
   return 0;
}

//time complexity O(m+n)
