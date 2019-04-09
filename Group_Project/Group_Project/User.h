#ifndef User_H
#define User_H
#include "UserAction.h"
#include <iostream>
#include <string>
using namespace std;

class VENuser: public Action
{
public:
	VENuser();
	~VENuser() {

	}


};

class ROVuser: public Action
{
public:
	ROVuser();
	~ROVuser() {

	}


};

class SCTuser: public Action
{
public:
	SCTuser();
	~SCTuser() {

	}


};

class SCMuser: public Action
{
public:
	SCMuser();
	~SCMuser() {

	}


};


#endif // !User_H
