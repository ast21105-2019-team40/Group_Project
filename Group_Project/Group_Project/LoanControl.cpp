#include "LoanControl.h"

LoanControl::LoanControl(){
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

int LoanControl::ReturnBorrow(string account, FileHandler & file){
	borrowed = 0;
	Loan* LoCurr = file.LHead;
	for (; LoCurr != NULL; LoCurr = LoCurr->LNext) {
		if (account == LoCurr->userid && LoCurr->status == "NO") {
			borrowed++;
		}
	}
	return borrowed;
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

void LoanControl::WriteEqmfile(FileHandler & file){

	Tent* TeCurr = file.TeHead;
	Stove* StCurr = file.StHead;
	Lantern* LaCurr = file.LaHead;

	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
			NewFile << TeCurr->TitemCode + "|" + TeCurr->TitemName + "|" + TeCurr->Tbrand + "|" + TeCurr->Ttype + "|" + TeCurr->Tdate + "|" + TeCurr->Tcondition + "|" 
				+ TeCurr->Tstatus + "|" + TeCurr->Tppl + "|" + TeCurr->tType + "|" + TeCurr->Tdoor + "|" + TeCurr->TDlayer + "|" + TeCurr->Tcolour + "\n";
		}

		for (; StCurr != NULL; StCurr = StCurr->StNext) {
			NewFile << StCurr->SitemCode + "|" + StCurr->SitemName + "|" + StCurr->Sbrand + "|" + StCurr->Stype + "|" + StCurr->Sdate + "|" + StCurr->Scondition + "|"
				+ StCurr->Sstatus + "|" + StCurr->Sstype + "|" + StCurr->Sftype + "\n";
		}

		for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
			NewFile << LaCurr->LitemCode + "|" + LaCurr->LitemName + "|" + LaCurr->Lbrand + "|" + LaCurr->Ltype + "|" + LaCurr->Ldate + "|" + LaCurr->Lcondition + "|"
				+ LaCurr->Lstatus + "|" + LaCurr->LactType + "|" + LaCurr->Lltype + "|" + LaCurr->Lftype + "\n";
		}
	}
	NewFile.close();
	remove("camp_equipment.txt");
	rename("Newfile.txt", "camp_equipment.txt");

}

void LoanControl::WriteUserfile(FileHandler & file){
	VEN* VENcurr = file.VHead;
	ROV* ROVcurr = file.RHead;
	SCT* SCTcurr = file.THead;
	SCM* SCMcurr = file.MHead;

	ofstream NewFile;
	NewFile.open("Newfile.txt");
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		for (; VENcurr != NULL; VENcurr = VENcurr->VNext) {
			NewFile << VENcurr->VuserID << "|" << VENcurr->Vname << "|" << VENcurr->Vsection << "|" << VENcurr->Vpassword << "|" << VENcurr->Vaddress << endl;
		}

		for (; ROVcurr != NULL; ROVcurr = ROVcurr->RNext) {
			NewFile << ROVcurr->RuserID << "|" << ROVcurr->Rname << "|" << ROVcurr->Rsection << "|" << ROVcurr->Rpassword << "|" << ROVcurr->Raddress << endl;
		}

		for (; SCTcurr != NULL; SCTcurr = SCTcurr->TNext) {
			NewFile << SCTcurr->TuserID << "|" << SCTcurr->Tname << "|" << SCTcurr->Tsection << "|" << SCTcurr->Tpassword << "|" << SCTcurr->Taddress << "|" << SCTcurr->Trank << endl;
		}

		for (; SCMcurr != NULL; SCMcurr = SCMcurr->MNext) {
			NewFile << SCMcurr->MuserID << "|" << SCMcurr->Mname << "|" << SCMcurr->Msection << "|" << SCMcurr->Mpassword << "|" << SCMcurr->Maddress << "|" << SCMcurr->Mrank << endl;
		}
	}
	NewFile.close();
	remove("user.txt");
	rename("Newfile.txt", "user.txt");

}

string LoanControl::ReturnDate(int date, int month, int year){

	int returnDate = date + 14;
	string Rdate = "";

	if (month == 2) {
		if (returnDate > 28) {
			returnDate = returnDate - 28;
			month++;
			if (month > 12) {
				month = month - 12;
				year++;
			}
		}
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (returnDate > 31) {
			returnDate = returnDate - 31;
			month++;
			if (month > 12) {
				month = month - 12;
				year++;
			}
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (returnDate > 30) {
			returnDate = returnDate - 30;
			month++;
			if (month > 12) {
				month = month - 12;
				year++;
			}
		}
	}
	Rdate = to_string(returnDate) + "/" + to_string(month) + "/" + to_string(year);
	return Rdate;
}



LoanControl::~LoanControl()
{
}
