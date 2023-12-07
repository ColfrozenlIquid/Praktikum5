#pragma once
#include "herz.hpp"
#include "herzschrittmacher.hpp"
#include "smartwatch.hpp"

class Mensch {
    public:
        Mensch(const Herzschrittmacher&);
        ~Mensch();
        void setSmartwatch(const Smartwatch&);
        void gibLaut();
        
    private:
        Herz m_herz;
        Herzschrittmacher m_herzschrittmacher;
        Smartwatch m_smartwatch;
};