//Given an array nums of integers, return how many of them contain an even number of digits.
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int num_of_digits = 0;
        for(int i = 0; i < nums.size(); i++){
            int digit = nums[i];
            while(digit != 0){
                digit = digit /10;
                num_of_digits++;
            }
            if(num_of_digits %2 == 0){
                count++;
            }
        }
        return count;
    }
};