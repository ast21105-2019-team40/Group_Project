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
	string Tdoor;
	string TDlayer;
	string Tcolour;
	Tent* TeHead = NULL;
	Tent* TeNext;

public:
	Tent(string _TitemCode, string _TitemName, string _Tbrand, string _Ttype, string _Tdate, string _Tcondition, string _Tstatus, string _Tppl, string _Tdoor, string _TDlayer, string _Tcolour);
	~Tent();


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
	Stove(string _SitemCode, string _SitemName, string _Sbrand, string _Stype, string _Sdate, string _Scondition, string _Sstatus, string _Sstype, string _Sftype);
	~Stove();


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
	Lantern(string _LitemCode, string _LitemName, string _Lbrand, string _Ltype, string _Ldate, string _Lcondition, string _Lstatus, string _LacType, string _Lltype, string _Lftype);
	~Lantern();

};


#endif // !Equipment_H

