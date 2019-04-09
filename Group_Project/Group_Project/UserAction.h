#ifndef UserAction_H
#define UserAction_H
#include <iostream>
#include <string>
#include "FileHandler.h"
#include "LoanControl.h"
#include "Equipment.h"
#include <ctime>
using namespace std;

class Action
{
public:
	string account;
	string password;
	string name;

public:
	Action();
	~Action();
	LoanControl loan;
	Equipment eqm;


	//void doAction(FileHandler& file);

	bool UserLogin(string _account, string _password, FileHandler& file);
	void UserActionDecision(FileHandler & file);

	void UserSearchDecision(FileHandler& file);

	void UserSearchEqmAll(FileHandler& file);
	void UserSearchEqmStatus(FileHandler& file);

	void UserSearchEqmType(FileHandler& file);
	void UserSearchEqmCondition(FileHandler& file);
	void UserSearchEqmID(FileHandler& file);
	void UserSearchEqmStatus_Condition(FileHandler& file);
	void DeepSearching(FileHandler& file);

	void UserSearchLoanRecord(FileHandler& file);
	void UserBorrow(FileHandler& file);
	void UserReturn(FileHandler& file);

	void UserChangePassword(string account, FileHandler& file);







};



#endif // !Action_H

