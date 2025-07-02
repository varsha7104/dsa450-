/*Count inversions
Given an array of integers arr[]. Find the Inversion Count in the array.
Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. */
class Solution {
  public:
    int merge(vector<int>&arr,int l,int m,int h){
        int i=l,j=m+1;
        vector<int>temp(h-l+1);
        int k=0;int c=0;
        while(i<=m && j<=h){
            if(arr[i]<=arr[j]){
                temp[k]=arr[i];
                k++;i++;
            }else {
                temp[k]=arr[j];
               
                j++;
                k++;  c+=(m-i+1);
            }
        }while(i<=m) {
            temp[k]=arr[i];
            k++;i++;
        }while(j<=h){
            temp[k]=arr[j];
            k++;j++;
        }
        for (int idx = 0; idx < temp.size(); idx++) {
        arr[l + idx] = temp[idx];
    }return c;
    }
    
int ms(vector<int>&arr,int l,int h){
        int c=0;
        if(l<h){int m=(l+h)/2;
            c+=ms(arr,l,m);
            c+=ms(arr,m+1,h);
            c+=merge(arr,l,m,h);
        }return c;
    }
    int inversionCount(vector<int> &arr) {
       return ms(arr,0,arr.size()-1);
         }
};/*Input: arr[] = [2, 4, 1, 3, 5]
Output: 3*/
//Approach is quite simple as in merge sort we divide array into subgroups you will know how many elements are larger than these array