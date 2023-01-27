#ifdef TICKETPLANE_H
#define TICKETPLANE_H
#include "ticket.h"
#include <sting>

class PlaneTicket : public Ticket
{
public:
    PlaneTicket(std::string d, std::string a):destination(d),airline(a){}
    std::string getDestination() const {return destination;}
    std::string getAirline() const {return airline;}
    void setprice(){price=1000;}
    friend std::ostream& operator<<(std::ostream& os, const PlaneTicket& ticket);


protected:
    std::string destination;
    std::string airline;
    std::string departure;    
};

std::ostream& operator<<(std::ostream& os, const PlaneTicket& ticket)
{
    os << "Destination: " << ticket.destination << std::endl;
    os << "Airline: " << ticket.airline << std::endl;
    os << "Departure: " << ticket.departure << std::endl;
    os << "Price: " << ticket.price << std::endl;
    return os;
}


class EconomyClass : public PlaneTicket
{
public:
    EconomyClass(std::string seatType, std::string mealOption) : seatType(seatType), mealOption(mealOption) {}
    std::string getSeatType() const { return seatType; }
    void setprice(){price*=0.5;}
private:
    
    std::string mealOption;
};

class BusinessClass : public PlaneTicket
{
public:
    BusinessClass(bool loungeAccess, bool priorityBoarding) : loungeAccess(true), priorityBoarding(true) {}
    bool hasLoungeAccess() const { return loungeAccess; }
    bool hasPriorityBoarding() const { return priorityBoarding; }
    void setprice(){price*=1.5;}
private:
    bool loungeAccess;
    bool priorityBoarding;
};

class FirstClass : public PlaneTicket
{
public:
    FirstClass() : limousineService(true), inflightEntertainment("premium") {}
    bool hasLimousineService() const { return limousineService; }
    std::string getInflightEntertainment() const { return inflightEntertainment; }
    void setprice(){price*=2;}
private:
    bool limousineService;
    std::string inflightEntertainment;
};



#endif // TICKETPLANE_H
