/*maximu sum in subarray*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  int s=0,maxi=0;
  for(int i=0;i<n;i++){s+=a[i];
   if(s<0) s=0;
   maxi=max(maxi,s);
  }
   

  cout<<maxi<<endl;}
/*Output:
7
2 3 -8 7 -1 2 3
11
*/