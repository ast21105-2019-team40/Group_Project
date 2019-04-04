#include "Admin.h"
#include "User.h"
#include "FileList.h"
#include "FileHandler.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	Admin a;
	cout << a.Agetter() << endl;
	cout << a.Pgetter() << endl;
	
	FileList list;
	list.UserFileStoreAuto();
	list.UserFileWriteAuto();
	list.EqmFileStoreAuto();
	list.EqmFileWriteAuto();
	//list.FileDisplay();
	FileHandler file;
	//file.Userfileautoinput();
	file.Eqmfileautoinput();
	file.display();
	system("pause");


}