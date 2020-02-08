#include <iostream>
#include <string>
//utilities

//get numbers input
int get_num(int a,int b){
    std::cout<<"enter a number: ";
    std::cin>>a;
    std::cout<<"enter a number: ";
    std::cin>>b;
    return a,b;
}

void show_options(){
    //show the options
    std::cout<<"**--enter the option that you want--**"<<std::endl;
    std::cout<<"options: "<<std::endl<<"-sum\n-multiply\n-module\n-division\n-subtracion"<<std::endl;
}


//math operators
int sum(int a,int b){
    return a + b;
}

int multiply(int a,int b){
    return a * b;
}

int module(int a,int b){
    return a % b;
}

float division(int a,int b){
    return a/b;
}

int subtraction(int a,int b){
    return a-b;
}


int main(){
    int x,y;
    
    show_options();
    std::string option;
    getline(std::cin,option);
    if (option=="sum"){
        std::cout<<"enter two numbers to sum then"<<std::endl;
        get_num(x,y);
        std::cout<<sum(x,y)<<std::endl;
    }
    else if (option=="module"){
        std::cout<<"enter two numbers"<<std::endl;
        get_num(x,y);
        std::cout<<module(x,y)<<std::endl;
    }


    return 0;
}