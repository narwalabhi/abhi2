#include<iostream.h>
int siz;
 int del(int a,int &ar[])
{  int temp;
    for(int j=a;j<siz;j++)
  { temp=ar[j];
    arr[j]=ar[j+1];  
}  ar[siz-1]=temp;
   return a;
}   
   
int main()
{ 
  cin>>siz;
  int arr[siz];
  for(int i=0;i<siz;i++)
  cin>>arr[i];
  del(3,arr);
  for(i=0;i<siz;i++)
  cout<<arr[i];  
}

