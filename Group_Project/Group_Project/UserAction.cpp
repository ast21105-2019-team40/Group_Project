#include "UserAction.h"

Action::Action() {
	account = "";
	password = "";
	name = "";
}

Action::~Action() {


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

bool Action::UserLogin(string _account, string _password, FileHandler & file) {
	bool check = false;
	account = _account;
	password = _password;

	if (account.substr(0, 3) == "VEN") {
		VEN* VENCurr = file.VHead;
		for (; VENCurr != NULL; VENCurr = VENCurr->VNext) {
			if (VENCurr->VuserID == account && VENCurr->Vpassword == password) {
				name = VENCurr->Vname;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
		}

	}
	else if (account.substr(0, 3) == "ROV") {
		ROV* ROVCurr = file.RHead;
		for (; ROVCurr != NULL; ROVCurr = ROVCurr->RNext) {
			if (ROVCurr->RuserID == account && ROVCurr->Rpassword == password) {
				name = ROVCurr->Rname;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
		}
	}
	else if (account.substr(0, 3) == "SCT") {
		SCT* SCTCurr = file.THead;
		for (; SCTCurr != NULL; SCTCurr = SCTCurr->TNext) {
			if (SCTCurr->TuserID == account && SCTCurr->Tpassword == password) {
				name = SCTCurr->Tname;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
		}

	}
	else if (account.substr(0, 3) == "SCM") {
		SCM* SCMCurr = file.MHead;
		for (; SCMCurr != NULL; SCMCurr = SCMCurr->MNext) {
			if (SCMCurr->MuserID == account && SCMCurr->Mpassword == password) {
				name = SCMCurr->Mname;
				check = true;
				break;
			}
		}
		if (check == false) {
			cout << "account or password not correct, please enter again." << endl;
			system("pause");
			system("cls");
		}
	}
	system("cls");
	return check;
}

void Action::UserActionDecision(FileHandler & file) {

	int choice;
	cout << "Wellcome " << name << endl;
	cout << "There are the functions: 1.Search Equipment  2.Borrow Equipment  3.Search Loan Record  4.Return Equipment  5.Change Password  6.Deep Searching  0.End" << endl;
	cout << "Choose the function you want to use: ";
	cin >> choice;
	switch (choice) {
	default:
		cout << "Input wrongly, please try again!!" << endl;
		system("pause");
		system("cls");
		UserActionDecision(file);
	case 0:
		system("cls");
		cout << "Thanks for using our program!!" << endl;
		system("pause");
		exit(0);
	case 1: {
		UserSearchDecision(file);
	}
	case 2: {
		UserBorrow(file);
	}
	case 3: {
		UserSearchLoanRecord(file);
		UserActionDecision(file);
	}
	case 4: {
		UserReturn(file);
	}
	case 5: {
		UserChangePassword(account, file);
	}
	case 6: {
		DeepSearching(file);
	}
	}
}

void Action::UserSearchDecision(FileHandler & file) {
	int choice;
	cout << "1.Search All Equipment  2. Search All Avaliable Equipment  3.Search Equipment ID  4.Search Equipment Type  " << endl;
	cout << "5.Search All Good Condition Equipment  6.Search All Avaliable Equipment with Good Condition" << endl;
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
	case 6: {
		UserSearchEqmStatus_Condition(file);
		UserActionDecision(file);
	}

	}

}

void Action::UserSearchEqmAll(FileHandler & file) {
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

void Action::UserSearchEqmStatus(FileHandler & file) {

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

void Action::UserSearchEqmType(FileHandler & file) {
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

void Action::UserSearchEqmCondition(FileHandler & file) {

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

void Action::UserSearchEqmID(FileHandler & file) {

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

void Action::UserSearchEqmStatus_Condition(FileHandler & file) {

	Tent* TeCurr = file.TeHead;
	for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
		if (TeCurr->Tstatus == "in" && TeCurr->Tcondition == "good") {
			cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
				<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
		}
	}

	Stove* SeCurr = file.StHead;
	for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
		if (SeCurr->Sstatus == "in" && SeCurr->Scondition == "good") {
			cout << SeCurr->SitemCode << " | " << SeCurr->SitemName << " | " << SeCurr->Sbrand << " | " << SeCurr->Stype << " | " << SeCurr->Sdate << " | " << SeCurr->Scondition << " | "
				<< SeCurr->Sstatus << " | " << SeCurr->Sstype << " | " << SeCurr->Sftype << endl;
		}
	}

	Lantern* LaCurr = file.LaHead;
	for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
		if (LaCurr->Lstatus == "in" && LaCurr->Lcondition == "good") {
			cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | " << LaCurr->Lcondition << " | "
				<< LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
		}
	}

	system("pause");
	system("cls");

}

void Action::DeepSearching(FileHandler & file){
	string type;
	cout << "input the equipment type: ";
	cin >> type;
	if (type == "tent") {
		eqm.SearchTentDeep(type, file);
		UserActionDecision(file);
	}
	else if (type == "stove") {
		eqm.SearchStoveDeep(type, file);
		UserActionDecision(file);
	}
	else if (type == "lantern") {
		eqm.SearchLanternDeep(type, file);
		UserActionDecision(file);
	}
	else {
		cout << "No such type of equipment." << endl;
		system("pause");
		system("cls");
		UserActionDecision(file);
	}

}

void Action::UserSearchLoanRecord(FileHandler & file) {

	bool check = false;

	Loan* LoCurr = file.LHead;
	for (; LoCurr != NULL; LoCurr = LoCurr->LNext) {
		if (account == LoCurr->userid) {
			check = true;
			cout <<LoCurr->userid << " | " << LoCurr->username << " | " << LoCurr->itemCode << " | " << LoCurr->itemName << " | " << LoCurr->itemType << " | " << LoCurr->Bdate << " | "
				<< LoCurr->Rdate << " | " << LoCurr->status << endl;
		}
	}
	if (check == false) {
		cout << "No Record find." << endl;
	}
	system("pause");
	system("cls");
}

void Action::UserBorrow(FileHandler & file) {

	time_t now;
	struct tm nowLocal;
	now = time(NULL);
	nowLocal = *localtime(&now);




	int date = nowLocal.tm_mday;
	int month = nowLocal.tm_mon + 1;
	int year = nowLocal.tm_year + 1900;
	bool check = false;

	string userid;
	string username;
	string itemCode;
	string itemName;
	string itemType;
	string Bdate;
	string Rdate;
	string status;

	int credit = loan.ReturnCredit(account, file);
	int borrowed = loan.ReturnBorrow(account, file);

	credit = credit - borrowed;

	if (credit > 0) {
		cout << "Your credits: " << credit << endl;
		cout << "Enter the equipment ID that you want to borrow: ";
		cin >> itemCode;
		if (itemCode.substr(0, 1) == "T") {
			Tent* TeCurr = file.TeHead;
			for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
				if (TeCurr->TitemCode == itemCode) {
					check = true;
					if (TeCurr->Tcondition == "good" && TeCurr->Tstatus == "in") {
						userid = account;
						username = name;
						itemCode = TeCurr->TitemCode;
						itemName = TeCurr->TitemName;
						itemType = TeCurr->Ttype;
						Bdate = to_string(date) + "/" + to_string(month) + "/" + to_string(year);
						Rdate = loan.ReturnDate(date, month, year);
						status = "NO";
						TeCurr->Tstatus = "out";
						break;
					}
					else {
						cout << "That Equipment is not avaliable." << endl;
						system("pause");
						system("cls");
						UserActionDecision(file);
					}
				}
			}
		}
		else if (itemCode.substr(0, 1) == "S") {
			Stove* StCurr = file.StHead;
			for (; StCurr != NULL; StCurr = StCurr->StNext) {
				if (StCurr->SitemCode == itemCode) {
					check = true;
					if (StCurr->Scondition == "good" && StCurr->Sstatus == "in") {
						userid = account;
						username = name;
						itemCode = StCurr->SitemCode;
						itemName = StCurr->SitemName;
						itemType = StCurr->Stype;
						Bdate = to_string(date) + "/" + to_string(month) + "/" + to_string(year);
						Rdate = loan.ReturnDate(date, month, year);
						status = "NO";
						StCurr->Sstatus = "out";
						break;
					}
					else {
						cout << "That Equipment is not avaliable." << endl;
						system("pause");
						system("cls");
						UserActionDecision(file);
					}
				}
			}

		}
		else if (itemCode.substr(0, 1) == "L") {
			Lantern* LaCurr = file.LaHead;
			for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
				if (LaCurr->LitemCode == itemCode) {
					check = true;
					if (LaCurr->Lcondition == "good" && LaCurr->Lstatus == "in") {
						userid = account;
						username = name;
						itemCode = LaCurr->LitemCode;
						itemName = LaCurr->LitemName;
						itemType = LaCurr->Ltype;
						Bdate = to_string(date) + "/" + to_string(month) + "/" + to_string(year);
						Rdate = loan.ReturnDate(date, month, year);
						status = "NO";
						LaCurr->Lstatus = "out";
						break;
					}
					else {
						cout << "That Equipment is not avaliable." << endl;
						system("pause");
						system("cls");
						UserActionDecision(file);
					}
				}
			}
		}
		if (check == false) {
			cout << "No such equipment" << endl;
			system("pause");
			system("cls");
			UserActionDecision(file);
		}
		else if (itemName != "") {
			Loan* LoCurr = file.LHead;
			if (LoCurr == NULL) {
				Loan* LoanList = new Loan(userid, username, itemCode, itemName, itemType, Bdate, Rdate, status);
				LoCurr = LoanList;
				file.LHead = LoCurr;
			}
			else {
				for (LoCurr = file.LHead; LoCurr->LNext != NULL; LoCurr = LoCurr->LNext) {}
				Loan* LoanList = new Loan(userid, username, itemCode, itemName, itemType, Bdate, Rdate, status);
				LoCurr->LNext = LoanList;
			}
			cout << "You have borrowed Equipment: " << itemCode << endl;
		}
		loan.WriteLoanfile(file);
		loan.WriteEqmfile(file);
	}
	else {
		cout << "You cannot borrow equipment since your credit has full" << endl;
	}
	system("pause");
	system("cls");
	UserActionDecision(file);

}

void Action::UserReturn(FileHandler & file) {

	int credit = loan.ReturnCredit(account, file);
	int borrowed = loan.ReturnBorrow(account, file);

	string code;
	string returnCode;
	bool check = false;

	credit = credit - borrowed;

	if (borrowed == 0) {
		cout << "You haven't borrow any equipments, no need for return." << endl;
		system("pause");
		system("cls");
		UserActionDecision(file);
	}
	else {
		cout << "Input the EquipmentID that you want to return: ";
		cin >> code;

		Loan* LoCurr = file.LHead;
		for (; LoCurr != NULL; LoCurr = LoCurr->LNext) {
			if (account == LoCurr->userid && LoCurr->itemCode == code && LoCurr->status == "NO") {
				LoCurr->status = "YES";
				returnCode = LoCurr->itemCode;
				if (returnCode.substr(0, 1) == "T") {
					Tent* TeCurr = file.TeHead;
					for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
						if (returnCode == TeCurr->TitemCode && TeCurr->Tstatus == "out") {
							TeCurr->Tstatus = "in";
							break;
						}
					}
				}
				else if (returnCode.substr(0, 1) == "S") {
					Stove* StCurr = file.StHead;
					for (; StCurr != NULL; StCurr = StCurr->StNext) {
						if (returnCode == StCurr->SitemCode && StCurr->Sstatus == "out") {
							StCurr->Sstatus = "in";
							break;
						}
					}

				}
				else if (returnCode.substr(0, 1) == "L") {
					Lantern* LaCurr = file.LaHead;
					for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
						if (returnCode == LaCurr->LitemCode && LaCurr->Lstatus == "out") {
							LaCurr->Lstatus = "in";
							break;
						}
					}

				}
				check = true;
				break;
			}
		}
		loan.WriteLoanfile(file);
		loan.WriteEqmfile(file);

		if (check == true) {
			cout << "Equipment " << code << " has been returned" << endl;
		}
		else {
			cout << "No such record" << endl;
		}
		system("pause");
		system("cls");
		UserActionDecision(file);
	}
}

void Action::UserChangePassword(string account, FileHandler & file){

	string password;
	cout << "Enter your new password: ";
	cin >> password;
	if (account.substr(0, 3) == "VEN") {
		VEN* VENCurr = file.VHead;
		for (; VENCurr != NULL; VENCurr = VENCurr->VNext) {
			if (VENCurr->VuserID == account) {
				VENCurr->Vpassword = password;
				break;
			}
		}
	}
	else if (account.substr(0, 3) == "ROV") {
		ROV* ROVCurr = file.RHead;
		for (; ROVCurr != NULL; ROVCurr = ROVCurr->RNext) {
			if (ROVCurr->RuserID == account) {
				ROVCurr->Rpassword = password;
				break;
			}
		}
	}
	else if (account.substr(0, 3) == "SCT") {
		SCT* SCTCurr = file.THead;
		for (; SCTCurr != NULL; SCTCurr = SCTCurr->TNext) {
			if (SCTCurr->TuserID == account) {
				SCTCurr->Tpassword = password;
				break;
			}
		}
	}
	else if (account.substr(0, 3) == "SCM") {
		SCM* SCMCurr = file.MHead;
		for (; SCMCurr != NULL; SCMCurr = SCMCurr->MNext) {
			if (SCMCurr->MuserID == account) {
				SCMCurr->Mpassword = password;
				break;
			}
		}
	}
	loan.WriteUserfile(file);
	cout << "password has been updated." << endl;
	system("pause");
	system("cls");
	UserActionDecision(file);

}



