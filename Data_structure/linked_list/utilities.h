#ifndef UTILITIES_H_
#define UTILITIES_H_
void sort_linked_list();
void show_linked_list(Node* head);
void append(Node** head_ref, int n);
void push(Node** head_ref,int n);
void insertAfter(Node* prev_node, int new_data);
void delete_node(Node** head_ref,int key);
void delete_position(Node** head_ref,int position);
int get_length(Node* head);
int get_length_recursive(Node* head);
bool search(Node* head,int key);
void swap_nodes(Node **head_ref, int x, int y);
void swap_nodes_optimized(Node **head_ref, int x, int y);
Node** findlast(Node** head,int position);
#endif