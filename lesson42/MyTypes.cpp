#include "MyTypes.h"



MyTypes::MyTypes()
{
}


MyTypes::~MyTypes()
{
}

const  char*  const MyTypes::exception_strings[] = {
	"Valid",
	"Wrong time format.",
	"Invalid time - more than 60 seconds.",
	"Invalid time - more than 60 minutes.",
	"Invalid time - more than 24 hours.",
	"Invalid time - negative number of seconds.",
	"Invalid time - negative number of minutes.",
	"Invalid time - negative number of hours.",
	"My Exception String",
	"ERROR: code must be of 4 digits!",
	"ERROR : no such account number!",
	"ERROR : account number must be unique!",
	"ERROR : unknown Expception",
	"ERROR :cannot withdraw more than 2500 NIS!"

};