#include <iostream>
#include "Person.h"

int main(){
    Person joseph;
    int age_joseph;
    std::cout<<"enter a age to joseph: ";
    std::cin>>age_joseph;
    std::cout<<joseph.speak();
    return 0;

}