#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

typedef int elem;
typedef struct node {
	elem data;
	struct node* next;
	struct node* prev;
} node;

void nodeinit(node** pphead);
void pushback(node* phead, elem data);
void pushfront(node* phead, elem data);
void popback(node* phead);
void popfront(node* phead);
void printlist(node* phead);