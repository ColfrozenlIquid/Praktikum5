#pragma once
#include <string>

class Herzschrittmacher {
    public:
        Herzschrittmacher();
        ~Herzschrittmacher();
        void gibLaut();
        
    private:
        std::string name = "PochPoch";
};