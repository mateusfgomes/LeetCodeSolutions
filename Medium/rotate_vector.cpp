#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
        
        vector<int> ans(nums.size());
        int mod = k % nums.size();
        
        if(k == 0 || nums.size() == 1 || mod == 0){
           return;
        }
        
        int j = nums.size() - mod;
        int i = j;
        int l = 0;
        
        
        ans[l] = nums[i];
        i++;
        l++;

        while(i % nums.size() != j and l < nums.size()){
            ans[l] = nums[i % nums.size()];
            l++;
            i++;
        }
        
        nums = ans;
        
    }