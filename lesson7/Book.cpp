#include "Book.h"



Book::Book(const char *name, long pageNum)
	:Document(name), pageCount(pageNum)
{
	//setName(name);
	//pageCount = pageNum;
}

void Book::setNumOfPages(long pageNum)
{
	pageCount = pageNum;
}

void Book::print()
{
	Document::print();
	cout << "Number Of Pages:  ";
	cout << pageCount << endl;

}