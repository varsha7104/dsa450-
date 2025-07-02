// your task is to find the union of the array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    vector<int> a(n),b(m);
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>a[i];st.insert(a[i]);
    }
   for(int i=0;i<m;i++) {cin>>b[i]; st.insert(b[i]);}
   
  vector<int>v(st.begin(),st.end());
  for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
  cout<<endl;}

  /*
  Output:
  5 4
1 2 3 4 5
3 4 5 6
1 2 3 4 5 6 
*/