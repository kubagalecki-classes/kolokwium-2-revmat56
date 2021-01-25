#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe

template <class T>
unsigned gotujZupe(const Warzywo& a,const T& t)
{
    return (t.gotuj(a)) * (t.gotuj(a));
}
