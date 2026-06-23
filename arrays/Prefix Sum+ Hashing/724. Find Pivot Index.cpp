//pivot= left sum- right sum
//use accumulate, pass 3 parameters for it- first_iterator, last_iterator, initial value

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int total= accumulate(nums.begin(), nums.end(),0);
        int left=0;

        for(int i=0; i<n; i++){
            int right= total-left-nums[i];
            if(left==right)
                return i;
            left+=nums[i];
        }
        return -1;
    }
};
