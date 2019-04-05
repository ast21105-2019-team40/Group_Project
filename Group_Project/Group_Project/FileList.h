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
	void UserFileStore();
	void UserFileWrite();

	void EqmFileStoreAuto();
	void EqmFileWriteAuto();
	void EqmFileStore();
	void EqmFileWrite();

	void LoanFileStoreAuto();
	void LoanFileWriteAuto();
	void LoanFileStore();
	void LoadFileWrite();





	void FileDisplay();

};

#endif // !FileList_H

