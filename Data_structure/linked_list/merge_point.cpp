#include <bits/stdc++.h>
#include <string>
#include "Node.h"
#include "utilities.h"

int main(){

    //T is the number of tests cases that are going to be executed
    std::cout<<"enter the number of test do you want: ";
    int T;
    std::cin>>T;
    for(int cout=1;cout<=T;cout++){
        //set the heads of the llists
        Node* head_firstll=NULL;
        Node* head_secondll=NULL;
        Node* head_after_merge=NULL;
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;


        //create a string to store the numbers that the user inputs
        std::string numbers_first,numbers_before,numbers_after_merge;

        //clear the buffer of cin stream
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        std::cout<<"enter numbers to insert on the first list: \n";
        std::getline(std::cin,numbers_first);

        std::cout<<"enter numbers to insert before the merge : \n";
        std::getline(std::cin,numbers_before);

        std::cout<<"enter numbers to insert after the merge : \n";
        std::getline(std::cin,numbers_after_merge);

        //use a stream to manipulate the numbers gived
        std::stringstream num_first_stream(numbers_first),numbers_before_stream(numbers_before);
        std::stringstream numbers_after_merge_stream(numbers_after_merge);
        //store the number itself so it can be converted to int type and send to the append function
        std::string number;

        //loops all the numbers inserting each one of the on the end of the linked list
        int counter=1;
        while(std::getline(num_first_stream,number,' ')&& counter<=x){
            int value=atoi(number.c_str());

            append(&head_firstll,value);
            counter++;
        }
        counter=1;
        while(std::getline(numbers_before_stream,number,' ')&& counter<=y){
            int value=atoi(number.c_str());

            append(&head_secondll,value);
            counter++;
        }
        counter=1;
        while(std::getline(numbers_after_merge_stream,number,' ')&& counter<=z){
            int value=atoi(number.c_str());

            append(&head_after_merge,value);
            counter++;
        }
        //merge two llist
        mergell(&head_secondll,&head_after_merge);
        mergell(&head_firstll,&head_after_merge);


        std::cout<<merge_point(head_firstll,head_secondll)<<std::endl;
    }
    return 0;
}