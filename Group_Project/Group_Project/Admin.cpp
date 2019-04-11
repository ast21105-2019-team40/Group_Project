#include "Admin.h"

Admin::Admin(){
	account = "admin";
	password = "admin";
}


string Admin::Agetter(){
	return account;
}


string Admin::Pgetter(){
	return password;
}

bool Admin::AdminLogin(string _account, string _password, FileHandler & file) {
	bool check = false;

	if (account == _account && password == _password) {
		check = true;
	}
	system("cls");
	return check;
}

void Admin::AdminDecision(FileHandler & file){
	int choice;
	cout << "Wellcome Admin" << endl;
	cout << "There are the function: 1.Display  2.Searching  3.Produce a txt file  4.Insert File  5.Delete file  6.Update Equipment file  0.Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	default:
		cout << "Wrong Input, please try again" << endl;
		system("pause");
		system("cls");
		AdminDecision(file);
	case 0:
		system("cls");
		cout << "Thanks for using our program!!" << endl;
		system("pause");
		exit(0);
	case 1: {
		AdminDisplay(file);
	}
	case 2: {
		Searching(file);
	}
	case 3: {
		ProduceFileDecision(file);
		AdminDecision(file);
	}
	case 4: {
		Insert(file);
	}
	case 5: {
		Deletefile();
		AdminDecision(file);
	}
	case 6: {
		UpdateEquipmentByID(file);
		AdminDecision(file);
	}
	}


}

void Admin::AdminDisplay(FileHandler & file) {

	int choice;
	cout << "1.Display all  2.Display Userfile  3.Display Equipmentfile  4.Display Loanfile" << endl;
	cout << "Input your choice: ";
	cin >> choice;
	switch (choice)
	{
	default:
		cout << "wrong input, please try again" << endl;
		AdminDecision(file);
	case 1: {
		file.displayAll();
		AdminDecision(file);
	}
	case 2: {
		file.displayUserfile();
		AdminDecision(file);
	}
	case 3: {
		file.displayEqmfile();
		AdminDecision(file);
	}
	case 4: {
		file.displayLoanfile();
		AdminDecision(file);
	}
	}
}

void Admin::Searching(FileHandler & file){

	int choice;
	cout << "1.Search All Equipment  2. Search All Avaliable Equipment  3.Search Equipment ID  4.Search Equipment Type  " << endl;
	cout << "5.Search All Good Condition Equipment  6.Search All Avaliable Equipment with Good Condition  7.Deep Search" << endl;
	cout << "Choose the function you want to use: ";
	cin >> choice;
	Action action;
	switch (choice)
	{
	default:
		cout << "Wrong input, please try again!!";
		system("pause");
		system("cls");
		AdminDecision(file);
	case 1: {
		UserSearchEqmAll(file);
		AdminDecision(file);
	}
	case 2: {
		UserSearchEqmStatus(file);
		AdminDecision(file);
	}
	case 3: {
		UserSearchEqmID(file);
		AdminDecision(file);
	}
	case 4: {
		UserSearchEqmType(file);
		AdminDecision(file);
	}
	case 5: {
		UserSearchEqmCondition(file);
		AdminDecision(file);
	}
	case 6: {
		UserSearchEqmStatus_Condition(file);
		AdminDecision(file);
	}
	case 7: {
		DeepSearching(file);
		AdminDecision(file);
	}
	}

}

void Admin::UpdateEquipmentByID(FileHandler & file){

	bool check = false;
	string id;
	cout << "Enter the equipment ID: ";
	cin >> id;
	if (id.substr(0, 1) == "T") {
		Tent* TeCurr = file.TeHead;
		for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
			if (id == TeCurr->TitemCode) {
				string condition;
				cin.ignore();
				cout << "Input the new condition: ";
				getline(cin, condition);
				TeCurr->Tcondition = condition;
				check = true;
				break;
			}
		}
		if (check == true) {
			cout << "Equipment " << TeCurr->TitemCode << " condition has been updated." << endl;
			system("pause");
			system("cls");
		}
	}
	else if (id.substr(0, 1) == "S") {
		Stove* SeCurr = file.StHead;
		for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
			if (id == SeCurr->SitemCode) {
				string condition;
				cin.ignore();
				cout << "Input the new condition: ";
				getline(cin, condition);
				SeCurr->Scondition = condition;
				check = true;
				break;
			}
		}
		if (check == true) {
			cout << "Equipment " << SeCurr->SitemCode << " condition has been updated." << endl;
			system("pause");
			system("cls");
		}
	}
	else if (id.substr(0, 1) == "L") {
		Lantern* LaCurr = file.LaHead;
		for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
			if (id == LaCurr->LitemCode) {
				string condition;
				cin.ignore();
				cout << "Input the new condition: ";
				getline(cin, condition);
				LaCurr->Lcondition = condition;
				check = true;
				break;
			}
		}
		if (check == true) {
			cout << "Equipment " << LaCurr->LitemCode << " condition has been updated." << endl;
			system("pause");
			system("cls");
		}
	}
	else if (check == false) {
		cout << "No such item" << endl;
		system("pause");
		system("cls");
		AdminDecision(file);
	}
	else {
		cout << "No such item" << endl;
		system("pause");
		system("cls");
		AdminDecision(file);
	}
	loan.WriteEqmfile(file);
}

