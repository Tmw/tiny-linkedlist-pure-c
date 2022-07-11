#include "linkedlist.h"

int main() {
  List fruits = list_create();

  list_push(&fruits, node_create("🍇"));
  list_push(&fruits, node_create("🥝"));
  list_push(&fruits, node_create("🍌"));
  list_push(&fruits, node_create("🍓"));

  // iterate over the linked list
  list_print(&fruits);

  // popping a single element
  Node* popped_node = list_pop(&fruits);
  printf("Popped = %s\n", popped_node->value);
  free(popped_node);

  // printing the altered list
  list_print(&fruits);

  // house keeping
  list_destroy(&fruits);

  return 0;
}
