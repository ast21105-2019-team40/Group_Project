#ifndef FileHandler_H
#define FileHandler_H
#include <iostream>
#include <string>
#include "UserNode.h"
#include "EquipmentNode.h"
#include "LoanNode.h"
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

	Loan* LHead = NULL;

	string autofilename1;
	string autofilename2;
	string autofilename3;


	string inputfilename;

public:
	FileHandler();
	void UserfileinputAuo();
	void EqmfileainputAuto();
	void LoanfileinputAuto();


	void Userfileinput(FileHandler& file, string filename);
	void Eqmfileinput(string filename);

	void displayAll();
	void displayUserfile();
	void displayEqmfile();
	void displayLoanfile();
	~FileHandler();

};


#endif // !FileHandler_H
