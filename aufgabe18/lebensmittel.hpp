#pragma once 
#include <string>

class Lebensmittel {
    public:
        Lebensmittel();
        Lebensmittel(std::string name);
        ~Lebensmittel();
        void zubereiten();
        
    private:
        std::string name;
};