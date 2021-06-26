//MergeSort is a Sorting technique
//It uses Divide and Conquer method
#include <iostream>
int b[50];
int a[50];
using namespace std;

void mergearray(int a[],int lb,int mid,int up)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=up)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i++];
        }
        else{
            b[k]=a[j++];
        }
        k++;
    }
    while(j<=up)
    {
      b[k]=a[j];
      j++;k++;
    }
    while(i<=mid)
    {
     b[k]=a[i];
     i++;k++;
    }
    for(i=lb;i<=up;i++)
        a[i]=b[i];
}

void mergesort(int a[],int lb,int up)
{
    int mid;
    if(lb<up)
    {
        mid=(lb+up)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,up);
        mergearray(a,lb,mid,up);
    }
    else{
        return;
    }
}



int main()
{
    int n,up,lb;
    cout << "\nEnter size of array"<< endl;
    cin>>n;
    int a[n];
    cout << "\nEnter array elements"<< endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //Logic
    lb=0;
    up=n;
    mergesort(a,lb,up);
    cout<<"\nThe array after Merge Sort:\n";
    for(int k=lb;k<up;k++)
    {
        cout<<b[k]<<"\t";
    }
    return 0;
}
