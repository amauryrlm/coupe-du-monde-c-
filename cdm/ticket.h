#ifndef TICKET_H
#define COURS_H
#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>


class Ticket 
{
public:
    Ticket():id(cpt++){}
    virtual ~Ticket(){}
    double getPrice() const {return price;}
    unsigned int getId() const {return id;}



protected:

    double price;

private:

    unsigned int id;
    static unsigned int cpt;
    struct tm date;


};
unsigned int Ticket::cpt = 0;

#endif // TICKET_H