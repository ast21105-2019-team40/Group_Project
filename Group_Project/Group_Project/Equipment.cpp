#include "Equipment.h"

Equipment::Equipment(){
	type = "";
	brand = "";
	condition = "";
	status = "";
	ppl = "";
	Etype = "";
	door = "";
	Dlayer = "";
	colour = "";
	actType = "";
	fueltype = "";
}

void Equipment::SearchTentDeep(string _type, FileHandler & file){

	cin.ignore();
	type = _type;
	cout << "Input the brand: ";
	getline(cin, brand);
	cout << "Input the condition: ";
	getline(cin, condition);
	cout << "input the status: ";
	getline(cin, status);
	cout << "people size: ";
	getline(cin, ppl);
	cout << "tent type: ";
	getline(cin, Etype);
	cout << "numbers of door: ";
	getline(cin, door);
	cout << "Double-layer?(true/false): ";
	getline(cin, Dlayer);
	cout << "colour: ";
	getline(cin, colour);

	Tent* TeCurr = file.TeHead;
	for (; TeCurr != NULL; TeCurr = TeCurr->TeNext) {
		if (TeCurr->Tbrand == brand && TeCurr->Tcondition == condition && TeCurr->Tstatus == status && TeCurr->Tppl == ppl && TeCurr->tType == Etype && TeCurr->Tdoor == door && TeCurr->TDlayer == Dlayer && TeCurr->Tcolour == colour) {
			cout << TeCurr->TitemCode << " | " << TeCurr->TitemName << " | " << TeCurr->Tbrand << " | " << TeCurr->Ttype << " | " << TeCurr->Tdate << " | " << TeCurr->Tcondition << " | "
				<< TeCurr->Tstatus << " | " << TeCurr->Tppl << " | " << TeCurr->tType << " | " << TeCurr->Tdoor << " | " << TeCurr->TDlayer << " | " << TeCurr->Tcolour << endl;
		}
	}
	system("pause");
	system("cls");

}

void Equipment::SearchStoveDeep(string _type, FileHandler & file){

	cin.ignore();
	type = _type;
	cout << "Input the brand: ";
	getline(cin, brand);
	cout << "Input the condition: ";
	getline(cin, condition);
	cout << "input the status: ";
	getline(cin, status);
	cout << "stove type: ";
	getline(cin, Etype);
	cout << "fuel type: ";
	getline(cin, fueltype);

	Stove* SeCurr = file.StHead;
	for (; SeCurr != NULL; SeCurr = SeCurr->StNext) {
		if (SeCurr->Sbrand == brand && SeCurr->Scondition == condition && SeCurr->Sstatus == status && SeCurr->Sstype == Etype && SeCurr->Sftype == fueltype) {
			cout << SeCurr->SitemCode << " | " << SeCurr->SitemName << " | " << SeCurr->Sbrand << " | " << SeCurr->Stype << " | " << SeCurr->Sdate << " | " << SeCurr->Scondition << " | "
				<< SeCurr->Sstatus << " | " << SeCurr->Sstype << " | " << SeCurr->Sftype << endl;
		}
	}
	system("pause");
	system("cls");


}

void Equipment::SearchLanternDeep(string _type, FileHandler & file){

	cin.ignore();
	type = _type;
	cout << "Input the brand: ";
	getline(cin, brand);
	cout << "Input the condition: ";
	getline(cin, condition);
	cout << "input the status: ";
	getline(cin, status);
	cout << "act type: ";
	getline(cin, actType);
	cout << "lantern type: ";
	getline(cin, Etype);
	cout << "fuel type: ";
	getline(cin, fueltype);


	Lantern* LaCurr = file.LaHead;
	for (; LaCurr != NULL; LaCurr = LaCurr->LaNext) {
		if (LaCurr->Lbrand == brand && LaCurr->Lcondition == condition && LaCurr->Lstatus == status && LaCurr->LactType == actType && LaCurr->Lltype == Etype && LaCurr->Lftype == fueltype) {
			cout << LaCurr->LitemCode << " | " << LaCurr->LitemName << " | " << LaCurr->Lbrand << " | " << LaCurr->Ltype << " | " << LaCurr->Ldate << " | " << LaCurr->Lcondition << " | "
				<< LaCurr->Lstatus << " | " << LaCurr->LactType << " | " << LaCurr->Lltype << " | " << LaCurr->Lftype << endl;
		}
	}
	system("pause");
	system("cls");

}

Equipment::~Equipment()
{
}
