#include "Action.h"

Action::Action(){
	
}

Action::~Action(){


}

/*void Action::doAction(FileHandler& file){

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
		else {
			int choice;
			cout << "There are the functions: 1.Search Equment  2.Search Loan Record  3.Change Password  0.End" << endl;
			cout << "Choose the function you want to use: ";
			cin >> choice;
			switch (choice){
				case 0: 
					system("cls");
					cout << "Thanks for using our program!!" << endl;
					system("pause");
					exit(0);
				case 1: {
					UserSearchDecision(file);
				}
				case 2: {

				}
				case 3: {

				}
			}


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

}*/

void Action::UserLogin(string account, string password, FileHandler & file){
	bool check = false;

	if (account.substr(0, 3) == "VEN") {
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
			UserLogin(account, password, file);
		}
		else {
			int choice;
			cout << "There are the functions: 1.Search Equment  2.Search Loan Record  3.Change Password  0.End" << endl;
			cout << "Choose the function you want to use: ";
			cin >> choice;
			switch (choice) {
			case 0:
				system("cls");
				cout << "Thanks for using our program!!" << endl;
				system("pause");
				exit(0);
			case 1: {
				UserSearchDecision(file);
			}
			case 2: {

			}
			case 3: {

			}
			}


		}
	}
	else if (account.substr(0, 3) == "ROV") {
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
			UserLogin(account, password, file);
		}
	}
	else if (account.substr(0, 3) == "SCT") {
		SCT* SCTCurr = file.THead;
		for (; SCTCurr != NULL; SCTCurr = SCTCurr->TNext) {
			if (SCTCurr->TuserID == account && SCTCurr->Tpassword == password) {
				cout << "Wellcom " << SCTCurr->Tname << endl;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
			UserLogin(account, password, file);
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
			UserLogin(account, password, file);
		}
	}
}

void Action::UserActionDecision(FileHandler & file){

	int choice;
	cout << "There are the functions: 1.Search Equment  2.Search Loan Record  3.Change Password  0.End" << endl;
	cout << "Choose the function you want to use: ";
	cin >> choice;
	switch (choice) {
	case 0:
		system("cls");
		cout << "Thanks for using our program!!" << endl;
		system("pause");
		exit(0);
	case 1: {
		UserSearchDecision(file);
		UserActionDecision(file);
	}
	case 2: {

	}
	case 3: {

	}
	}
}

void Action::UserSearchDecision(FileHandler & file){
	int choice;
	cout << "1. Search All Equipment  2. Search All Avaliable Equipment  3. Search Equipment ID  4. Search Equipment Type  5. Search All Good Condition Equipment" << endl;
	cout << "Choose the function you want to use: ";
	cin >> choice;
	switch (choice) {
	default:
		cout << "wrong input, please input again" << endl;
		UserSearchDecision(file);
	case 1: {
		UserSearchEqmAll(file);
		UserActionDecision(file);
	}
	case 2: {
		UserSearchEqmStatus(file);
		UserActionDecision(file);
	}
	case 3: {
		UserSearchEqmID(file);
		UserActionDecision(file);

	}
	case 4: {
		UserSearchEqmType(file);
		UserActionDecision(file);

	}
	case 5: {
		UserSearchEqmCondition(file);
		UserActionDecision(file);

	}

	}

}

void Action::UserSearchEqmAll(FileHandler & file){
	Tent* TeCurr = file.TeHead;
	for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
		cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
			<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
	}

	Stove* SeCurr = file.StHead;
	for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
		cout << SeCurr->SitemCode << " | " << SeCurr->SitemName << " | " << SeCurr->Sbrand << " | " << SeCurr->Stype << " | " << SeCurr->Sdate << " | " << SeCurr->Scondition << " | "
			<< SeCurr->Sstatus << " | " << SeCurr->Sstype << " | " << SeCurr->Sftype << endl;
	}
	
	Lantern* LaCurr = file.LaHead;
	for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
		cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | " << LaCurr->Lcondition << " | "
			<< LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
	}
	system("pause");
	system("cls");




}

