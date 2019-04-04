#ifndef Action_H
#define Action_H
#include <iostream>
#include <string>
#include "Admin.h"
#include "Equipment.h"
#include "File.h"
#include "FileHandler.h"
#include "FileList.h"
#include "User.h"
using namespace std;

class Action
{
public:
	string account;
	string password;

public:
	Action();
	~Action();
	void doAction(FileHandler& file);


	void UserSearchEqmAll(FileHandler& file);
	void UserSearchEqmType(FileHandler& file);
	void UserSearchEqmCondition(FileHandler& file);
	void UserSearchEqmID(FileHandler& file);
	void UserSearchEqmStatus(FileHandler& file);

	void UserSearchLoanRecord(FileHandler& file);
	void UserBorrow(FileHandler& file);
	void UserReturn(FileHandler& file);








	void 

};



#endif // !Action_H

