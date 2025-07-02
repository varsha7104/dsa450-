/* Your task is to find the kth minumum and kth maximum number in the array there is also chance that it may contain duplicates so we will just store everything in the set and reterive each value of kth minumum and kth maximum*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
   

    for (int i = 0; i < n; i++) cin >> a[i];
 int k;
    cin >> k;
    set<int> s(a.begin(), a.end());

    if (s.size() < k) {
        cout << "not possible\n";
        return 0;  
    }

    vector<int> v(s.begin(), s.end());
    n = v.size();

  
    

    cout << "\n" << v[k - 1] << " " << v[n - k] << endl;

    return 0;
}

/*Output:

5
1  2 3 4
2

2 3

*/