/*Merge 2 sorted array without extra space */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  vector<int>a(n),b(m);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  int i=n-1,j=0;
while(i>=0 && j<m){
    if(a[i]>b[j]){
        swap(a[i],b[j]);
        i--;
        j++;
    }else break;
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
for(int i=0;i<n;i++) cout<<a[i]<<" ";
for(int i=0;i<m;i++) cout<<b[i]<<" ";
}
/*Output:
4 2
2 4 7 10 
2 3

2 2 3 4 7 10 

*/