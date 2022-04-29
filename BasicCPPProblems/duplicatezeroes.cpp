//Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

//Note that elements beyond the length of the original array are not written. 
//Do the above modifications to the input array in place and do not return anything.
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                for(int j=n-2;j>=i;j--){
                    arr[j+1]=arr[j];
                }
                arr[i+1] = 0;
                i++; 
            }
        }
    }
};