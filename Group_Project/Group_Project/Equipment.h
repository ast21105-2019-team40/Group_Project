#ifndef Equipment_H
#define Equipment_H
#include <iostream>
#include <string>
using namespace std;

class Tent{

public:
	string TitemCode;
	string TitemName;
	string Tbrand;
	string Ttype;
	string Tdate;
	string Tcondition;
	string Tstatus;
	string Tppl;
	string tType;
	string Tdoor;
	string TDlayer;
	string Tcolour;
	Tent* TeHead = NULL;
	Tent* TeNext;

public:
	Tent(string _TitemCode, string _TitemName, string _Tbrand, string _Ttype, string _Tdate, string _Tcondition, string _Tstatus, string _Tppl, string _tType, string _Tdoor, string _TDlayer, string _Tcolour) {
		this->TitemCode = _TitemCode;
		this->TitemName = _TitemName;
		this->Tbrand = _Tbrand;
		this->Ttype = _Ttype;
		this->Tdate = _Tdate;
		this->Tcondition = _Tcondition;
		this->Tstatus = _Tstatus;
		this->Tppl = _Tppl;
		this->tType = _tType;
		this->Tdoor = _Tdoor;
		this->TDlayer = _TDlayer;
		this->Tcolour = _Tcolour;
		this->TeNext = NULL;
	}

};

class Stove{

public: 
	string SitemCode;
	string SitemName;
	string Sbrand;
	string Stype;
	string Sdate;
	string Scondition;
	string Sstatus;
	string Sstype;
	string Sftype;
	Stove* StHead = NULL;
	Stove* StNext;

public:
	Stove(string _SitemCode, string _SitemName, string _Sbrand, string _Stype, string _Sdate, string _Scondition, string _Sstatus, string _Sstype, string _Sftype) {
		this->SitemCode = _SitemCode;
		this->SitemName = _SitemName;
		this->Sbrand = _Sbrand;
		this->Stype = _Stype;
		this->Sdate = _Sdate;
		this->Scondition = _Scondition;
		this->Sstatus = _Sstatus;
		this->Sstype = _Sstype;
		this->Sftype = _Sftype;
		this->StNext = NULL;
	}

};

class Lantern{

public:
	string LitemCode;
	string LitemName;
	string Lbrand;
	string Ltype;
	string Ldate;
	string Lcondition;
	string Lstatus;
	string LactType;
	string Lltype;
	string Lftype;
	Lantern* LaHead = NULL;
	Lantern* LaNext;

public:
	Lantern(string _LitemCode, string _LitemName, string _Lbrand, string _Ltype, string _Ldate, string _Lcondition, string _Lstatus, string _LacType, string _Lltype, string _Lftype) {
		this->LitemCode = _LitemCode;
		this->LitemName = _LitemName;
		this->Lbrand = _Lbrand;
		this->Ltype = _Ltype;
		this->Ldate = _Ldate;
		this->Lcondition = _Lcondition;
		this->Lstatus = _Lstatus;
		this->LactType = _LacType;
		this->Lltype = _Lltype;
		this->Lftype = _Lftype;
		this->LaNext = NULL;
	}

};


#endif // !Equipment_H

