#include <iostream>
#include <string>

//utilities
#include "utils.h"

//math operators
#include "math_operators.h"


int main(){
    float x,y;
    
    show_options();
    int option;    
    option=get_option();

    switch (option)
    {
    //sum
    case 1:
        x=get_num();
        y=get_num();
        std::cout<<"the result of the sum is "<<sum(x,y)<<std::endl;
        break;
    //subtracion
    case 2:
        x=get_num();
        y=get_num();
        std::cout<<"the result of the subtraction is "<<subtraction(x,y)<<std::endl;
        break;
    //multiply
    case 3:
        x=get_num();
        y=get_num();
        std::cout<<"the result of the multiplication is "<<multiply(x,y)<<std::endl;
        break;
    //division
    case 4:
        x=get_num();
        y=get_num();
        std::cout<<"the result of the division is "<<division(x,y)<<std::endl;
        break;
    //module
    case 5:
        x=get_num();
        y=get_num();
        std::cout<<"the result of the module is "<<module(x,y)<<std::endl;
        break;    
    default:
        std::cout<<"you have select an unvalid value\n";
        break;
    }


    return 0;
}
//util
//get numbers input
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


//math operators
float sum(float a,int b){
    return a + b;
}

float multiply(float a,int b){
    return a * b;
}

int module(int a,int b){
    return a % b;
}

float division(float a,int b){
    return a/b;
}

float subtraction(float a,int b){
    return a-b;
}