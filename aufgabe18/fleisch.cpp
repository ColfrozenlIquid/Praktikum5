#include "fleisch.hpp"
#include <iostream>

Fleisch::Fleisch(){
    std::cout << "Default Constructor Fleisch" << std::endl;
}

Fleisch::Fleisch(std::string name) : name(name) {
    std::cout << "Custom Constructor Fleisch" << std::endl;
}

Fleisch::~Fleisch() {
    std::cout << "Destructor Fleisch" << std::endl;
}

void Fleisch::zubereiten() {
    std::cout << this->name << " anbraten" << std::endl;
}