#ifndef Equipment_H
#define Equipment_H
#include "FileHandler.h"
#include <iostream>
#include <string>
using namespace std;
class Equipment {
public:
	string type;
	string brand;
	string condition;
	string status;
	string ppl;
	string Etype;
	string door;
	string Dlayer;
	string colour;
	string actType;
	string fueltype;
public:
	Equipment();
	void SearchTentDeep(string _type, FileHandler& file);
	void SearchStoveDeep(string _type, FileHandler& file);
	void SearchLanternDeep(string _type, FileHandler& file);


	~Equipment();
};


#endif // !Equipment_H

