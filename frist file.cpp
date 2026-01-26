#include"tool h.h"

int qiuhe(struct ListNode* L)
{
    int a = 0;
    struct ListNode* die = L;
    for (int i = 1; die->next; i *= 10)
    {
        a += i * die->val;
        die = die->next;
    }
    return a;
}

struct ListNode* zhuanhuan(int a)
{
    struct ListNode* b = (struct ListNode*)malloc(sizeof(struct ListNode*));
    struct ListNode* c = b;
     b->val= a % 10;
    a / 10;
    b->next = NULL;
    while (a)
    {
        b->next = (struct ListNode*)malloc(sizeof(struct ListNode*));
        b = b->next;
        b->next = NULL;
        b->val = a % 10;
        a / 10;
    }
    return c;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int a1 = qiuhe(l1);
    int a2 = qiuhe(l2);
    struct ListNode* a3 = zhuanhuan(a1 + a2);
    return a3;
}

int main()
{
    //自定义链表

	//struct ListNode* l1 = inlian();
	//struct ListNode* l2 = inlian();
    
    //addTwoNumbers(l1, l2);
    return 0;
}