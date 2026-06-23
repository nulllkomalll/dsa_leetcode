//TC= O(n), Sc=O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};

//in-place: TC= O(n), SC=O(1)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            nums[i]+= nums[i-1];
        }
        return nums;
    }
};
