#include "Newspaper.h"



Newspaper::Newspaper(const char *name) : Document(name)
{
}


Newspaper::~Newspaper()
{
}

void Newspaper::print()
{
	Document::print();
	// current date/time based on current system
	time_t now = time(0);

	// convert now to string form
	char* dt = ctime(&now);
	cout << "The local date and time is: " << dt << endl;
}
