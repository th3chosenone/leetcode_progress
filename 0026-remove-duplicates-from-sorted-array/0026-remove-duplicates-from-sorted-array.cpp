class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int x = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[x]!=nums[i]){
                
                x++;
                nums[x] = nums[i];
            }
        }

    return x+1;
    }
    
};