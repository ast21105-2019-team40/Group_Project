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
	SCT(string _TuserID, string _Tname, string _Tsection, string _Tpassword, string _Taddress, string _Trank);

	~SCT();


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
	VEN(string _VuserID, string _Vname, string _Vsection, string _Vpassword, string _Vaddress);
	~VEN();


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
	ROV(string _RuserID, string _Rname, string _Rsection, string _Rpassword, string Raddress);
	~ROV();


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
	SCM(string _MuserID, string _Mname, string _Msection, string _Mpassword, string _Maddress, string _Mrank);
	~SCM();
};




#endif // !User_H

