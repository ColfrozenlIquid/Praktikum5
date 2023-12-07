#include <iostream>
#include "herzschrittmacher.hpp"

Herzschrittmacher::Herzschrittmacher() {}

Herzschrittmacher::~Herzschrittmacher() {}

void Herzschrittmacher::gibLaut() {
    std::cout << this->name << std::endl;
}