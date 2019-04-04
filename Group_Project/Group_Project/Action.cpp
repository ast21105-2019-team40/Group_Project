#include "Action.h"

Action::Action(){
	
}

Action::~Action(){


}

void Action::doAction(FileHandler& file){

	bool check;

	cout << "Wellcom to our program" << endl;
	cout << "Please enter your account: ";
	cin >> account;
	cout << "Please enter your password: ";
	cin >> password;
	check = false;
	
	if (account == "admin") {
		Admin admin;
		if (admin.Agetter() == account && admin.Pgetter() == password) {
			cout << "Wellcome admin" << endl;
			check = true;
		}
		else {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			doAction(file);
		}
	}
	else if (account.substr(0, 3) == "VEN") {
		//FileHandler file;
		VEN* VENCurr = file.VHead;
		for (; VENCurr != NULL; VENCurr = VENCurr->VNext) {
			if (VENCurr->VuserID == account && VENCurr->Vpassword == password) {
				cout << "Wellcome " << VENCurr->Vname << endl;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			doAction(file);
		}
	}
	else if (account.substr(0,3) == "ROV") {
		ROV* ROVCurr = file.RHead;
		for (; ROVCurr != NULL; ROVCurr = ROVCurr->RNext) {
			if (ROVCurr->RuserID == account && ROVCurr->Rpassword == password) {
				cout << "Wellcom " << ROVCurr->Rname << endl;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			doAction(file);
		}
	}
	else if (account.substr(0, 3) == "SCT") {
		SCT* SCTCurr = file.THead;
		for (; SCTCurr != NULL; SCTCurr = SCTCurr->TNext) {
			if (SCTCurr->TuserID == account && SCTCurr->Tpassword == password) {
				cout << "Wellcom " << SCTCurr->Tname << endl;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			doAction(file);
		}
	}
	else if (account.substr(0, 3) == "SCM") {
		SCM* SCMCurr = file.MHead;
		for (; SCMCurr != NULL; SCMCurr = SCMCurr->MNext) {
			if (SCMCurr->MuserID == account && SCMCurr->Mpassword == password) {
				cout << "Wellcom" << SCMCurr->Mname << endl;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			doAction(file);
		}
	}
	else {
		cout << "account or password not correct, please enter again." << endl;
		system("pause");
		system("cls");
		doAction(file);
	}

}
