#include "bin_tree.h"

T_NODE* bst_insert_iter(T_NODE* t, int key) {
  T_NODE* it = t;
  T_NODE* parent = NULL;
  bool last_left;

  while (it) {
    parent = it;
    if (key >= it -> key) {
      it = it -> right;
      last_left = false;
    }
    else {
      it = it -> left;
      last_left = true;
    }
  }

  T_NODE* new_node = (T_NODE*) malloc(sizeof(T_NODE));
  new_node -> key = key;
  new_node -> left = NULL;
  new_node -> right = NULL;

  if (!parent) {
    return new_node;
  }

  if (last_left) {
    parent -> left = new_node;
  }
  else {
    parent -> right = new_node;
  }

  return t;
}

T_NODE* bst_insert_rec(T_NODE* t, int key) {
  if (!t) {
    return (T_NODE*) malloc(sizeof(T_NODE));
  }
  if (key <= t -> key) {
    t -> left = bst_insert_rec(t -> left, key);
  }
  t -> right = bst_insert_rec(t -> right, key);
  return t;
}

void print_tree(T_NODE* t) {
  if (!t) {
    putchar('_');
    return;
  }
  printf("%d", t -> key);
  putchar('(');
  print_tree(t -> left);
  putchar(',');
  print_tree(t -> right);
  putchar(')');
}

int height(T_NODE* t) {
  if (!t || (!t -> left && !t -> right)) {
    return 0;
  }
  int l_h = height(t -> left);
  int r_h = height(t -> right);
  if (l_h >= r_h) {
    return l_h + 1;
  }
  return r_h + 1;
}

int sum_keys(T_NODE* t) {
  if (!t) {
    return 0;
  }
  return t -> key + sum_keys(t -> left) + sum_keys(t -> right);
}

bool verify_BST(T_NODE* t) {
  if (!t) {
    return true;
  }
  if (!t -> left && !t -> right) {
    return true;
  }
  if (t -> left) {
    if (t -> key < t -> left -> key) {
      return false;
    }
  }
  if (t -> right) {
    if (t -> key >= t -> right -> key) {
      return false;
    }
  }
  return verify_BST(t -> left) && verify_BST(t -> right);
}

int count_nodes(T_NODE* t) {
  if (!t){
    return 0;
  }
  return 1 + count_nodes(t -> left) + count_nodes(t -> right);
}