void Admin::ProduceFileDecision(FileHandler & file){

	int choice;
	cout << "1.Produce all file  2.Produce User file  3.Produce Equipment file  4.Produce Loan file" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	default:
		cout << "Wrong input, please try again" << endl;
		system("pause");
		system("cls");
		AdminDecision(file);
	case 1: {
		ProduceTextfile(file);
		AdminDecision(file);
	}
	case 2: {
		ProduceUserfile(file);
		AdminDecision(file);
	}
	case 3: {
		ProduceEqmfile(file);
		AdminDecision(file);
	}
	case 4: {
		ProduceLoanfile(file);
		AdminDecision(file);
	}
	}


}

void Admin::ProduceTextfile(FileHandler & file){


	Tent* TeCurr = file.TeHead;
	Stove* StCurr = file.StHead;
	Lantern* LaCurr = file.LaHead;

	VEN* VENcurr = file.VHead;
	ROV* ROVcurr = file.RHead;
	SCT* SCTcurr = file.THead;
	SCM* SCMcurr = file.MHead;

	Loan* LoCurr = file.LHead;

	string filename;
	cout << "Enter the file name you want to produce: ";
	cin >> filename;
	ofstream NewFile;
	NewFile.open(filename);
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

		for (; LoCurr != NULL; LoCurr = LoCurr->LNext) {
			NewFile << LoCurr->userid + "|" + LoCurr->username + "|" + LoCurr->itemCode + "|" + LoCurr->itemName + "|" + LoCurr->itemType + "|" + LoCurr->Bdate + "|" + LoCurr->Rdate + "|" + LoCurr->status + "\n";
		}
		cout << filename << " has been produced." << endl;
	}
	NewFile.close();
	system("pause");
	system("cls");

}

void Admin::ProduceUserfile(FileHandler & file){

	VEN* VENcurr = file.VHead;
	ROV* ROVcurr = file.RHead;
	SCT* SCTcurr = file.THead;
	SCM* SCMcurr = file.MHead;

	string filename;
	cout << "Enter the file name you want to produce: ";
	cin >> filename;
	ofstream NewFile;
	NewFile.open(filename);
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
		cout << filename << " has been produced." << endl;
	}
	NewFile.close();
	system("pause");
	system("cls");

}

void Admin::ProduceEqmfile(FileHandler & file){

	Tent* TeCurr = file.TeHead;
	Stove* StCurr = file.StHead;
	Lantern* LaCurr = file.LaHead;

	string filename;
	cout << "Enter the file name you want to produce: ";
	cin >> filename;
	ofstream NewFile;
	NewFile.open(filename);
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
		cout << filename << " has been produced." << endl;
	}
	NewFile.close();
	system("pause");
	system("cls");
}

void Admin::ProduceLoanfile(FileHandler & file){

	Loan* LoCurr = file.LHead;

	string filename;
	cout << "Enter the file name you want to produce: ";
	cin >> filename;
	ofstream NewFile;
	NewFile.open(filename);
	if (!(NewFile.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {

		for (; LoCurr != NULL; LoCurr = LoCurr->LNext) {
			NewFile << LoCurr->userid + "|" + LoCurr->username + "|" + LoCurr->itemCode + "|" + LoCurr->itemName + "|" + LoCurr->itemType + "|" + LoCurr->Bdate + "|" + LoCurr->Rdate + "|" + LoCurr->status + "\n";
		}
		cout << filename << " has been produced." << endl;
	}
	NewFile.close();
	system("pause");
	system("cls");
}



void Admin::Insert(FileHandler & file){
	int choice;
	cout << "1.Insert Userfile  2.Insert Equipment file  3.Insert Loan file" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	default:
		cout << "Wrong input, please try again." << endl;
		system("pause");
		system("cls");
		AdminDecision(file);
	case 1: {
		FileList list;
		string filename = list.UserFileStore();
		if (filename == "") {
			AdminDecision(file);
		}
		else {
			file.Userfileinput(filename);
			loan.WriteUserfile(file);
			cout << "Data has been inserted" << endl;
			system("pause");
			system("cls");
			AdminDecision(file);
		}
	}
	case 2: {
		FileList list;
		string filename = list.EqmFileStore();
		if (filename == "") {
			AdminDecision(file);
		}
		else {
			file.Eqmfileinput(filename);
			loan.WriteEqmfile(file);
			cout << "Data has been inserted" << endl;
			system("pause");
			system("cls");
			AdminDecision(file);
		}
	}
	case 3: {
		FileList list;
		string filename = list.LoanFileStore();
		if (filename == "") {
			AdminDecision(file);
		}
		else {
			file.Loanfileinput(filename);
			loan.WriteLoanfile(file);
			cout << "Data has been inserted" << endl;
			system("pause");
			system("cls");
			AdminDecision(file);
		}
	}
	}
}

void Admin::Deletefile(){
	string filename;
	ifstream dataSet;
	cout << "Input the file name that you want to delete: ";
	cin >> filename;
	dataSet.open(filename);
	if (!(dataSet.is_open())) {
		cerr << "Error. The file doesn't open correctly." << endl;
	}
	else {
		dataSet.close();
		remove(filename.c_str());
		cout << "file has been deleted." << endl;
		system("pause");
		system("cls");
	}
}









Admin::~Admin(){
	cout << "destructor has been called!" << endl;
}
