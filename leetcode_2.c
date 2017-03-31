/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

void list_push_back(struct ListNode **pHead, struct ListNode *node)
{
    if (!(*pHead))
    {
        *pHead = node;
    }
    else
    {
        struct ListNode *p = *pHead;

        while(p->next)
        {
            p = p->next;
        }

        p->next = node;

    }
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;
    
    int a = 0;
    int b = 0;
    int c = 0;

    struct ListNode *result = NULL;

    while (p1 || p2)
    {
        if (p1)
        {
            a = p1->val;
            p1 = p1->next;
        }
        else
        {
            a = 0;
        }

        if (p2)
        {
            b = p2->val;
            p2 = p2->next;
        }
        else
        {
            b = 0;
        }

        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (a + b + c < 10)
        {
            node->val = a + b + c;
            c = 0;
        }
        else
        {
            node->val = (a + b + c) % 10;
            c = (a + b + c) / 10;

        }
        
        node->next = NULL;

        list_push_back(&result, node);
    }

    if (c != 0)
    {
        struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
        node->val = c;
        node->next = NULL;

        list_push_back(&result, node);
    }

    return result;
}

int main()
{
    struct ListNode *p1 = NULL;
    struct ListNode *p2 = NULL;

    for (int i=0; i<5; i++)
    {
        struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = i+2;
        p->next = NULL;
        list_push_back(&p1, p);

        printf("%d\n", p->val);

        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->val = i+5;
        p->next = NULL;
        list_push_back(&p2, p);

        printf("%d\n", p->val);
    }

    struct ListNode *tt;
    for (tt=p1; tt!=NULL; tt=tt->next)
    {
        printf("%d ", tt->val);
    }
    printf("\n");

    for (tt=p2; tt!=NULL; tt=tt->next)
    {
        printf("%d ", tt->val);
    }
    printf("\n");

    struct ListNode *t = addTwoNumbers(p1, p2);
    for (tt=t; tt!=NULL; tt=tt->next)
    {
        printf("%d ", tt->val);
    }
    printf("\n");

    return 0;
}


