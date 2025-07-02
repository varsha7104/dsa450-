/* You will given an array of 0,1,2 you need to sort without any algorithm*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]==0){
            swap(a[m],a[l]);
            m++;l++;
        }else if(a[m]==1) m++;
        else {
            swap(a[m],a[h]);
            h--;m++;
        }
    }for(int i=0;i<n;i++) cout<<a[i]<<" ";}
/*
Output:
5
1 2 0 0 1
0 0 1 1 2 
*/