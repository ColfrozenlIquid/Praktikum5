#include "gemuese.hpp"
#include <iostream>

Gemuese::Gemuese(){
    std::cout << "Constructor Gemuese" << std::endl;
}

Gemuese::Gemuese(std::string name) : name(name) {
    std::cout << "Custom Constructor Gemuese" << std::endl;
}

Gemuese::~Gemuese() {
    std::cout << "Destructor Gemuese" << std::endl;
}

void Gemuese::zubereiten() {
    std::cout << this->name << " putzen" <<std::endl;
}