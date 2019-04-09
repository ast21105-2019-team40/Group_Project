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
	int borrowed;
public:
	LoanControl();
	int ReturnCredit(string account, FileHandler& file);
	int ReturnBorrow(string account, FileHandler& file);
	void WriteLoanfile(FileHandler& file);
	void WriteEqmfile(FileHandler& file);
	void WriteUserfile(FileHandler& file);
	string ReturnDate(int date, int month, int year);


	~LoanControl();
};



#endif // !Loan_H

