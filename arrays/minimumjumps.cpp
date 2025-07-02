/*You need ot find the minimu jumps */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 int maxi=0;
 for(int i=0;i<n;i++){if(i<=maxi)
     maxi=max(maxi,arr[i]+i);
 }if(maxi<n-1) cout<<"-1\n";
 else {
     int r=0,l=0,c=0;
     while(r<n-1){
         maxi=0;for(int i=l;i<=r;i++){
             maxi=max(maxi,arr[i]+i);
         }l=r+1;
         r=maxi;
         c++;
     }
 
   

  cout<<c<<endl;}}
/*
11
1 3 5 8 9  2 6 7 6  8 9
3*/