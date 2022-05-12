// Given an array of integers arr, return true if and only if it is a valid mountain array.
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        while(i<arr.size() &&  i+1<arr.size() && arr[i]<arr[i+1]){
            i++;
        }
        if(i==0 || i > arr.size()){
            return false;
        }
        while(i<arr.size() &&  i+1<arr.size()){
            if(arr[i]<=arr[i++ +1]){
                return false;
            }
        }
        return false;
    }
};