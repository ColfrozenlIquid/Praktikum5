#include "lebensmittel.hpp"
#include <iostream>
#include <string>

Lebensmittel::Lebensmittel(){
    std::cout << "Constructor Lebensmittel" << std::endl;
}

Lebensmittel::Lebensmittel(std::string p_name) : name(p_name) {
    std::cout << "Custom Constructor Lebensmittel" << std::endl;
}

Lebensmittel::~Lebensmittel(){
    std::cout << "Destructor Lebensmittel" << std::endl;
}

void Lebensmittel::zubereiten(){
    std::cout << this->name << " zubereiten" << std::endl;
}

