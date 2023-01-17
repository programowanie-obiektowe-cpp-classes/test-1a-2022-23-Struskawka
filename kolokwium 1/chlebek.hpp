#ifndef CHLEBEK_HPP
#define CHLEBEK_HPP

//#include "omasta.hpp"
#include <iostream>
#include <string>
using namespace std;

class chlebek {
public:
	chlebek() {};
	//virtual ~chlebek();

	virtual double ileMaki(unsigned int P) = 0;
	virtual string typ() = 0;
	static chlebek* piecz(string dane);
private:
};


class bagietka:public chlebek {
public:
	bagietka(double ll, double ww, double rr) : L(ll), W(ww), R(rr) {};
	bagietka() : L(0.5), W(0.5), R(0.5) {};
	~bagietka();

	double ileMaki(unsigned int P) { return P * L * W * (1. - R) * 1; }
	string typ() { return "Bagietka "; }

private:
	double L;
	double W;
	double R;
};

class razowy :public chlebek {
public:
	razowy(){};
	~razowy();

	double ileMaki(unsigned int P) { return P; }
	string typ() { return "Razowy "; }

private:
};

chlebek* piecz(string dane)
{
	if (dane == "bagietka")
		return new bagietka(3.14, 0.42, 0.1);
	else if (dane == "razowy")
		return new razowy();
	else { cout << "zla nazwa" << endl; system("pause");
	}
}


#endif