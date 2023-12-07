#include <iostream>
#include "smartwatch.hpp"

Smartwatch::Smartwatch() {}

Smartwatch::~Smartwatch() {}

void Smartwatch::gibLaut() {
    std::cout << this->name << std::endl;
}