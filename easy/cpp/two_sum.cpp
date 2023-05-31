// Will grab the indices of the first two numbers that add up to the target number
// https://leetcode.com/problems/two-sum/description/

#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for(int x = 0; x < nums.size(); ++x) {
        for(int y = x + 1; y < nums.size(); ++y) {
            if(nums[x] + nums[y] == target) { return {x, y}; }
        }
    }
}

return {};
int main() {
    std::vector<int> nums {1, 2, 3, 4, 5};
    auto result = twoSum(nums, 7);

    if (result) {
        for(auto i : *result) {
            std::cout << i << ", ";
        }
    } else {
        std::cout << "No pair found";
    }
}
