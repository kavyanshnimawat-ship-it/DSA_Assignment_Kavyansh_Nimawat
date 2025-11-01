#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string& ref = strs[0];
        int n = strs.size();
        for (int i = 0; i < (int)ref.size(); ++i) {
            char c = ref[i];
            for (int j = 1; j < n; ++j) {
                if (i >= (int)strs[j].size() || strs[j][i] != c) {
                    // mismatch found or one string too short
                    return ref.substr(0, i);
                }
            }
        }
        return ref;  // all characters in ref matched
    }
};

// Example usage
int main() {
    Solution sol;
    vector<string> strs1 = { "flower", "flow", "flight" };
    cout << "Result1: " << sol.longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = { "dog", "racecar", "car" };
    cout << "Result2: " << sol.longestCommonPrefix(strs2) << endl;

    return 0;
}
