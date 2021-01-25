#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe

template <class T>
unsigned int gotujZupe(const Warzywo& a,T& t)
{
    return (t.gotuj(a)) * (t.gotuj(a));
}
