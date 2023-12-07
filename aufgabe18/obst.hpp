#pragma once
#include "lebensmittel.hpp"

class Obst : public Lebensmittel {
    public:
        Obst();
        Obst(std::string name);
        ~Obst();
        void zubereiten();
        
    private:
        std::string name;
};