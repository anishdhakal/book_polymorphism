#include <iostream>
#include "TextBook.h"
#include <sstream>

using namespace std;

TextBook::TextBook(string name, Author author, double price, int quantity, string subject, string publisher, string edition)
{
    this->name = name;
    this->author = author;
    setPrice(price);
    setQuantity(quantity);
    setSubject(subject);
    setEdition(edition);
    this->publisher = publisher;
}

void TextBook::setSubject(string subject)
{
    this->subject = subject;
}

void TextBook::setEdition(string edition)
{
    this->edition = edition;
}

string TextBook::getSubject()
{
    return subject;
}

string TextBook::getPublisher()
{
    return publisher;
}

string TextBook::getEdition()
{
    return edition;
}

void TextBook::toString()
{
    cout << "Name: "<<  getName();
	cout << "Author: " << author.getName();
	cout << "Price: " << price;
	cout << "Quantity: " << quantity;
	cout << "Subject: " << getSubject();
	cout << "Publisher: " << getPublisher();
	cout  <<"Edition: " << getEdition();
}
