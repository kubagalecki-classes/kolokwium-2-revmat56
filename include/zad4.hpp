#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa


void jedzOstatnieWarzywa(const std::vector< Warzywo > w, unsigned n, std::ostream& s)
{
    if (n >= w.size()) 
    {
        throw std::logic_error("a");
    }

    for (auto it = w.rbegin() + 1; it != w.rend() - 1; ++it) {
        it -> opis(s);
    }
}
