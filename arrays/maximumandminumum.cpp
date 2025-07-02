// 1) First program is to maximum and minimum of  the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   
   int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(mini>a[i]) mini=a[i];
        if(maxi<a[i]) maxi=a[i];
    }
    cout<<maxi<<" "<<mini<<endl;
}
/*
Output:
5
1 3 2 4 5
5 1*/

