#pragma once
#include "Document.h"
class Book :
	public Document
{
private:
	long  pageCount;

public:

	Book(const char *name = nullptr, long pageNum = 0);
	void setNumOfPages(long num);
	void print();
};


