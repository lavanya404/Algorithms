//Insertion Sorting
//we divide given array into sorted and unsorted
//then check for condition i > i-1 if true shift i and copy from temp
//worst case O(n),best case O(1){if array is already sorted}
#include <iostream>

using namespace std;

int main()
{
  int n,temp,k;
  cout<<"Enter array size : ";
  cin>>n;
  int a[n];
  cout<<"\nEnter array elements : ";
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int j=1;j<n;j++)
  {
      temp = a[j];
      k=j-1;
      while(k>=0 && a[k]>temp)
      {
          a[k+1] = a[k];
          k--;
      }
      a[k+1]=temp;
  }
  cout<<"\nArray elements after insertion sorting : ";
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<"\t";
  }

  return 0;
}
