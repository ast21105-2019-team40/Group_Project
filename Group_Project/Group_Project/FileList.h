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
	int Ucounter;
	int Ecounter;

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





	void FileDisplay();

};

#endif // !FileList_H

