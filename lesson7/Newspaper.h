#pragma once
#include "Document.h"
#include <http.h>
#include <ctime>

class Newspaper :
	public Document
{
	
public:
	Newspaper(const char *name = nullptr);
	~Newspaper();
	void print();
};

