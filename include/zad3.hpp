#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe

template <class T>
unsigned gotujZupe(const Warzywo& a,const T& t)
{
    return (t.gotujZupe(a)) * (t.gotujZupe(a));
}
