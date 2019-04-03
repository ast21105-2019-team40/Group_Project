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

Admin::~Admin(){
	cout << "destructor has been called!" << endl;
}
