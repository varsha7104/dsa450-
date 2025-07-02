/*Your task is to move all negative number to left*/
#include <bits/stdc++.h>
using namespace std;
vector<int> move(vector<int>arr){
    int l=0,m=0,h=arr.size()-1;
   while(l<h && arr[l]<0) l++;
   while(h>l && arr[h]>0) h--;
   if(h>l){
       swap(arr[h],arr[l]);
       h--;l++;
   }return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans=move(a);
   
   for(int i=0;i<n;i++) cout<<ans[i]<<" ";}
/*5
-9 8 -5 4 5
-9 -5 8 4 5 

=== Code Execution Successful ===*/