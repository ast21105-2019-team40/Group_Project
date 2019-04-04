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

};



#endif // !Action_H

