//Selection sort divide array int sorted and unsorted array
//Sorted array initially contain empty the in select minimum from rest array
//add it to begining and so on
//Time Complexity O(n2)

#include <iostream>

using namespace std;

int main()
{
    int n,minimum;
    cout << "Enter array size :" << endl;
    cin>>n;
    int a[n];
    cout<<"\n Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //Selection Sort
    for(int i=0;i<n-1;i++)
    {
        minimum = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minimum])
                minimum = j;
        }
        if(minimum !=i)
            swap(a[i],a[minimum]);

    }
    cout<<"\nThe Array after Selection Sort :"<<endl;
        for(int i=0;i<n;i++)
            cout<<a[i]<<"\t";
    return 0;
}
