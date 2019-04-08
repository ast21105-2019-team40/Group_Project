#ifndef LoanControl_H
#define LoanControl_H
#include "FileHandler.h"
#include "UserNode.h"
#include <iostream>
#include <string>

class LoanControl
{
public:
	string post;
	string rank;
	int credit;
public:
	LoanControl();
	int ReturnCredit(string account, FileHandler& file);


	~LoanControl();
};



#endif // !Loan_H

