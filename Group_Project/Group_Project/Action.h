#ifndef Action_H
#define Action_H
#include <iostream>
#include <string>
#include "Admin.h"
#include "EquipmentNode.h"
#include "File.h"
#include "FileHandler.h"
#include "FileList.h"
#include "UserNode.h"
#include "Loan.h"
#include "LoanNode.h"
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

	void UserSearchLoanRecord(FileHandler& file);
	void UserBorrow(FileHandler& file);
	void UserReturn(FileHandler& file);







};



#endif // !Action_H

