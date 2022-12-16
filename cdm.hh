#include <stdio.h>
#include <stdlib.h>
#include <string>

typedef enum
{
    Adult,
    Child,
    Student,
    Senior
} TicketType;
typedef enum
{
    First,
    Business,
    Economy
} PlaneClass;

class Client
{
public:
    Client();
    Client(int age, string name, string surname, string email, TicketType ticketType);
    ~Client();
    void setAge(int age);
    void setName(string name);
    void setSurname(string surname);
    void setEmail(string email);
    int getAge() { return age; }
    string getName() { return name; }
    string getSurname() { return surname; }
    void printClient();

private:
    int age;
    string name;
    string surname;
    string email;
    TicketType ticketType;
    Ticket panier;
    double money;
};

class TicketPlatform
{
public:
    TicketPlatform();
    void buyTicket();

    Private:
};

class Ticket
{
public:
    Ticket();

private:
    double price;
};

class MatchTicket : protected Ticket
{
public:
    Match();

private:
    int nbgame;
};

class MatchTicketVIP : protected MatchTicket
{
public:
    MatchTicketVIP();

private:
    int loc;
    bool buffet;
};

class MatchTicketNormal : protected MatchTicket
{
public:
    MatchTicketNormal();

private:
    int row;
    int column;
};

class PlaneTicket : protected Ticket
{
public:
    PlaneTicket();

private:
    int row;
    char seat;
    PlaneClass class;
};

class HotelTicket : protected Ticket
{
public:
    HotelTicket();

private:
    int nbnights;
    int dateOfArrival;
    string HotelName;
};
