#include "Admin.h"
#include "Action.h"
#include "UserNode.h"
#include "FileList.h"
#include "FileHandler.h"
#include <iostream>
#include <string>
using namespace std;

void mainpage(FileHandler& file) {

	string account;
	string password;
	string accounttype;

	cout << "Wellcom to our program" << endl;
	cout << "Please enter your account: ";
	cin >> account;
	cout << "Please enter your password: ";
	cin >> password;

	accounttype = account.substr(0, 3);

	if (account == "admin") {
		Admin admin;
	}
	else if (accounttype == "VEN" || accounttype == "ROV" || accounttype == "SCT" || accounttype == "SCM") {
		Action action;
		action.UserLogin(account, password, file);
	}
	else {
		cout << "account or password not correct, please enter again." << endl;
		system("pause");
		system("cls");
		mainpage(file);
	}
}

int main() {
	
	string account;
	string password;
	Admin a;
	Action act;



	
	FileList list;
	list.UserFileStoreAuto();
	list.UserFileWriteAuto();
	list.EqmFileStoreAuto();
	list.EqmFileWriteAuto();
	list.LoanFileStoreAuto();
	list.LoanFileWriteAuto();
	//list.FileDisplay();
	FileHandler file;
	file.UserfileinputAuo();
	file.EqmfileainputAuto();
	file.LoanfileinputAuto();
	//file.display();

	mainpage(file);

	system("pause");


}