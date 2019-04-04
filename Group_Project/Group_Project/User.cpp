#include "User.h"

SCT::SCT(){
	/*TuserID = "";
	Tname = "";
	Tsection = "";
	Tpassword = "";
	Taddress = "";
	Trank = "";*/
}

SCT::SCT(string _TuserID, string _Tname, string _Tsection, string _Tpassword, string _Taddress, string _Trank){
	this->TuserID = _TuserID;
	this->Tname = _Tname;
	this->Tsection = _Tsection;
	this->Tpassword = _Tpassword;
	this->Taddress = _Taddress;
	this->Trank = _Trank;
	this->TNext = NULL;
}




SCT::~SCT(){

};



VEN::VEN(){

	/*VuserID = "";
	Vname = "";
	Vsection = "";
	Vpassword = "";
	Vaddress = "";*/

}

VEN::VEN(string _VuserID, string _Vname, string _Vsection, string _Vpassword, string _Vaddress){
	this->VuserID = _VuserID;
	this->Vname = _Vname;
	this->Vsection = _Vsection;
	this->Vpassword = _Vpassword;
	this->Vaddress = _Vaddress;
	this->VNext = NULL;

}

VEN::~VEN(){

};




ROV::ROV(){

	/*RuserID = "";
	Rname = "";
	Rsection = "";
	Rpassword = "";
	Raddress = "";*/

}

ROV::ROV(string _RuserID, string _Rname, string _Rsection, string _Rpassword, string Raddress){
	this->RuserID = _RuserID;
	this->Rname = _Rname;
	this->Rsection = _Rsection;
	this->Rpassword = _Rpassword;
	this->Raddress = Raddress;
	this->RNext = NULL;

}

ROV::~ROV(){


};



SCM::SCM(){

	/*MuserID = "";
	Mname = "";
	Msection = "";
	Mpassword = "";
	Maddress = "";
	Mrank = "";*/

}

SCM::SCM(string _MuserID, string _Mname, string _Msection, string _Mpassword, string _Maddress, string _Mrank){

	this->MuserID = _MuserID;
	this->Mname = _Mname;
	this->Msection = _Msection;
	this->Mpassword = _Mpassword;
	this->Maddress = _Maddress;
	this->Mrank = _Mrank;
	this->MNext = NULL;
}

SCM::~SCM(){


};
