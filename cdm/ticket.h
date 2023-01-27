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
    void setPrice(double p) {price = p;}



protected:

    double price;
    tm date;


private:

    unsigned int id;
    static unsigned int cpt;
    
    int row;
    int seat;


};
unsigned int Ticket::cpt = 0;

#endif // TICKET_H