void Action::UserSearchEqmStatus(FileHandler & file){
	
	Tent* TeCurr = file.TeHead;
	for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
		if (TeCurr->Tstatus == "in") {
			cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
				<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
		}
	}

	Stove* SeCurr = file.StHead;
	for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
		if (SeCurr->Sstatus == "in") {
			cout << SeCurr->SitemCode << " | " << SeCurr->SitemName << " | " << SeCurr->Sbrand << " | " << SeCurr->Stype << " | " << SeCurr->Sdate << " | " << SeCurr->Scondition << " | "
				<< SeCurr->Sstatus << " | " << SeCurr->Sstype << " | " << SeCurr->Sftype << endl;
		}
	}

	Lantern* LaCurr = file.LaHead;
	for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
		if (LaCurr->Lstatus == "in") {
			cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | " << LaCurr->Lcondition << " | "
				<< LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
		}
	}

	system("pause");
	system("cls");

}

void Action::UserSearchEqmType(FileHandler & file){
	string type;
	cout << "Input the equipment type you want to search: ";
	cin >> type;
	cout << endl;

	Tent* TeCurr = file.TeHead;
	for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
		if (TeCurr->Ttype == type) {
			cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
				<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
		}
	}

	Stove* SeCurr = file.StHead;
	for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
		if (SeCurr->Stype == type) {
			cout << SeCurr->SitemCode << " | " << SeCurr->SitemName << " | " << SeCurr->Sbrand << " | " << SeCurr->Stype << " | " << SeCurr->Sdate << " | " << SeCurr->Scondition << " | "
				<< SeCurr->Sstatus << " | " << SeCurr->Sstype << " | " << SeCurr->Sftype << endl;
		}
	}

	Lantern* LaCurr = file.LaHead;
	for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
		if (LaCurr->Ltype == type) {
			cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | " << LaCurr->Lcondition << " | "
				<< LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
		}
	}

	system("pause");
	system("cls");


}

void Action::UserSearchEqmCondition(FileHandler & file){
	
	Tent* TeCurr = file.TeHead;
	for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
		if (TeCurr->Tcondition == "good") {
			cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
				<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
		}
	}

	Stove* SeCurr = file.StHead;
	for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
		if (SeCurr->Scondition == "good") {
			cout << SeCurr->SitemCode << " | " << SeCurr->SitemName << " | " << SeCurr->Sbrand << " | " << SeCurr->Stype << " | " << SeCurr->Sdate << " | " << SeCurr->Scondition << " | "
				<< SeCurr->Sstatus << " | " << SeCurr->Sstype << " | " << SeCurr->Sftype << endl;
		}
	}

	Lantern* LaCurr = file.LaHead;
	for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
		if (LaCurr->Lcondition == "good") {
			cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | " << LaCurr->Lcondition << " | "
				<< LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
		}
	}

	system("pause");
	system("cls");
}

void Action::UserSearchEqmID(FileHandler & file){

	string id;
	bool check = false;
	cout << "Input the equipment ID: ";
	cin >> id;
	if (id.substr(0, 1) == "T") {
		Tent* TeCurr = file.TeHead;
		for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
			if (TeCurr->TitemCode == id) {
				cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
					<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "No such equipment" << endl;
		}
		system("pause");
		system("cls");
	}
	else if (id.substr(0, 1) == "S") {
		Stove* StCurr = file.StHead;
		for (; StCurr != NULL; StCurr = StCurr->StNext) {
			if (StCurr->SitemCode == id) {
				cout << StCurr->SitemCode << " | " << StCurr->SitemName << " | " << StCurr->Sbrand << " | " << StCurr->Stype << " | " << StCurr->Sdate << " | " << StCurr->Scondition << " | "
					<< StCurr->Sstatus << " | " << StCurr->Sstype << " | " << StCurr->Sftype << endl;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "No such equipment" << endl;
		}
		system("pause");
		system("cls");
	}
	else if (id.substr(0, 1) == "L") {
		Lantern* LaCurr = file.LaHead;
		for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
			if (LaCurr->LitemCode == id) {
				cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | "
					<< LaCurr->Lcondition << " | " << LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "No such equipment" << endl;
		}
		system("pause");
		system("cls");

	}
	else {
		cout << "No such equipment" << endl;
		system("pause");
		system("cls");
	}
}



