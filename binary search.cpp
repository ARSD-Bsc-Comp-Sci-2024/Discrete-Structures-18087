#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int key)
{
    int s=0;
    int e=size;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            cout<<"The index of the "<<key<<" is ";
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
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

    cout<<binary_search(arr,n,key);
    return 0;
}
