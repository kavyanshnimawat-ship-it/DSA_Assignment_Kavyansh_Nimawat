#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                // opening bracket → push onto stack
                st.push(c);
            }
            else {
                // closing bracket case
                if (st.empty()) {
                    // no matching opening bracket
                    return false;
                }
                char topChar = st.top();
                st.pop();
                // check matching pair
                if ((c == ')' && topChar != '(') ||
                    (c == ']' && topChar != '[') ||
                    (c == '}' && topChar != '{')) {
                    return false;
                }
            }
        }
        // at end, stack should be empty if all matched
        return st.empty();
    }
};

int main() {
    Solution sol;
    string test1 = "()[]{}";
    cout << test1 << " - " << (sol.isValid(test1) ? "true" : "false") << endl;

    string test2 = "(]";
    cout << test2 << " - " << (sol.isValid(test2) ? "true" : "false") << endl;

    string test3 = "([)]";
    cout << test3 << " - " << (sol.isValid(test3) ? "true" : "false") << endl;

    string test4 = "{[]}";
    cout << test4 << " - " << (sol.isValid(test4) ? "true" : "false") << endl;

    string test5 = "(";
    cout << test5 << " - " << (sol.isValid(test5) ? "true" : "false") << endl;

    return 0;
}
