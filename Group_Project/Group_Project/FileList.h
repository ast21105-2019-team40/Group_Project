#ifndef FileList_H
#define FileList_H
#include "File.h"
#include <iostream>
#include <string>
using namespace std;
class FileList
{
public:
	File* UHead;
	File* EHead;
	File* LHead;
	int Ucounter;
	int Ecounter;
	int Lcounter;

public:
	FileList();
	~FileList();
	void UserFileStoreAuto();
	void UserFileWriteAuto();
	string UserFileStore();
	void UserFileWrite(string filename);

	void EqmFileStoreAuto();
	void EqmFileWriteAuto();
	string EqmFileStore();
	void EqmFileWrite(string filename);

	void LoanFileStoreAuto();
	void LoanFileWriteAuto();
	string LoanFileStore();
	void LoanFileWrite(string filename);





	void FileDisplay();

};

#endif // !FileList_H

