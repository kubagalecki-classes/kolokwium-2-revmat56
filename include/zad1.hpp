#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Warzywo

class Warzywo{
public:
    Warzywo(const std::string& a, double b, int c): nazwa(a), cena(b), kolor(c)
    { 
        i++;
    }
    ~Warzywo() 
    {
        i--;
    }

    static unsigned getVeg() 
    {
        return i;
    }

    void opis(std::ostream& s) const 
    {
        s << "[" << nazwa << "]"
          << ":"
          << "[" << cena << "]"
          << ","
          << "[" << kolor << "]" << std::endl;
    }

private:
    std::string nazwa;
    double      cena;
    int         kolor;
    inline static unsigned int i;

};
inline unsigned int Warzywo::i = 0;
