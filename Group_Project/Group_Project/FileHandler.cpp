#include "FileHandler.h"
#include "User.h"
#include <fstream>

FileHandler::FileHandler()
{
	autofilename1 = "user.txt";
	autofilename2 = "camp_equipment.txt";
	inputfilename = "";


}

void FileHandler::Userfileautoinput(){

	VEN* VENcurr = VHead;
	ROV* ROVcurr = RHead;
	SCT* SCTcurr = THead;
	SCM* SCMcurr = MHead;
	string userID;
	string name;
	string section;
	string password;
	string address;
	string rank;
	string startSymbol;
	string endSymbol;
	ifstream dataSet;
	
	dataSet.open(autofilename1);
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		do {
			getline(dataSet, userID, '|');
			if (userID.substr(0, 3) == "VEN") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '\n');

				if (VENcurr == NULL) {
					VEN* VENList = new VEN(userID, name, section, password, address);
					VENcurr = VENList;
					VHead = VENcurr;
				}
				else {
					for (VENcurr = VHead; VENcurr->VNext != NULL; VENcurr = VENcurr->VNext) {}
					VEN* VENList = new VEN(userID, name, section, password, address);
					VENcurr->VNext= VENList;
					VENcurr = VENcurr->VNext;
				}

			}
			else if (userID.substr(0, 3) == "ROV") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '\n');

				if (ROVcurr == NULL) {
					ROV* ROVList = new ROV(userID, name, section, password, address);
					ROVcurr = ROVList;
					RHead = ROVcurr;
				}
				else {
					for (ROVcurr = RHead; ROVcurr->RNext != NULL; ROVcurr = ROVcurr->RNext) {}
					ROV* ROVList = new ROV(userID, name, section, password, address);
					ROVcurr->RNext = ROVList;
					ROVcurr = ROVcurr->RNext;
				}

			}
			else if (userID.substr(0, 3) == "SCT") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '|');
				getline(dataSet, rank, '\n');

				if (SCTcurr == NULL) {
					SCT* SCTList = new SCT(userID, name, section, password, address, rank);
					SCTcurr = SCTList;
					THead = SCTcurr;
				}
				else {
					for (SCTcurr = THead; SCTcurr->TNext != NULL; SCTcurr = SCTcurr->TNext) {}
					SCT* SCTList = new SCT(userID, name, section, password, address, rank);
					SCTcurr->TNext = SCTList;
					SCTcurr = SCTcurr->TNext;
				}

			}
			else if (userID.substr(0, 3) == "SCM") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '|');
				getline(dataSet, rank, '\n');

				if (SCMcurr == NULL) {
					SCM* SCMList = new SCM(userID, name, section, password, address, rank);
					SCMcurr = SCMList;
					MHead = SCMcurr;
				}
				else {
					for (SCMcurr = MHead; SCMcurr->MNext != NULL; SCMcurr = SCMcurr->MNext) {}
					SCM* SCMList = new SCM(userID, name, section, password, address, rank);
					SCMcurr->MNext = SCMList;
					SCMcurr = SCMcurr->MNext;
				}
			}
		}while (!dataSet.eof());
	}
	dataSet.close();

}

void FileHandler::display(){

	VEN* VENcurr = VHead;
	for (; VENcurr != NULL; VENcurr = VENcurr->VNext) {
		cout << VENcurr->VuserID << "| " << VENcurr->Vname << "| " << VENcurr->Vsection << "| " << VENcurr->Vpassword << "| " << VENcurr->Vaddress << endl;
	}

	ROV* ROVcurr = RHead;
	for (; ROVcurr != NULL; ROVcurr = ROVcurr->RNext) {
		cout << ROVcurr->RuserID << "| " << ROVcurr->Rname << "| " << ROVcurr->Rsection << "| " << ROVcurr->Rpassword << "| " << ROVcurr->Raddress << endl;
	}

	SCT* SCTcurr = THead;
	for (; SCTcurr != NULL; SCTcurr = SCTcurr->TNext) {
		cout << SCTcurr->TuserID << "| " << SCTcurr->Tname << "| " << SCTcurr->Tsection << "| " << SCTcurr->Tpassword << "| " << SCTcurr->Taddress << "| " << SCTcurr->Trank << endl;
	}

	SCM* SCMcurr = MHead;
	for (; SCMcurr != NULL; SCMcurr = SCMcurr->MNext) {
		cout << SCMcurr->MuserID << "| " << SCMcurr->Mname << "| " << SCMcurr->Msection << "| " << SCMcurr->Mpassword << "| " << SCMcurr->Maddress << "| " << SCMcurr->Mrank << endl;
	}

	

	system("pause");

}

void FileHandler::Eqmfileautoinput(){

	Tent* TeCurr = TeHead;
	Stove* SeCurr = StHead;
	Lantern* LaCurr = LaHead;

	string itemCode;
	string itemName;
	string brand;
	string type;
	string date;
	string condition;
	string status;
	string ppl;
	string tType;
	string door;
	string Dlayer;
	string colour;
	string stype;
	string ftype;
	string actType;
	string ltype;

	ifstream dataSet;

	dataSet.open(autofilename2);
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		do {
			getline(dataSet, itemCode, '|');
			if (itemCode.substr(0, 1) == "T") {
				getline(dataSet, itemName, '|');
				getline(dataSet, brand, '|');
				getline(dataSet, type, '|');
				getline(dataSet, date, '|');
				getline(dataSet, condition, '|');
				getline(dataSet, status, '|');
				getline(dataSet, ppl, '|');
				getline(dataSet, tType, '|');
				getline(dataSet, door, '|');
				getline(dataSet, Dlayer, '|');
				getline(dataSet, colour, '|');

				if (TeCurr == NULL) {
					Tent* TentList = new Tent(itemCode, itemName, brand, type, date, condition, status, ppl, tType, door, Dlayer, colour);
					TeCurr = TentList;
					TeHead = TeCurr;
				}
				else {
					for (TeCurr = TeHead; TeCurr->TeNext != NULL; TeCurr = TeCurr->TeNext) {}
					Tent* TentList = new Tent(itemCode, itemName, brand, type, date, condition, status, ppl, tType, door, Dlayer, colour);
					TeCurr->TeNext = TentList;
					TeCurr = TeCurr->TeNext;
				}
			}
			else if (itemCode.substr(0,1) == "S") {
				getline(dataSet, itemName, '|');
				getline(dataSet, brand, '|');
				getline(dataSet, type, '|');
				getline(dataSet, date, '|');
				getline(dataSet, condition, '|');
				getline(dataSet, status, '|');
				getline(dataSet, stype, '|');
				getline(dataSet, ftype, '|');

				if (SeCurr == NULL) {
					Stove* StoveList = new Stove(itemCode, itemName, brand, type, date, condition, status, stype, ftype);
					SeCurr = StoveList;
					StHead = SeCurr;
				}
				else {
					for (SeCurr = StHead; SeCurr->StNext != NULL; SeCurr = SeCurr->StNext) {}
					Stove* StoveList = new Stove(itemCode, itemName, brand, type, date, condition, status, stype, ftype);
					SeCurr->StNext = StoveList;
					SeCurr = SeCurr->StNext;
				}
			}

		} while (!dataSet.eof());
	}

}

void FileHandler::fileinput1(string filename){


}

void FileHandler::fileinput2(string filename){


}

FileHandler::~FileHandler(){


}
