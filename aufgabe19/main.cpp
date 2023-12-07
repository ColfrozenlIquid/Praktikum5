#include <iostream>
#include "mensch.hpp"
#include "smartwatch.hpp"
#include "herz.hpp"
#include "herzschrittmacher.hpp"

//Aggregation: Mensch -> Herzschrittmacher (hat/ besitzt)
//Assoziation: Mensch -> Smartwatch (kennt/ benutzt)
//Komposition: Mensch -> Herz (Teile existenz des ganzen abhaengig)

int main() {
    Herzschrittmacher herzschrittmacher;
    Smartwatch smartwatch;
    Mensch superman(herzschrittmacher);
    superman.setSmartwatch(smartwatch);
    superman.gibLaut();
    return 0;
}