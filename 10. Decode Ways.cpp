#include <iostream>
#include <vector>
using namespace std;

int numDecodings(string s) {
    if (s.empty() || s[0] == '0') return 0;
    int prev = 1, curr = 1;
    for (int i = 1; i < s.size(); i++) {
        int temp = (s[i] != '0') ? curr : 0;
        if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'))
            temp += prev;
        prev = curr;
        curr = temp;
    }
    return curr;
}

int main() {
    string s = "226";
    cout << "Ways to decode: " << numDecodings(s) << endl;
    return 0;
}
