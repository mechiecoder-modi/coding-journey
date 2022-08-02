 #include<bits/stdc++.h>
 using namespace std;

 vector<int> twoRepeated (int arr[], int N) {
       vector<int> v;
       int i;
       for(i=0;i<N+2;i++)
       {
          if(arr[abs(arr[i])]>0)
         arr[abs(arr[i])]=-arr[abs(arr[i])];
          else
          v.push_back(abs(arr[i]));
       }
       return v;
    }
int main()
{ vector<int>v;
    int n,i;
    cin >> n;
    int arr[n+2];
    for(i=0;i<n+2;i++)
    cin>> arr[i];
   v=twoRepeated (arr, n);
   cout<<v[0]<<" "<<v[1] ;
   return 0;


}