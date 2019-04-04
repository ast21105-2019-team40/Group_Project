#include "File.h"
#include "FileList.h"
#include <fstream>
#include <algorithm>

FileList::FileList(){
	Head = NULL;
}

FileList::~FileList(){

}

void FileList::FileStore(){

	string Fileline;
	string NewFileline;
	ifstream dataSet;

	Head = NULL;
	File* Curr = Head;
	dataSet.open("user.txt");
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		do {
			while (getline(dataSet, Fileline)) {
				if (Fileline == "") {
					continue;
				}
				else {
					if (Curr == NULL) {
						File* List = new File(Fileline);
						Curr = List;
						Head = Curr;
					}
					else {
						File* List = new File(Fileline);
						Curr->Next = List;
						Curr = Curr->Next;
					}
				}
			}
		} while (!dataSet.eof());
	}
	dataSet.close();

}

void FileList::FileWrite(){
	File* Curr = Head;
	ofstream NewFile;



}

void FileList::FileDisplay(){

	File* Curr = Head;
	for (; Curr != NULL; Curr = Curr->Next) {
		cout << Curr->line << endl;
	}

}
