/*Your task is to find the duplicates*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  map<int,int>mp;
  for(int i=0;i<n;i++)mp[a[i]]++;
  int k=-1;bool flag=false;
  for(auto it:mp){
      if(it.second>1){
          k=it.first;
          flag=true;
          break;
      }
  }if(flag) cout<<k<<endl;
  else cout<<"-1\n";
}

/*Output:
5
1 2 2 3 4
2*/