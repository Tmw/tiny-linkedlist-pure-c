#include "stdio.h"
#include "stdlib.h"
#include <string.h>

#ifndef LL_HEADER
#define LL_HEADER

typedef struct Node {
  struct Node* next;
  char value[];
} Node;

typedef struct {
  struct Node* head;
} List;

List list_create();
Node* node_create(char value[]);
void list_push(List* list, Node* node);
void list_print(List* list);
Node* list_pop(List* list);
void list_destroy(List* list);

#endif
