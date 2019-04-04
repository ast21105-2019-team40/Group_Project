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
	
	FileHandler file;
	file.fileautoinput1();
	file.fileautoinput1();
	file.display();
	FileList list;
	list.FileStore();
	list.FileStore();
	list.FileDisplay();
	system("pause");


}