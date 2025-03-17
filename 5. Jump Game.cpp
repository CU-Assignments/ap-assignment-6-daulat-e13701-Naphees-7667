#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int maxReach = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > maxReach) return false;
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << "Can jump to the last index: " << (canJump(nums) ? "Yes" : "No") << endl;
    return 0;
}
