#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    
    int i = 0;
    int j = nums.size()-1;
    int k = nums.size()-1;
    vector<int> ans(nums.size());
    
    while(k >= 0){
        if(nums[i]*nums[i] >= nums[j]*nums[j]){
            ans[k] = nums[i]*nums[i];
            i++;
        }
        else{
            ans[k] = nums[j]*nums[j];
            j--;
        }
        k--;
    }
    return ans;
}