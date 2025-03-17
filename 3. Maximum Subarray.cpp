#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = 0;
    for (int num : nums) {
        currSum = max(num, currSum + num);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maxSubArray(nums) << endl;
    return 0;
}
