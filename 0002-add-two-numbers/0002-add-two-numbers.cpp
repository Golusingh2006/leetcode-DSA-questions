class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Extra starting node
        ListNode* dummy = new ListNode();

        // Result list banane ke liye pointer
        ListNode* temp = dummy;

        // Carry initially 0
        int carry = 0;

        // Jab tak koi node ya carry available hai
        while (l1 != NULL || l2 != NULL || carry) {

            int sum = 0;

            // l1 ki value add karo
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            // l2 ki value add karo
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Previous carry add karo
            sum += carry;

            // Next carry calculate karo
            carry = sum / 10;

            // Current digit ka node banao
            ListNode* newnode = new ListNode(sum % 10);

            // Result list mein node add karo
            temp->next = newnode;

            // temp ko naye node par move karo
            temp = temp->next;
        }

        // Dummy ko skip karke actual answer return
        return dummy->next;
    }
};