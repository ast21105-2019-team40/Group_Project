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

void Admin::AdminDecision(FileHandler & file){
	int choice;
	cout << "Wellcome Admin" << endl;
	cout << "There are the function: 1.Display 2.Searching" << endl;
	cout << "Enter your choice";
	cin >> choice;


}

void Admin::AdminDisplay(FileHandler & file) {

	int choice;
	cout << "1.Display all  2.Display Userfile  3.Display Equipmentfile  4.Display Loanfile" << endl;
	cout << "Input your choice: ";
	cin >> choice;
	switch (choice)
	{
	default:
		cout << "wrong input, please try again" << endl;
		AdminDecision(file);
	case 1: {
		file.displayAll();
		AdminDecision(file);
	}
	case 2: {
		file.displayUserfile();
		AdminDecision(file);
	}
	case 3: {
		file.displayEqmfile();
		AdminDecision(file);
	}
	case 4: {
		file.displayLoanfile();
		AdminDecision(file);
	}
	}
}

void Admin::Searching(FileHandler & file){

	int choice;
	cout << "1.Search All Equipment  2. Search All Avaliable Equipment  3.Search Equipment ID  4.Search Equipment Type  " << endl;
	cout << "5.Search All Good Condition Equipment  6.Search All Avaliable Equipment with Good Condition" << endl;
	cout << "Choose the function you want to use: ";
	cin >> choice;
	Action action;
	switch (choice)
	{
	default:
		cout << "Wrong input, please try again!!";
		AdminDecision(file);
	case 1: {
		action.UserSearchEqmAll(file);
		AdminDecision(file);
	}
	case 2: {
		action.UserSearchEqmStatus(file);
		AdminDecision(file);
	}
	case 3: {
		action.UserSearchEqmID(file);
		AdminDecision(file);
	}
	case 4: {
		action.UserSearchEqmType(file);
		AdminDecision(file);
	}
	case 5: {
		action.UserSearchEqmCondition(file);
		AdminDecision(file);
	}
	case 6: {
		action.UserSearchEqmStatus_Condition(file);
		AdminDecision(file);
	}
	}

}







Admin::~Admin(){
	cout << "destructor has been called!" << endl;
}
