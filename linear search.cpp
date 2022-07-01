#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
         {
             cout<<"The index of the "<<key<<" is ";
             return i;
         }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number to be searched: ";
    cin>>key;

    cout<<linear_search(arr,n,key);
    return 0;
}
