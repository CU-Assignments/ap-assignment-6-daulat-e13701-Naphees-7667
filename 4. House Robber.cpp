#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int>& nums) {
    int prev = 0, curr = 0;
    for (int num : nums) {
        int temp = max(prev + num, curr);
        prev = curr;
        curr = temp;
    }
    return curr;
}

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};
    cout << "Max amount robbed: " << rob(nums) << endl;
    return 0;
}
