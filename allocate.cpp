#include<bits/stdc++.h>
using namespace std;
bool isfeasible(int arr[],int n,int k,int mid)

{ int req=1,sum=0;
for(int i=0;i<n;i++)
{
    if(sum+arr[i]>mid)
    {req++;
    sum=arr[i];
}
else
sum+=arr[i];
}
return req<=k;



}
// the search space is in between the max value and sum of array
// try using with min value as lowerbound of search space..
int findminpages(int arr[],int n,int k)
{
    int sum=0,mx=-1;
for(int i=0;i<n;i++)
{sum+=arr[i];
mx=max(mx,arr[i]);
}
int low=mx,high=sum,res=0;
while(low<=high)
{
    int mid=(low+high)/2;
   if(isfeasible(arr, n,k,mid))
   { res=mid;
    high=mid-1;
  }
  else
  low=mid+1;
   
}
return res;
}
int main()
{ int n;
cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int k;
    cin >> k;
int result=findminpages( arr, n, k);
cout<<result;
return 0;
}
