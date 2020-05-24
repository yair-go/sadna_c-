#include "Document.h"


Document::Document(const char* docName)
{
	setName(docName);
}

void Document::setName(const char* docName)
{
	if (docName)
	{
		int len = strlen(docName) + 1;
		name = new char[len];
		strcpy(name, docName);
	}
}
void Document::print()
{
	cout << "Name: " << name << endl;
}

