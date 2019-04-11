#include "File.h"
#include "FileList.h"
#include <fstream>
#include <algorithm>

FileList::FileList(){
	UHead = NULL;
	EHead = NULL;
	LHead = NULL;
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

string FileList::UserFileStore(){

	string filename;
	bool check;
	string Fileline;
	ifstream dataSet;
	Ucounter = 0;

	UHead = NULL;
	File* UCurr = UHead;

	cout << "Input the file name: ";
	cin >> filename;
	dataSet.open(filename);
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
		check = false;
		system("pause");
		system("cls");
	}
	else {
		check = true;
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
		dataSet.close();
		remove(filename.c_str());
		UserFileWrite(filename);
	}
	if (check == true) {
		return filename;
	}else {
		filename = "";
		return filename;
	}
}

void FileList::UserFileWrite(string filename){
	
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
	rename("Newfile.txt", filename.c_str());

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

string FileList::EqmFileStore(){

	string filename;
	bool check;
	string Fileline;
	ifstream dataSet;
	Ecounter = 0;

	EHead = NULL;
	File* ECurr = EHead;
	cout << "Input the file name: ";
	cin >> filename;
	dataSet.open(filename);
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
		check = false;
		system("pause");
		system("cls");
	}
	else {
		check = true;
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
		dataSet.close();
		remove(filename.c_str());
		EqmFileWrite(filename);

	}
	if (check == true) {
		return filename;
	}
	else {
		filename = "";
		return filename;
	}

}

void FileList::EqmFileWrite(string filename){
	
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
	rename("Newfile.txt", filename.c_str());

}

void FileList::LoanFileStoreAuto(){

	string Fileline;
	ifstream dataSet;
	Lcounter = 0;

	LHead = NULL;
	File* LCurr = LHead;
	dataSet.open("loan.txt");
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
					if (LCurr == NULL) {
						File* List = new File(Fileline);
						LCurr = List;
						LHead = LCurr;
						Lcounter++;
					}
					else {
						File* List = new File(Fileline);
						LCurr->LNext = List;
						LCurr = LCurr->LNext;
						Lcounter++;
					}
				}
			}
		} while (!dataSet.eof());

	}
	dataSet.close();
	remove("loan.txt");


}

void FileList::LoanFileWriteAuto(){
	int counter = 0;
	File* LCurr = LHead;
	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; LCurr != NULL; LCurr = LCurr->LNext) {
			NewFile << LCurr->line + "\n";
			counter++;
			if (counter == Lcounter) {
				break;
			}
		}
	}
	NewFile.close();
	rename("Newfile.txt", "loan.txt");

}

string FileList::LoanFileStore(){

	string filename;
	bool check;
	string Fileline;
	ifstream dataSet;
	Lcounter = 0;

	LHead = NULL;
	File* LCurr = LHead;

	cout << "Input the file name: ";
	cin >> filename;
	dataSet.open(filename);
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
		check = false;
		system("pause");
		system("cls");
	}
	else {
		check = true;
		do {
			while (getline(dataSet, Fileline)) {
				if (Fileline == "") {
					continue;
				}
				else {
					if (LCurr == NULL) {
						File* List = new File(Fileline);
						LCurr = List;
						LHead = LCurr;
						Lcounter++;
					}
					else {
						File* List = new File(Fileline);
						LCurr->LNext = List;
						LCurr = LCurr->LNext;
						Lcounter++;
					}
				}
			}
		} while (!dataSet.eof());
		dataSet.close();
		remove(filename.c_str());
		LoanFileWrite(filename);
	}
	if (check == true) {
		return filename;
	}
	else {
		filename = "";
		return filename;
	}
}

void FileList::LoanFileWrite(string filename){
	int counter = 0;
	File* LCurr = LHead;
	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; LCurr != NULL; LCurr = LCurr->LNext) {
			NewFile << LCurr->line + "\n";
			counter++;
			if (counter == Lcounter) {
				break;
			}
		}
	}
	NewFile.close();
	rename("Newfile.txt", filename.c_str());
}



void FileList::FileDisplay(){

	File* UCurr = UHead;
	int ucounter = 0;
	int ecounter = 0;
	int lcounter = 0;
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
	File* LCurr = LHead;
	for (; LCurr != NULL; LCurr = LCurr->LNext) {
		cout << LCurr->line << endl;
		lcounter++;
		if (lcounter == Lcounter) {
			break;
		}
	}


	system("pause");

}


