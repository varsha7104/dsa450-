//your task is to rotate a element by one
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  int l=a[0];
  for(int i=0;i<n-1;i++){
      a[i]=a[i+1];
  }a[n-1]=l;
   

  for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
  cout<<endl;}
/*
Output:
5
1 2 3 4 5
2 3 4 5 1 */