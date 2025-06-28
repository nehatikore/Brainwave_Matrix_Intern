#include<iostream>
using namespace std;


void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {

        int smallestIdx=i;//unsorted part starting
        for(int j=i+1;j<n;j++)
        {

            if(arr[j]<arr[smallestIdx])
            {

                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);

    }
}
void printsort(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<endl;

    }

}
int main()
{

    int n=5;
    int arr[]={5,3,7,1,9};
    selectionsort(arr,n);
    printsort(arr,n);

    return 0;

}
