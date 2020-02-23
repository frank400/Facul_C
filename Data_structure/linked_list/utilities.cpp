#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void show_linked_list(Node* n){  
    if (n->next !=NULL){
        cout<<n->data<<"-";
        show_linked_list(n->next);
    }
    else{
        cout<<n->data<<endl;
    }
}
//n for new element
void insert_end(Node** head_ref, int n){
    Node* new_node=new Node();
    Node* last=*head_ref;
    new_node->data=n;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    if(last->next!=NULL){
        last=last->next;
        insert_end(&last,n);
    }
    else{
        last->next=new_node;
    }
}

void insert_front(Node** head_ref,int n){
    Node* new_node=new Node();
    new_node->data=n;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}