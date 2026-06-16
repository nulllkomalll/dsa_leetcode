// RETURN mein ternary operator ka aisa hai --> condition? true: false
// agar condition true hua toh true vala part run hoga
// agar false hui condition toh false vala part 

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum=0;
        int ans= INT_MAX;

        for(int right=0; right<nums.size(); right++ ){
            sum += nums[right];
            while(sum>= target){
                ans= min(ans, right-left+1);
                sum-= nums[left];
                left++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
