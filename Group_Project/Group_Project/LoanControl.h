#ifndef LoanControl_H
#define LoanControl_H
#include "FileHandler.h"
#include <iostream>
#include <string>
#include <fstream>

class LoanControl
{
public:
	int credit;
public:
	LoanControl();
	int ReturnCredit(string account, FileHandler& file);
	void WriteLoanfile(FileHandler& file);


	~LoanControl();
};



#endif // !Loan_H

