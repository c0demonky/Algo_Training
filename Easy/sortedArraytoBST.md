* Prompt
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.


* Logic
- find the midpoint of sorted array, and set this as the root of the BST
- recursively sort through left and right subtrees
- set recursive left and right calls to root node left and right respectively
- return a null treenode if the vector is empty


* Time/Space Complexity
With linked list sizes m and n:
	- Time complexity is O(nlogn) - additional time added by copying the vector elements into new vectors. can be avoided with a helper function
	- Space complexity is O(n) - same size as input x2
