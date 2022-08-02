#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,50};
    int st=0;
    int end=4;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(arr[mid]==2)
        return mid ;
        if(arr[mid]>2)
        end=mid-1;
        if(arr[mid]<2)
        st=mid+1;
    }
    return 0;
}