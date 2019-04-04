#ifndef File_H
#define File_H
#include <iostream>
#include <string>
using namespace std;
class File
{
public:
	string line;
	File* Next;

public:
	File(string _line) {
		this->line = _line;
		this->Next = NULL;
	}
	~File() {

	}

};

#endif // !FileList_H

