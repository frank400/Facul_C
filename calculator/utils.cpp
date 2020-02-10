#include <iostream>
#include "utils.h"

float get_num(){
    float i;
    std::cout<<"enter a number:";
    std::cin>>i;
    return i;
}

void show_options(){
    //show the options
    std::cout<<"**--enter the option that you want--**"<<std::endl;
    std::cout<<"options: "<<std::endl<<"1-sum\n2-subtracion\n3-multiply\n4-division\n5-module\n"<<std::endl;
}

int get_option(){
    int op;
    std::cin>>op;
    return op;
}
