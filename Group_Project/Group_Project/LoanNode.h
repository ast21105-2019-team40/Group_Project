#ifndef Loan_H
#define Loan_H
#include <iostream>
#include <string>
using namespace std;

class Loan
{
public:
	string userid;
	string username;
	string itemCode;
	string itemName;
	string itemType;
	string Bdate;
	string Rdate;
	string status;
	Loan* LNext;

public:
	Loan(string _userid, string _username, string _itemCode, string _itemName, string _itemType, string _Bdate, string _Rdate, string _status) {
		this->userid = _userid;
		this->username = _username;
		this->itemCode = _itemCode;
		this->itemName = _itemName;
		this->itemType = _itemType;
		this->Bdate = _Bdate;
		this->Rdate = _Rdate;
		this->status = _status;
		this->LNext = NULL;
	}


};
#endif // !Loan_H
