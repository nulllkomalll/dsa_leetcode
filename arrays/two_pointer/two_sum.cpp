// if array is sorted, simply use two ptr for that:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target)
                return {left, right};
            else if (sum < target)
                left++;
            else
                right--;
        }

        return {-1, -1};
    }
};


// if array not sorted use -- hash map:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            int a= nums[i];
            int more = target -a;
            if (map.find(more)!= map.end()){
                return {map[more], i};
            }
            map[a]= i;
        }
        return{-1, -1}; 
    }
};
