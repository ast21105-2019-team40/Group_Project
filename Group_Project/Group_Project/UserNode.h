#ifndef User_H
#define User_H
#include <iostream>
#include <string>
using namespace std;

class SCT{
public:
	string TuserID;
	string Tname;
	string Tsection;
	string Tpassword;
	string Taddress;
	string Trank;
	SCT* TNext;

public:
	SCT(string _TuserID, string _Tname, string _Tsection, string _Tpassword, string _Taddress, string _Trank) {
		this->TuserID = _TuserID;
		this->Tname = _Tname;
		this->Tsection = _Tsection;
		this->Tpassword = _Tpassword;
		this->Taddress = _Taddress;
		this->Trank = _Trank;
		this->TNext = NULL;
	}

};

class VEN{
public:
	string VuserID;
	string Vname;
	string Vsection;
	string Vpassword;
	string Vaddress;
	VEN* VNext;
public:
	VEN(string _VuserID, string _Vname, string _Vsection, string _Vpassword, string _Vaddress) {
		this->VuserID = _VuserID;
		this->Vname = _Vname;
		this->Vsection = _Vsection;
		this->Vpassword = _Vpassword;
		this->Vaddress = _Vaddress;
		this->VNext = NULL;
	}


};

class ROV{
public:
	string RuserID;
	string Rname;
	string Rsection;
	string Rpassword;
	string Raddress;
	ROV* RNext;


public:
	ROV(string _RuserID, string _Rname, string _Rsection, string _Rpassword, string Raddress) {
		this->RuserID = _RuserID;
		this->Rname = _Rname;
		this->Rsection = _Rsection;
		this->Rpassword = _Rpassword;
		this->Raddress = Raddress;
		this->RNext = NULL;
	}

};

class SCM{
public:
	string MuserID;
	string Mname;
	string Msection;
	string Mpassword;
	string Maddress;
	string Mrank;
	SCM* MNext;
public:
	SCM(string _MuserID, string _Mname, string _Msection, string _Mpassword, string _Maddress, string _Mrank) {
		this->MuserID = _MuserID;
		this->Mname = _Mname;
		this->Msection = _Msection;
		this->Mpassword = _Mpassword;
		this->Maddress = _Maddress;
		this->Mrank = _Mrank;
		this->MNext = NULL;
	}

};




#endif // !User_H

