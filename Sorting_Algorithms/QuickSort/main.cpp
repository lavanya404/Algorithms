//We pick any one element as pivot and then use to pointers start and end
//it takes  O(n2) in worst case means desending order
//it takes O(n log n) in Best and average case

#include <iostream>

using namespace std;
int n;
int partitation(int a[],int lb,int ub)
{
    int pivot=a[ub];
    int i=(lb -1);
    for(int j=lb;j<=ub-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    /*int pivot = a[lb];
    int start = lb;
    int endp = ub-1;
    while(start<endp)
    {
        while(a[start]<=pivot)
            start++;

        while(a[endp]>pivot)
            endp--;
        if(start<endp)
            swap(a[start],a[endp]);
    }*/
    swap(a[i+1],a[ub]);
    return (i+1);
}

void Quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc = partitation(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }

}


int main()
{

    cout << "Enter N value" << endl;
    cin>>n;
    int a[n];
    cout<<"\nEnter N array elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //Quicksort
    int lb=0;
    int ub=n;
    Quicksort(a,lb,ub);
    cout<<"\n"<<"The Array After Quicksort "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}
