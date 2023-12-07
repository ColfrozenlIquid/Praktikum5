#include <iostream>
#include "mensch.hpp"

Mensch::Mensch(const Herzschrittmacher& herzschrittmacher) : m_herzschrittmacher(herzschrittmacher) {}

Mensch::~Mensch() {}

void Mensch::setSmartwatch(const Smartwatch& smartwatch) {
    this->m_smartwatch = smartwatch;
}

void Mensch::gibLaut() {
    m_herz.gibLaut();
    m_herzschrittmacher.gibLaut();
    m_smartwatch.gibLaut();
}