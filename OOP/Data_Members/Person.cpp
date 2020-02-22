#include <iostream>
#include "Person.h"

std::string Person::speak(){
    if (age<17){
        return "I am under age\n";
    }
    else{
        return "I have more than 18 years old\n";
    }
    
}