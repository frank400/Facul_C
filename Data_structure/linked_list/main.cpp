#include <bits/stdc++.h>
#include "Node.h"
#include "utilities.h"
using namespace std;


int main(){
    Node* first=NULL;
    Node* second=NULL;
    Node* third=NULL;
    

    first = new Node();
    second = new Node();
    third = new Node();
    
    
    first->data=1;
    first->next=second;

    second->data=250;
    second->next=third;

    third->data=100;
    third->next=NULL;

    
    //insert an element in the end of the list
    append(&first,3);
    show_linked_list(first);
    

    return 0;
}
