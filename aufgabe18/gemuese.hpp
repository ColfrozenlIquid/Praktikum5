#pragma once
#include "lebensmittel.hpp"

class Gemuese : public Lebensmittel {
    public:
        Gemuese();
        Gemuese(std::string name);
        ~Gemuese();
        void zubereiten();
        
    private:
        std::string name;
};