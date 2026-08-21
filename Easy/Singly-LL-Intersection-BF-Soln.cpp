/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class BruteForceSolution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headB) {
            cout << "No intersection";
            return 0;
        }
        ListNode* a = headA;
        ListNode* b = headB;
        while (a->next) {
            while (b->next) {
                if (a == b) {
                    cout << "Intersected at " << *a;
                    return 0;
                };
                b = b->next
            };
            a = a->next
        };
        cout << "No intersection";
        return 0;
    };
};