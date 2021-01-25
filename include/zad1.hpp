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
        n++;
    }
    ~Warzywo() 
    {
        n--;
    }

   static unsigned getVeg() 
    {
      return n;
    }

    void opis(std::ostream& s) const 
    {
        s <<  nazwa << 
          ": "
           << cena 
          << ", "
          << kolor << "\n";
    }

private:
    std::string nazwa;
    double      cena;
    int         kolor;
   
     static unsigned      n;

};

 unsigned  Warzywo::n = 0;
