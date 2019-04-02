#ifndef Admin_H
#define Admin_H
#include <iostream>
#include <string>
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
	~Admin();
};


#endif // !Admin_H

