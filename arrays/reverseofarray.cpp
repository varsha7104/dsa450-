// 1) First program is to reverse the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    reverse(a,a+n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

/*
Output:
5
1 2 3 7 3
3 7 3 2 1 
*/