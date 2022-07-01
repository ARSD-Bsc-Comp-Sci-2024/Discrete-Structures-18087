#include <iostream>
using namespace std;

void tower_of_hanoi(int n,char src,char dest,char helper)
{
    if(n == 0)
    {
        return;
    }
    tower_of_hanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    tower_of_hanoi(n-1, helper, dest, src);
}

int main()
{
    int n;
    char source, destination, helper;

    cout<<"Enter the number of blocks :";
    cin>>n;
    cout<<"Enter the source rod :";
    cin>>source;
    cout<<"Enter the destination rod :";
    cin>>destination;
    cout<<"Enter the helper rod :";
    cin>>helper;

    tower_of_hanoi(n, source, destination, helper);
}