

#pragma once


class TicketPlane : public Ticket
{
public:
    TicketPlane(std::string departure) : departure(departure) {setprice();}
    std::string getDestination() const {return destination;}
    std::string getAirline() const {return airline;}
    void setprice(){price=1000;}
    friend std::ostream& operator<<(std::ostream& os, const TicketPlane& ticket);


protected:
    std::string destination ="Doha";
    std::string airline = "Emirates";
    std::string departure;    
};

std::ostream& operator<<(std::ostream& os, const TicketPlane& ticket)
{
    os << "Destination: " << ticket.destination << std::endl;
    os << "Airline: " << ticket.airline << std::endl;
    os << "Departure: " << ticket.departure << std::endl;
    os << "Price: " << ticket.price << std::endl;
    return os;
}


class EconomyClass : public TicketPlane
{
public:
    EconomyClass(std::string dep) :TicketPlane(dep) {setprice();}
    void setMealOption(std::string meal) { mealOption = meal; }
    void setprice(){price*=0.5;}
private:
    
    std::string mealOption= "Chicken";
};

class BusinessClass : public TicketPlane
{
public:
    BusinessClass(std::string dep) :TicketPlane(dep) {setprice();}
    bool hasLoungeAccess() const { return loungeAccess; }
    bool hasPriorityBoarding() const { return priorityBoarding; }
    void setprice(){price*=1.5;}
private:
    bool loungeAccess=true;
    bool priorityBoarding=true;
};



