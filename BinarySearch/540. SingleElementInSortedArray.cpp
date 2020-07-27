class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int lo = 0;
        int hi = nums.size();
        if(nums.size() == 1)
            return nums[0];
        
        while(lo < hi) {
            int mid = (lo + hi)/2;
            
            if(mid % 2){
                if(nums[mid] != nums[mid-1])
                    hi = mid;
                else
                    lo = mid + 1;
            } else {
                if(nums[mid] != nums[mid+1])
                    hi = mid;
                else
                    lo = mid + 1;
            }
        }
        
        return nums[lo];
    }
};
