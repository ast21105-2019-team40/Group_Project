#ifndef FileHandler_H
#define FileHandler_H
#include <iostream>
#include <string>
#include "User.h"
#include "Equipment.h"
using namespace std;
class FileHandler
{
public:
	VEN* VHead = NULL;
	ROV* RHead = NULL;
	SCT* THead = NULL;
	SCM* MHead = NULL;

	Tent* TeHead = NULL;
	Stove* StHead = NULL;
	Lantern* LaHead = NULL;

	string autofilename1;
	string autofilename2;
	string inputfilename;

public:
	FileHandler();
	void Userfileautoinput();
	void display();
	void Eqmfileautoinput();
	void fileinput1(string filename);
	void fileinput2(string filename);
	~FileHandler();

};


#endif // !FileHandler_H
