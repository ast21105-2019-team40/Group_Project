#include "Admin.h"

Admin::Admin(){
	account = "admin";
	password = "admin";
}


string Admin::Agetter(){
	return account;
}


string Admin::Pgetter(){
	return password;
}

bool Admin::AdminLogin(string _account, string _password, FileHandler & file) {
	bool check = false;

	if (account == _account && password == _password) {
		check = true;
	}
	return check;
}

Admin::~Admin(){
	cout << "destructor has been called!" << endl;
}
