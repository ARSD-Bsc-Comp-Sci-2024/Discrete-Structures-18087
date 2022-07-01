#include<iostream>
using namespace std;

class insertion_sort
{
    int len;
    int *arr;
    public:

        insertion_sort(){
            len=0;
            arr = new int[0];
        }

        insertion_sort(int a[],int n){
            len=n;
            arr= new int[len];
            arr=a;
        }
        void display(){
            cout<<endl;
            for (int i = 0; i < len; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<"\n";

        }
        void sorted()
        {
            int i, key, j;
            for (i = 1; i < len; i++)
            {
                key = arr[i];
                j = i - 1;

                /* Move elements of arr[0..i-1], that are
                greater than key, to one position ahead
                of their current position */
                while (j >= 0 && arr[j] > key)
                {
                    arr[j + 1] = arr[j];
                    j = j - 1;
                }
                arr[j + 1] = key;
                cout<<"After "<<i<<"th iteration : \n ";
                display();
            }
        }

};
int main()
{
    int a[]={8,5,3,6};
    insertion_sort ob(a,4);
    ob.sorted();
    return 0;
}
