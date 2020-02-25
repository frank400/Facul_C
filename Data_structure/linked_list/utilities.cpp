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
void append(Node** head_ref, int n){
    Node* new_node=new Node();
    Node* last=*head_ref;
    new_node->data=n;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    if(last->next!=NULL){
        last=last->next;
        append(&last,n);
    }
    else{
        last->next=new_node;
    }
}

void push(Node** head_ref,int n){
    Node* new_node=new Node();
    new_node->data=n;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void insertAfter(Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
  
    /* 2. allocate new node */
    Node* new_node = new Node(); 
  
    /* 3. put in the data */
    new_node->data = new_data;  
  
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;  
  
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;  
} 

void delete_node(Node** head_ref,int key){
    Node* temp = *head_ref , *prev;
    
    if (temp != NULL && temp->data==key){
        *head_ref=temp->next;
        free(temp);
        return;
    }
    if (temp!=NULL && temp->data!= key){
        prev=temp;
        temp=temp->next;
        delete_node(&temp,key);
    }
    if (temp==NULL){return;}
    
    prev->next=temp->next;
    free(temp);
}
void delete_position(Node** head_ref,int position){
    Node* temp=*head_ref,*prev;
    int count=1;
    if (temp != NULL && count==position){
        *head_ref=temp->next;
        free(temp);
        return;
    }
    while(temp->next!=NULL && count<position){
        prev=temp;
        temp=temp->next;
        count++;
    }
    if (temp==NULL){return;}
    
    prev->next=temp->next;
    free(temp);

}
int get_length(Node* head){
    int counter=1;
    while(head->next!=NULL){
        counter++;
        head=head->next;
    }
    return counter;
}