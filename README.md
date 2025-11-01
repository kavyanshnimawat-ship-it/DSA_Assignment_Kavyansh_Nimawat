Approach to solve the Valid Parentheses problem:
Use a stack to track opening brackets.
Push each opening bracket, and when a closing bracket appears, check if it matches the top of the stack.
If all brackets match correctly and the stack is empty at the end, the string is valid.

Approach to solve the Longest Common Prefix problem:
Compare characters of all strings one by one using the first string as a reference.
Stop when a mismatch or string end is found — the common prefix ends there.
Return the substring formed by all matching characters.
