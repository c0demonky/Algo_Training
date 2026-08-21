* Prompt
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

* Logic
- return null if list b is empty
- Iterate through listA, comparing each node address to node address in listB
- Incremenet listB node if not a match

* Time/Space Complexity
With linked list sizes m and n:
	- Time complexity is O(n^2)
	- Space complexity is O(m + n)
