#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }

        numMap[nums[i]] = i;
    }

    return {};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int target;
    std::cin >> target;

    std::vector<int> indices = twoSum(nums, target);

    if (indices.size() == 2) {
        std::cout << indices[0] << " " << indices[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
