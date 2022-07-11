#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

List list_create() {
  return (List) {NULL};
}

Node* node_create(char value[]) {
  Node* node = malloc(sizeof(Node));
  strcpy(node->value, value);
  return node;
}

void list_push(List* list, Node* node) {
  if (list->head != NULL) {
    node->next = list->head;
  }

  list->head = node;
}

void list_print(List* list) {
  for(Node* current = list->head; current != NULL; current = current->next) {
    printf("%s\n", current->value);
  }
}

Node* list_pop(List* list) {
  if (list->head == NULL){
    return NULL;
  }

  Node* current_head = list->head;
  if (current_head != NULL) {
    Node* next_head = current_head->next;
    list->head = next_head;
  }

  return current_head;
}

void list_destroy(List* list) {
  Node* current = list->head;
  Node* next = current;

  while(current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
}
