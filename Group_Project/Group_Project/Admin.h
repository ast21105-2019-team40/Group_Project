#ifndef Admin_H
#define Admin_H
#include <iostream>
#include <string>
#include <fstream>
#include "FileHandler.h"
#include "UserAction.h"
#include "LoanControl.h"
#include "FileList.h"
using namespace std;

class Admin : public Action, public LoanControl
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
	void ProduceFileDecision(FileHandler& file);
	void ProduceTextfile(FileHandler& file);
	void ProduceUserfile(FileHandler& file);
	void ProduceEqmfile(FileHandler& file);
	void ProduceLoanfile(FileHandler& file);
	void Insert(FileHandler& file);
	void Deletefile();
	void DeleteDecison(FileHandler& file);
	void DeleteUserDataID(FileHandler& file);
	void DeleteEqmDataID(FileHandler& file);
	



	
	~Admin();
};


#endif // !Admin_H

