#include "Loan.h"

LoanControl::LoanControl(){
	post = "";
	rank = "";
	credit = 0;
}

int LoanControl::ReturnCredit(string account, FileHandler & file)
{
	if (account.substr(0, 3) == "VEN") {
		VEN* VENCurr = file.VHead;
		for (; VENCurr != NULL; VENCurr = VENCurr->VNext) {
			if (VENCurr->VuserID == account) {
				if (VENCurr->Vsection == "Venture Scout") {
					credit = 3;
					break;
				}
				else {
					credit = 0;
					break;
				}
			}
		}
	}
	else if ((account.substr(0, 3) == "ROV")) {
		ROV* ROVCurr = file.RHead;
		for (; ROVCurr != NULL; ROVCurr = ROVCurr->RNext) {
			if (ROVCurr->RuserID == account) {
				if (ROVCurr->Rsection == "Rover Scout") {
					credit = 5;
					break;
				}
				else {
					credit = 0;
					break;
				}
			}
		}
	}
	else if ((account.substr(0, 3) == "SCT")) {
		SCT* SCTCurr = file.THead;
		for (; SCTCurr != NULL; SCTCurr = SCTCurr->TNext) {
			if (SCTCurr->TuserID == account) {
				if (SCTCurr->Trank == "Member") {
					credit = 1;
					break;
				}
				else if(SCTCurr->Trank == "Patrol Leader" || SCTCurr->Trank == "Assistant Patrol Leader"){
					credit = 3;
					break;
				}
				else {
					credit = 0;
					break;
				}
			}
		}
	}
	else if ((account.substr(0, 3) == "SCM")) {
		SCM* SCMCurr = file.MHead;
		for (; SCMCurr != NULL; SCMCurr = SCMCurr->MNext) {
			if (SCMCurr->MuserID == account) {
				if (SCMCurr->Msection == "Scouter") {
					credit = 5;
					break;
				}
				else {
					credit = 0;
					break;
				}
			}
		}
	}

	return credit;
}

void LoanControl::WriteLoanfile(FileHandler & file){

	Loan* LoCurr = file.LHead;
	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; LoCurr != NULL; LoCurr = LoCurr->LNext) {
			NewFile << LoCurr->userid + "|" + LoCurr->username + "|" + LoCurr->itemCode + "|" + LoCurr->itemName + "|" + LoCurr->itemType + "|" + LoCurr->Bdate + "|" + LoCurr->Rdate + "|" + LoCurr->status + "\n";
		}
	}
	NewFile.close();
	remove("loan.txt");
	rename("Newfile.txt", "loan.txt");
}

LoanControl::~LoanControl()
{
}
