#pragma once
#include <string>

class Smartwatch {
    public:
        Smartwatch();
        ~Smartwatch();
        void gibLaut();
        
    private:
        std::string name = "TickTick";
};