#include "obst.hpp"
#include <iostream>

Obst::Obst() {
    std::cout << "Constructor Obst" << std::endl;
}

Obst::Obst(std::string name) : name(name) {
    std::cout << "Custom Constructor Obst" << std::endl;
}

Obst::~Obst() {
    std::cout << "Destructor Obst" << std::endl;
}

void Obst::zubereiten() {
    std::cout << this->name << " schaelen" << std::endl;
}