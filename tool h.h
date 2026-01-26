#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>			 #malloc的头文件

#ifndef LEIHOU
#define LEIHOU


//该结构体的结构体名经常改变，但是他的别名一般不变

typedef struct ListNode
{
    int val;
    struct ListNode* next;
}lianbiao,ListNode;


//创建链表
lianbiao* chuangjian()
{
    //初始化链表
    return (lianbiao*)malloc(sizeof(lianbiao*));
}


//头插法的有输入的链表创建
void HeadInLian(int a,lianbiao* b)
{
    lianbiao* list = chuangjian();
	//链表的索引替换
	list->next = b->next;
    b->next = list;
	list->val = a;    
}

//尾插法的有输入的链表创建
void LastInLian(int a, lianbiao* b)
{
    lianbiao* list = chuangjian();
    lianbiao* die = b;
    while (die->next)
    {
        die = die->next;
    }
    die->next = list;
    list->val = a;
    list->next = NULL;
}

//链表的清空
void ClearList(lianbiao* b)
{
    int i = 0;
    lianbiao* diedai = b;
    while (diedai)
    {
		b = b->next;
        free(diedai);
		diedai = b;
        i++;
    }
    printf("链表清空完成,共计%d个链表", i);
}
//
#endif