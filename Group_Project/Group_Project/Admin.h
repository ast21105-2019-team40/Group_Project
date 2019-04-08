#ifndef Admin_H
#define Admin_H
#include <iostream>
#include <string>
#include "FileHandler.h"
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
	~Admin();
};


#endif // !Admin_H

