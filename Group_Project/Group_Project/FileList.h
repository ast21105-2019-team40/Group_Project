#ifndef FileList_H
#define FileList_H
#include "File.h"
#include <iostream>
#include <string>
using namespace std;
class FileList
{
public:
	File* Head;

public:
	FileList();
	~FileList();
	void FileStore();
	void FileWrite();
	void FileDisplay();

};

#endif // !FileList_H

