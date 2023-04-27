#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef int SQDataType;
//动态顺序表
typedef struct SeqList
{
	SQDataType* a;
	int size;//有效数据个数
	int capacity;//容量
}SL;

//增删查改等接口函数
void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListPrint(SL* ps);
void SeqListPushBack(SL* ps, SQDataType x);
void SeqListPushFront(SL* ps, SQDataType x);
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, int pos, SQDataType x);
void SeqListErase(SL* ps, int pos);
int SeqListFind(SL* ps, SQDataType x);
void SeqListModify(SL* ps, int pos, SQDataType x);