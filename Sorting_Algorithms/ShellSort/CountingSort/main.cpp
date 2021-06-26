//Time complexity O(n+k)
//if K value is huge number it is invetible to create such long array
#include <iostream>

using namespace std;

void CountingSort(int a[],int n,int k)
{
    int countarr[k+1]={0};
    int b[n];

    for(int i=0;i<n;i++)
    {
        ++countarr[a[i]];
    }
    for(int j=1;j<=k;j++)
    {
        countarr[j] = countarr[j] + countarr[j-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[--countarr[a[i]]] = a[i];
    }
    cout<<"\nThe array after Counting Sort :"<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}

int main()
{
    int n,k;
    cout << "Enter array size :" << endl;
    cin>>n;
    int a[n];
    cout<<"\n Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nEnter K value(k is the maximum number in the given array :"<<endl;
    cin>>k;
    CountingSort(a,n,k);
    return 0;
}
