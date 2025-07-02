/*your given a three sorted array you need to find common elementd between all of these three arrays*/

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
       int i=0,j=0,k=0;
       int n=arr1.size();
       vector<int>res;
       while(i<n){
          while(i+1<n && arr1[i]==arr1[i+1]) {i++;  continue;}
          while(j<arr2.size() && arr2[j]<arr1[i]) j++;
          while(k<arr3.size() && arr3[k]<arr1[i]) k++;
           if(j<arr2.size() && k<arr3.size() && arr2[j]==arr1[i]  && arr2[j]==arr3[k]){
               res.push_back(arr1[i]);
              
               j++;
               k++;
           }i++;
       }if(res.empty()) return {-1};
       
       return res;
     }
};
/*Input: arr1 = [1, 5, 10, 20, 40, 80] , arr2 = [6, 7, 20, 80, 100] , arr3 = [3, 4, 15, 20, 30, 70, 80, 120]
Output: [20, 80]*/
