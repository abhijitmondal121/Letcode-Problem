
// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [1,1]
// Output: 1
// Example 4:

// Input: nums = [1,1,2]
// Output: 1
 




class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>ump;
        int n=nums.size();
        for(int i=0;i<n;i++){

             nums.push_back(i);         
        }
        
        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }
        
        for(auto x:ump){
            cout<<x.first<<" "<<x.second<<endl;
            if(x.second >1){
                return x.first;
            }
        }

        
        return 0;
    }
};