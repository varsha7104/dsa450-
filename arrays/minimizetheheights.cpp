/*Your task is t om inimize the difference when a value k is added */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  int s=0,maxi=0;
  sort(arr.begin(),arr.end());
  int tmin=arr[0];
  int tmax=arr[n-1];
  int ans=arr[n-1]-arr[0];
  for(int i=1;i<n-1;i++){
      if(arr[i]-k<0) continue;
      tmin=min(arr[0]+k,arr[i]-k);
      tmax=max(arr[n-1]-k,arr[i]+k);
      ans=min(ans,tmax-tmin);
  }
   

  cout<<ans<<endl;}

  /*Output:
  4 2
1 5 8 10


5*/