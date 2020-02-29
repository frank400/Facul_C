#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

void show_linked_list(Node* head){  
    if (head->next !=NULL){
        cout<<head->data<<"-";
        show_linked_list(head->next);
    }
    else{
        cout<<head->data<<endl;
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
int get_length_recursive(Node* head){
    if (head==NULL){
        return 0;
    }
    else{
        return 1+ get_length_recursive(head->next);
    }
}
bool search(Node* head,int key){
    if(head->data==key){
        return true;
    }
    else if(head->next==NULL){
        return false;
    }
    else{
        return search(head->next,key);
    }
}
void swapNodes(Node **head_ref, int x, int y){
    
    //if x and y are equal there's nothing to do 
    if (x==y){
        return;
    }

    //search x node and keep track of the previous node
    Node *prevX=NULL,*corrX=*head_ref;
    while(corrX && corrX->data!=x){
        prevX=corrX;
        corrX=corrX->next;
    }

    //search y node and keep track of the previous node
    Node *prevY=NULL,*corrY=*head_ref;
    while(corrY && corrY->data!=y){
        prevY=corrY;
        corrY=corrY->next;
    }

    //if x or y are equal to null then there's nothing to do
    if(corrX==NULL || corrY==NULL){
        return;
    }

    //if X isn't the head of the list
    if (prevX!=NULL){
        prevX->next=corrY;
    }
    else{// X is the head,so change the head ref to the corrent node of Y
        *head_ref=corrY;
    }

    //if y isn't the head of the list
    if (prevY!=NULL){
        prevY->next=corrX;
    }
    else{
        *head_ref=corrX;
    }

    //swapping the pointers of next
    Node *temp=corrY->next;
    corrY->next=corrX->next;
    corrX->next=temp;

}

void swap(Node*& a,Node*& b){
    Node* temp=a;
    a=b;
    b=temp;
}
void swap_nodes_optimized(Node **head_ref, int x, int y){
    if (x==y){
        return;
    }
    Node **a=NULL,**b=NULL;
    while(*head_ref){
        if((*head_ref)->data==x){
            a=head_ref;
        }
        else if((*head_ref)->data==y){
            b=head_ref;
        }

        head_ref=&((*head_ref)->next);
    }

    if(a && b){
        swap(*a,*b);
        swap((*a)->next,(*b)->next);
    }
}
Node** findlast(Node** head,int position){
    Node* corrent=(*head);
    int counter=0;
    int lenght=get_length(*head);

    while(counter<position){
        corrent=corrent->next;
        counter++;
    }
    return &corrent;
}
