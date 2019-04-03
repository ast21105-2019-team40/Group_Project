#include "FileHandler.h"
#include "User.h"
#include <fstream>

FileHandler::FileHandler()
{
	autofilename1 = "user.txt";
	autofilename2 = "camp_equipment.txt";
	inputfilename = "";

}

void FileHandler::fileautoinput1(){

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
				getline(dataSet, endSymbol, '\n');

				if (VENcurr == NULL) {
					VEN* VENList = new VEN(userID, name, section, password, address);
					VENcurr = VENList;
					VHead = VENcurr;
				}
				else {
					VEN* VENList = new VEN(userID, name, section, password, address);
					VENcurr->VNext = VENList;
					VENcurr = VENcurr->VNext;
				}

			}
			else if (userID.substr(0, 3) == "ROV") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '\n');
				getline(dataSet, endSymbol, '\n');

				if (ROVcurr == NULL) {
					ROV* ROVList = new ROV(userID, name, section, password, address);
					ROVcurr = ROVList;
					RHead = ROVcurr;
				}
				else {
					ROV* ROVList = new ROV(userID, name, section, password, address);
					ROVcurr->RNext = ROVList;
					ROVcurr = ROVcurr->RNext;
				}

			}
			else if (userID.substr(0, 3)=="SCT") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '|');
				getline(dataSet, rank, '\n');
				getline(dataSet, endSymbol, '\n');

				if (SCTcurr == NULL) {
					SCT* SCTList = new SCT(userID, name, section, password, address, rank);
					SCTcurr = SCTList;
					THead = SCTcurr;
				}
				else {
					SCT* SCTList = new SCT(userID, name, section, password, address, rank);
					SCTcurr->TNext = SCTList;
					SCTcurr = SCTcurr->TNext;
				}

			}
			else if (userID.substr(0,3) == "SCM") {
				getline(dataSet, name, '|');
				getline(dataSet, section, '|');
				getline(dataSet, password, '|');
				getline(dataSet, address, '|');
				getline(dataSet, rank, '\n');
				getline(dataSet, endSymbol, '\n');

				if (SCMcurr == NULL) {
					SCM* SCMList = new SCM(userID, name, section, password, address, rank);
					SCMcurr = SCMList;
					MHead = SCMcurr;
				}
				else {
					SCM* SCMList = new SCM(userID, name, section, password, address, rank);
					SCMcurr->MNext = SCMList;
					SCMcurr = SCMcurr->MNext;
				}
			}
		}while (!dataSet.eof());
	}

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

void FileHandler::fileautoinput2(){


}

void FileHandler::fileinput1(string filename){


}

void FileHandler::fileinput2(string filename){


}

FileHandler::~FileHandler(){


}
