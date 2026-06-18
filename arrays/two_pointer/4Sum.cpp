//pehele sort karo
// 2 ptr ko fix kara, bki do pe two-ptr lagao
//MISTAKE: mein pehele int sum kiya, runtime error aaya toh --->
//Jab bhi: Array values ≈ 10^9 aur 2 ya usse zyada numbers add ho rahe hain turant socho: long long

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n= nums.size();
        for (int i=0; i<n-3; i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for (int j=i+1; j<n-2; j++){
                if (j>i+1 &&  nums[j]==nums[j-1])
                    continue;
                int left=j+1;
                int right= n-1;
                while(left<right){
                    long long sum= (long long)nums[i]+ nums[j]+ nums[left]+ nums[right];
                    if(sum<target)
                        left++;
                    else if(sum>target)
                        right--;
                    else{
                        ans.push_back({
                            nums[i], nums[j], nums[left], nums[right]
                        });
                        while(left<right && nums[left]==nums[left+1])
                            left++;
                        while(left<right && nums[right]==nums[right-1])
                            right--;
                        left++;
                        right--;
                    }
                }
                
            }
        }
        return ans;
    }
};
