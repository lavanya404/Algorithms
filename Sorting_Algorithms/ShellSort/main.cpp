//if smaller elements are in rightmost of the array we can use this
//it take lesser iteration and comparison than compared to insertion sort
//Time complexity O(n2)


#include <iostream>

using namespace std;

int main()
{
    int n,gap;
    cout << "Enter array size :" << endl;
    cin>>n;
    int a[n];
    cout<<"\n Enter array elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //Logic for Shell Sort
    for(gap=int(n/2);gap>=1;int(gap/2))
    {
        for(int j=gap;j<n;j++)
        {
            for(int i=(j-gap);i>=0;(i-gap))
            {
                if(a[i+gap]>a[i])
                {
                    break;
                }
                else{
                    swap(a[i+gap],a[i]);
                }
            }
        }
    }
    cout<<"\nThe array after Shell Sort :"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
