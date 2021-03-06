#pragma warning(disable : 4996)
#include "Admin.h"
#include "UserAction.h"
#include "UserNode.h"
#include "FileList.h"
#include "FileHandler.h"
#include "User.h"
#include <iostream>
#include <string>
using namespace std;

void mainpage(FileHandler& file) {	//main page which idendify the user's Identity by checking the login id (admin or user)

	string account;		//the login id
	string password;	//the password
	string accounttype;  //user or admin
	bool check = false;

	cout << "Wellcome to our program" << endl;
	cout << "Please enter your account: ";	//login id
	cin >> account;
	cout << "Please enter your password: "; //login password
	cin >> password;

	accounttype = account.substr(0, 3);

	if (account == "admin") {
		Admin admin;
		check = admin.AdminLogin(account, password, file);
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			mainpage(file);
		}
		else {
			admin.AdminDecision(file);
		}
	}
	else if (accounttype == "VEN") {
		VENuser user;
		check = user.UserLogin(account, password, file);
		if (check == false) {
			mainpage(file);
		}
		else {
			user.UserActionDecision(file);
		}
	}
	else if (accounttype == "ROV") {
		ROVuser user;
		check = user.UserLogin(account, password, file);
		if (check == false) {
			mainpage(file);
		}
		else {
			user.UserActionDecision(file);
		}
	}
	else if (accounttype == "SCT") {
		SCTuser user;
		check = user.UserLogin(account, password, file);
		if (check == false) {
			mainpage(file);
		}
		else {
			user.UserActionDecision(file);
		}
	}
	else if (accounttype == "SCM") {
		SCMuser user;
		check = user.UserLogin(account, password, file);
		if (check == false) {
			mainpage(file);
		}
		else {
			user.UserActionDecision(file);
		}
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