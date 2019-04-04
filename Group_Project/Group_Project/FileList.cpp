#include "File.h"
#include "FileList.h"
#include <fstream>
#include <algorithm>

FileList::FileList(){
	UHead = NULL;
	EHead = NULL;
}

FileList::~FileList(){

}

void FileList::UserFileStoreAuto(){

	string Fileline;
	ifstream dataSet;
	Ucounter = 0;

	UHead = NULL;
	File* UCurr = UHead;
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
					if (UCurr == NULL) {
						File* List = new File(Fileline);
						UCurr = List;
						UHead = UCurr;
						Ucounter++;
					}
					else {
						File* List = new File(Fileline);
						UCurr->UNext = List;
						UCurr = UCurr->UNext;
						Ucounter++;
					}
				}
			}
		} while (!dataSet.eof());

	}
	dataSet.close();
	remove("user.txt");

}


void FileList::UserFileWriteAuto(){
	int counter = 0;
	File* UCurr = UHead;
	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; UCurr != NULL; UCurr = UCurr->UNext) {
			NewFile << UCurr->line + "\n";
			counter++;
			if (counter == Ucounter) {
				break;
			}
		}
	}
	NewFile.close();
	rename("Newfile.txt", "user.txt");
}


void FileList::EqmFileStoreAuto(){

	string Fileline;
	ifstream dataSet;
	Ecounter = 0;

	EHead = NULL;
	File* ECurr = EHead;
	dataSet.open("camp_equipment.txt");
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
					if (ECurr == NULL) {
						File* List = new File(Fileline);
						ECurr = List;
						EHead = ECurr;
						Ecounter++;
					}
					else {
						File* List = new File(Fileline);
						ECurr->ENext = List;
						ECurr = ECurr->ENext;
						Ecounter++;
					}
				}
			}
		} while (!dataSet.eof());

	}
	dataSet.close();
	remove("camp_equipment.txt");

}

void FileList::EqmFileWriteAuto(){
	
	int counter = 0;
	File* ECurr = EHead;
	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; ECurr != NULL; ECurr = ECurr->ENext) {
			NewFile << ECurr->line + "\n";
			counter++;
			if (counter == Ecounter) {
				break;
			}
		}
	}
	NewFile.close();
	rename("Newfile.txt", "camp_equipment.txt");

}



void FileList::FileDisplay(){

	File* UCurr = UHead;
	int ucounter = 0;
	int ecounter = 0;
	for (; UCurr != NULL; UCurr = UCurr->UNext) {
		cout << UCurr->line << endl;
		ucounter++;
		if (ucounter == Ucounter) {
			break;
		}
	}

	File* ECurr = EHead;
	for (; ECurr != NULL; ECurr = ECurr->ENext) {
		cout << ECurr->line << endl;
		ecounter++;
		if (ecounter == Ecounter) {
			break;
		}
		
	}


	system("pause");

}


