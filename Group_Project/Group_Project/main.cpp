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
	list.UserFileStoreAuto();
	list.UserFileWriteAuto();
	list.EqmFileStoreAuto();
	list.EqmFileWriteAuto();
	//list.FileDisplay();
	FileHandler file;
	file.Userfileautoinput();
	file.Eqmfileautoinput();
	//file.display();

	act.doAction(file);


	system("pause");


}