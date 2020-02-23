#ifndef UTILITIES_H_
#define UTILITIES_H_
void sort_linked_list();
void show_linked_list(Node* n);
void append(Node** head_ref, int n);
void push(Node** head_ref,int n);
void insertAfter(Node* prev_node, int new_data);
void delete_node(Node** head_ref,int key);
#endif