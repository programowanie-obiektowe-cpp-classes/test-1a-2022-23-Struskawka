#ifndef OMASTA_HPP
#define OMASTA_HPP

#include <iostream>
#include "chlebek.hpp"

class Omasta
{
public:
    virtual std::string smaruj(const Chlebek& ch) const = 0;

private:
};

class Maslo : public Omasta
{
public:
    virtual std::string smaruj(const Chlebek& ch) const { return ch.Typ() + "z maslem"; };

private:
};

class Smalec : public Omasta
{
public:
    virtual std::string smaruj(const Chlebek& ch) const { return ch.Typ() + "ze smalcem"; };

private:
};

#endif
