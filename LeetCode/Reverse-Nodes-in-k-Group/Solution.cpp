1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    // ListNode* reverse(Node *head) {
14
15        // Node *curr = head;
16        // Node * prev = NULL;
17        // Node * next;
18
19    //     while(curr != NULL) {
20            
21    //     }
22    //     return prev;
23    // }
24    ListNode* reverseKGroup(ListNode* head, int k) {
25        
26        ListNode* curr = head;
27
28        for(int i = 0; i < k; i++) {
29            if(curr == NULL) {
30                return head;
31            }
32            curr = curr->next;
33        }
34        curr = head;
35        ListNode * prev = NULL;
36        ListNode * next;
37
38        int count = 0;
39        while(curr != NULL && count < k) {
40            next = curr->next;
41            curr->next = prev;
42            prev = curr;
43            curr = next;
44            count++;
45            
46        }
47
48        if(next != NULL) {
49            head->next = reverseKGroup(next, k);
50        }
51        
52        return prev;
53
54    }
55};