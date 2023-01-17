#include <iostream>
#include <string>
#include "chlebek.hpp"
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	bagietka bagietka1();

	chlebek* ch = piecz("razowy");
	ch->typ();

	//vector<chlebek> chleby;
	//chlebek *a = new bagietka(1, 2, 3);
	//chleby.push_back(*a);

}
