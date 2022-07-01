#include <iostream>
using namespace std;

void sink_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int n,i;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;

    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAYS: ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"INITIAL ARRAY IS : ";
    display(arr,n);

    sink_sort(arr,n);
    cout<<"SORTED ARRAY IS : ";
    display(arr,n);

    return 0;

}