* Prompt
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false


* Logic
- Step through string
- check if char is opening char and add it to new string if so
- if closing char, check if latest char matches
- if match, pop latest char
- if not a match, push the closing char


* Time/Space Complexity
With linked list sizes m and n:
	- Time complexity is O(n) - only iterate through the string once and perform constant time functions
	- Space complexity is O(n) - at most it will be the same size as the input string, in the worst case. otherwise it is <n
