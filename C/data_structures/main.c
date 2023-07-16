#include "list.h"
#include "queue_array.h"
#include "bin_tree.h"
#include "heap.h"

int main() {
  printf("%s\n", "list #1");
  L_NODE* l1 = NULL;
  l1 = insert_back_iter(l1, 2);
  l1 = insert_back_iter(l1, 4);
  l1 = insert_back_iter(l1, 6);
  l1 = insert_back_iter(l1, 8);
  l1 = insert_back_iter(l1, 10);
  l1 = insert_back_iter(l1, 12);
  l1 = insert_back_iter(l1, 14);
  L_NODE* nd = node_at_ind(l1, 7);
  if (nd) {
    printf("%d\n", nd -> key);
  }
  print_rec(l1);
  puts("\n");

  printf("%s\n", "list #2");
  L_NODE* l2 = NULL;
  l2 = insert_back_rec(l2, 3);
  l2 = insert_back_rec(l2, 8);
  l2 = insert_back_rec(l2, 10);
  l2 = insert_back_rec(l2, 18);
  l2 = insert_back_rec(l2, 20);
  l2 = insert_back_rec(l2, 30);
  l2 = insert_back_rec(l2, 40);
  printf("%d\n", lin_search_iter(l2, 8));
  print_rec(l2);
  puts("\n");

  printf("%s\n", "list #3");
  L_NODE* l3 = NULL;
  l3 = insert_front(l3, 1024);
  l3 = insert_front(l3, 512);
  l3 = insert_front(l3, 256);
  l3 = insert_front(l3, 128);
  l3 = insert_front(l3, 64);
  l3 = insert_front(l3, 32);
  l3 = insert_front(l3, 16);
  print_rec(l3);
  puts("\n");

  printf("%s\n", "list #4");
  L_NODE* l4 = NULL;
  l4 = insert_iter(l4, 200, 0);
  l4 = insert_iter(l4, 199, 0);
  l4 = insert_iter(l4, 198, 0);
  print_rec(l4);
  putchar('\n');
  l4 = insert_iter(l4, 201, 1);
  print_rec(l4);
  putchar('\n');
  l4 = insert_iter(l4, 250, 2);
  print_rec(l4);
  putchar('\n');
  l4 = insert_iter(l4, 300, 5);
  print_rec(l4);
  putchar('\n');
  l4 = insert_iter(l4, 315, 15);
  print_rec(l4);
  putchar('\n');
  l4 = insert_iter(l4, 99, 3);
  print_rec(l4);
  putchar('\n');
  l4 = insert_iter(l4, 299, 8);
  print_rec(l4);
  puts("\n");

  printf("%s\n", "list #5");
  L_NODE* l5 = NULL;
  l5 = insert_rec(l5, 200, 0);
  l5 = insert_rec(l5, 199, 0);
  l5 = insert_rec(l5, 198, 0);
  print_rec(l5);
  putchar('\n');
  l5 = insert_rec(l5, 100, 1);
  print_rec(l5);
  putchar('\n');
  l5 = insert_rec(l5, 150, 3);
  print_rec(l5);
  putchar('\n');
  l5 = insert_rec(l5, 300, 16);
  print_rec(l5);
  puts("\n");

  printf("%s\n", "list #6");
  L_NODE* l6 = NULL;
  l6 = insert_rec(l6, 10, 0);
  l6 = insert_rec(l6, 9, 0);
  l6 = insert_rec(l6, 8, 0);
  l6 = insert_rec(l6, 15, 1);
  l6 = insert_rec(l6, 14, 3);
  l6 = insert_rec(l6, 13, 5);
  print_rec(l6);
  putchar('\n');
  l6 = remove_iter(l6, 0);
  print_rec(l6);
  putchar('\n');
  l6 = remove_iter(l6, 2);
  print_rec(l6);
  putchar('\n');
  l6 = remove_iter(l6, 3);
  print_rec(l6);
  putchar('\n');
  l6 = remove_iter(l6, 0);
  print_rec(l6);
  putchar('\n');
  l6 = remove_iter(l6, 0);
  print_rec(l6);
  puts("\n");

  printf("%s\n", "queue #1");
  QUEUE q = {{}, 0, -1, 0};
  print_debug(&q);
  enqueue(&q, 4);
  print(&q);
  enqueue(&q, 6);
  print(&q);
  enqueue(&q, 11);
  print(&q);
  enqueue(&q, 9);
  print(&q);
  enqueue(&q, 13);
  print(&q);
  enqueue(&q, 14);
  print(&q);
  enqueue(&q, 15);
  print(&q);
  enqueue(&q, 17);
  print(&q);
  dequeue(&q);
  print(&q);
  dequeue(&q);
  print(&q);
  enqueue(&q, 18);
  print(&q);
  enqueue(&q, 19);
  print(&q);
  enqueue(&q, 20);
  print(&q);
  putchar('\n');

  printf("%s\n", "tree #1");
  T_NODE* r = NULL;
  r = bst_insert_iter(r, 20);
  r = bst_insert_iter(r, 15);
  r = bst_insert_iter(r, 25);
  r = bst_insert_iter(r, 29);
  print_tree(r);
  puts("\n");

  printf("%s\n", "doubly-linked list #1");
  L_NODE_D* dl1 = NULL;
  dl1 = insert_back_iter_d(dl1, 0);
  dl1 = insert_back_iter_d(dl1, 1);
  dl1 = insert_back_iter_d(dl1, 1);
  dl1 = insert_back_iter_d(dl1, 2);
  dl1 = insert_back_iter_d(dl1, 3);
  dl1 = insert_back_iter_d(dl1, 5);
  L_NODE_D* tail = dl1 -> next -> next -> next -> next -> next;
  printf("%d ", tail -> key);
  printf("%d ", tail -> prev -> key);
  printf("%d ", tail -> prev -> prev -> key);
  printf("%d ", tail -> prev -> prev -> prev -> key);
  printf("%d ", tail -> prev -> prev -> prev -> prev -> key);
  printf("%d ", tail -> prev -> prev -> prev -> prev -> prev -> key);
  puts("\n");

  printf("%s\n", "heap #1, #2, #3");
  MAX_HEAP hp1 = {{-1, 16, 14, 10, 8, 7, 9, 3, 2, 4, 1}, 10};
  print_heap(&hp1, 1);
  putchar('\n');
  MAX_HEAP hp2 = {{-1, 17, 3, 10, 8, 7, 9, 3, 2, 4, 1}, 10};
  max_heapify(&hp2, 2);
  print_heap(&hp2, 1);
  putchar('\n');
  MAX_HEAP hp3 = {{-1, 6, 8, 2, 3, 4, 0, 9, 1, 6, 17}, 10};
  build_max_heap(&hp3);
  print_heap(&hp3, 1);
  putchar('\n');
  printf("heapsort\n");
  MAX_HEAP hp4 = {{-1, 5, 2, 3, 4, 98, 57, 1, 4, 5, 42, 12, 42, -31, -33, -100, 120}, 16};
  heap_sort(&hp4);
  for (int i = 1; i <= 16; i++) {
    printf("%d ", hp4.array[i]);
  }
  putchar('\n');
}
