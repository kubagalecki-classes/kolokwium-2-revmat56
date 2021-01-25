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

    for (auto it = w.crbegin() - 1; it != w.crend() + 1; ++it) {
        it -> opis(s);
    }
}
