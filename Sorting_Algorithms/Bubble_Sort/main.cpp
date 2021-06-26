//Bubble Sort
//time complexity O(n2),best case O(n){already sorted array}

#include <iostream>

using namespace std;

int main()
{
    int n,temp,flag;
    cout << "Enter array size" << endl;
    cin>>n;
    int a[n];
    cout<<"Enter array Elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    //compare adjacent index elements if they are in wrong order swap
     for(int i=0;i<n-1;i++){
             flag=0;
            for(int j=0;j<n-1-i;j++)
              {
                  if(a[j]>a[j+1])
                  {
                      temp = a[j];
                      a[j] = a[j+1];
                      a[j+1] = temp;
                      flag=1;
                  }

              }
            if(flag==0)
                break;
      }
    cout<<"\n"<<"Elements after  applying Bubble Sorting"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";

    return 0;
}
