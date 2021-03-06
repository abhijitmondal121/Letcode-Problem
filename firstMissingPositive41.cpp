// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Example 2:

// Input: nums = [3,4,-1,1]
// Output: 2
// Example 3:

// Input: nums = [7,8,9,11,12]
// Output: 1




class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                ans++;
            }
        }
        return ans;
    }
};