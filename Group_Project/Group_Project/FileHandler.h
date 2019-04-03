#ifndef FileHandler_H
#define FileHandler_H
#include <iostream>
#include <string>
#include "User.h"
using namespace std;
class FileHandler
{
public:
	VEN* VHead = NULL;
	ROV* RHead = NULL;
	SCT* THead = NULL;
	SCM* MHead = NULL;

	string autofilename1;
	string autofilename2;
	string inputfilename;

public:
	FileHandler();
	void fileautoinput1();
	void display();
	void fileautoinput2();
	void fileinput1(string filename);
	void fileinput2(string filename);
	~FileHandler();

};


#endif // !FileHandler_H
