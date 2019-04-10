#ifndef Admin_H
#define Admin_H
#include <iostream>
#include <string>
#include <fstream>
#include "FileHandler.h"
#include "UserAction.h"
#include "LoanControl.h"
using namespace std;

class Admin
{
private:
	string account;
	string password;

public:
	Admin();
	string Agetter();//account getter
	string Pgetter();//password getter
	bool AdminLogin(string _account, string _password, FileHandler& file);
	void AdminDecision(FileHandler& file);
	void AdminDisplay(FileHandler& file);
	void Searching(FileHandler& file);
	void UpdateEquipmentByID(FileHandler& file);
	void ProduceTextfile(FileHandler& file);
	void InsertUserFile(FileHandler& file);
	void InsertEqmFile(FileHandler& file);
	void InsertLoanFile(FileHandler& file);


	
	~Admin();
};


#endif // !Admin_H

