//Will return a vector of sums from the input vector in order

#include <vector>
std::vector<int> runningSum(std::vector<int>& nums) {
        std::vector<int> output;

        int num = 0;
        for(int x = 0; x < nums.size(); ++x) {
            num = num + nums[x];
            output.push_back(num);
        }
        return output;
}

int main() {
    std::vector<int> nums {1, 2, 3, 4, 5};
    std::vector<int> sums = runningSum(nums);


    return 0;
}
