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
using namespace std;

class Action
{
public:
	string account;
	string password;

public:
	Action();
	~Action();
	//void doAction(FileHandler& file);

	void UserLogin(string account, string password, FileHandler& file);
	void UserActionDecision(FileHandler & file);

	void UserSearchDecision(FileHandler& file);

	void UserSearchEqmAll(FileHandler& file);
	void UserSearchEqmStatus(FileHandler& file);

	void UserSearchEqmType(FileHandler& file);
	void UserSearchEqmCondition(FileHandler& file);
	void UserSearchEqmID(FileHandler& file);

	void UserSearchLoanRecord(FileHandler& file);
	void UserBorrow(FileHandler& file);
	void UserReturn(FileHandler& file);







};



#endif // !Action_H

