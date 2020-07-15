//Heap Sort
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int largest=i;
      int left=2*i+1;
      int right=2*i +2;
      if(left<n && arr[left]>arr[largest])
      largest=left;
      if(right<n && arr[right]>arr[largest])
      largest=right;
      if(largest!=i)
      {
          arr[i]^=arr[largest],arr[largest]^=arr[i],arr[i]^=arr[largest];
          heapify(arr,n,largest);
      }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
    for(int i=n/2 -1;i>=0;i--)
        heapify(arr,n,i);
}
int main()
{
  int n,c;
  cin>>n;
  int a[100000];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a);
  }
  cout<<"p";
  buildHeap(a,n);
  for(int i=n-1;i>=0;i++)
  {
     a[i]^=a[0],a[0]^=a[i],a[i]^=a[0];
     heapify(a,i,0);
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
    
