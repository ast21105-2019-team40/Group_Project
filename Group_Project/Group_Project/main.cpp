#include "Admin.h"
#include "Action.h"
#include "User.h"
#include "FileList.h"
#include "FileHandler.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string account;
	string password;
	Admin a;
	Action act;



	
	FileList list;
	//list.UserFileStoreAuto();
	//list.UserFileWriteAuto();
	//list.EqmFileStoreAuto();
	//list.EqmFileWriteAuto();
	list.LoanFileStoreAuto();
	list.LoanFileWriteAuto();
	//list.FileDisplay();
	FileHandler file;
	file.UserfileinputAuo();
	file.EqmfileainputAuto();
	file.LoanfileinputAuto();
	//file.display();

	act.doAction(file);


	system("pause");


}