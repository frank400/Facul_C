#include <bits/stdc++.h>
#include <string>
#include "Node.h"
#include "utilities.h"


int delet(){
    
    //T is the number of tests cases that are going to be executed
    std::cout<<"enter the number of test do you want: ";
    int T;
    std::cin>>T;
    for(int cout=1;cout<=T;cout++){
        Node* head=NULL;
        //N is the number of elements on the linked list
        int N;
        std::cout<<"enter the value for N: ";
        std::cin>> N;

        //create a string to store the numbers that the user inputs
        std::string numbers;
        
        //clear the buffer of cin stream
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout<<"enter N numbers that you want to insert on the list: \n";
        std::getline(std::cin,numbers);

        //use a stream to manipulate the numbers gived
        std::stringstream num_stream(numbers);
        //store the number itself so it can be converted to int type and send to the append function
        std::string number;

        //loops all the numbers inserting each one of the on the end of the linked list
        while(std::getline(num_stream,number,' ')){
            int value=atoi(number.c_str());
            
            append(&head,value);
            
        }
        std::cout<<"enter the position that you want to delete starting from 0 :";
        int x;
        cin>>x;
        delete_position(&head,x);
        show_linked_list(head);
        //num_stream is the position of the node that is going to be remove
        
    }
    return 0;
}
