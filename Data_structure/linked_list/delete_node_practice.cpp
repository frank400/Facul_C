#include <bits/stdc++.h>
#include <string>
#include "Node.h"
#include "utilities.h"


int main(){
    
    //T is the number of tests cases that are going to be executed
    int T;
    std::cin>>T;
    for(int cout=1;cout<=T;cout++){
        Node* head=NULL;
        //N is the number of elements on the linked list
        int N;
        std::cout<<"enter the value for N: ";
        std::cin>> N;

        std::string numbers;
        

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        std::cout<<"enter the N numbers that you want to insert on the list: \n";
        std::getline(std::cin,numbers);

        std::stringstream num_stream(numbers);
        std::string number;
        while(std::getline(num_stream,number,' ')){
            int value=atoi(number.c_str());
            
            append(&head,value);
            
        }
        int x;
        cin>>x;
        delete_position(&head,x);
        show_linked_list(head);
        //num_stream is the position of the node that is going to be remove
        
    }
    return 0;
}
