#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
        
    int j = 0;
    int size = nums.size();
    
    
    for(int i = 0; i < size; i++){
        if(nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }
    }
    
    while(j < size){
        nums[j] = 0;
        j++;
    }
    
}