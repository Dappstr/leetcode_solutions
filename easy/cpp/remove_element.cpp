#include <iostream>
#include <vector>

int removeElement(vector<int>& nums, int val) {
    for(int i = 0; i < nums.size(); ++ i) {
        if(nums.at(i) == val) {
            nums.erase(nums.begin() + i);
            //Set the index back one so that all indexes are checked
            --i;
        }  
    }
    //return the size
    return nums.size();
}
