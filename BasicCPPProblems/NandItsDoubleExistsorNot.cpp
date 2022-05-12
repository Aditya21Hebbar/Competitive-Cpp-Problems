// Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

// More formally check if there exists two indices i and j such that :

// i != j
// 0 <= i, j < arr.length
// arr[i] == 2 * arr[j]
 class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int count=0;
        for(int i=0; i < arr.size();i++){
            for(int j=0;j < arr.size();j++){
                if(arr[i]==2*arr[j]){
                    count++;
                }
            }
        }
        if(count>0)
            return true;
        else
            return false;
    }
};