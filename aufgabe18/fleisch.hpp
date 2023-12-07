#pragma once
#include "lebensmittel.hpp"

class Fleisch : public Lebensmittel {
    public:
        Fleisch();
        Fleisch(std::string name);
        ~Fleisch();
        void zubereiten();
        
    private:
        std::string name;
};