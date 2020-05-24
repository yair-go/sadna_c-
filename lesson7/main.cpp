#include "Document.h"
#include "Book.h"
#include "Newspaper.h"




int main()
{
	Document d("Doc");
	Book b("My Book");;
	//d.setName("Doc");
	cout<< b.getName();
	b.setNumOfPages(543);

	d.print();
	b.print();

	b.Document::print();

	Newspaper ynet("ynet");
	ynet.print(); 

	//cout << "sizeof char : " << sizeof(char) << endl;
	//cout << "sizeof Long : " << sizeof(long) << endl;
	//cout << "sizeof char* : " << sizeof(char*) << endl;
	//cout << "sizeof Document : " << sizeof(Document) << endl;
	//cout << "sizeof Book : " << sizeof(Book) << endl;

	Document* pd;
	pd = &ynet;
	pd->print();
	((Book*)pd)->setNumOfPages(100);
	Book* pb = (Book*) pd;
	//Book* pb = &ynet;

	Document* Lab[100];

	for (int i = 0; i < 100; i++)
	{
		int choice = rand()%3;
		switch (choice)
		{
		case 0:
			Lab[i] = new Document("aaa");
			break;
		case 1:
			Lab[i] = new Book("bbb");
			break;
		case 2:
			Lab[i] = new Newspaper("ccc");
			break;
		default:
			break;
		}

	}

	return 0;
}
