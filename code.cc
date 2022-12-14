#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;
typedef enum
{
    Qatar,
    Germany,
    Denmark,
    Brazil,
    France,
    Belgium,
    Serbia,
    Spain,
    Croatia,
    Switzerland,
    Netherlands,
    Argentina,
    Iran,
    South Korea,
    Saudi Arabia,
    Japan,
    Uruguay,
    Ecuador,
    Canada,
    Ghana,
    Senegal,
    Poland,
    Tunisia,
    Morocco,
    Cameroon,
    United States,
    Mexico,
    Wales,
    Australia,
    Costa Rica
} CountryQalified;

int n = 32;

map<int, CountryQalified> fifaRanking;

for (int i = 0; i < n; i++)
{
    fifaRanking.insert(pair<int, CountryQalified>(i, CountryQalified(i)));
}

class Stadium
{
public:
    Stadium();

private:
    string name;
    int capacity;
    bool *disposition;
    int length = 284;
    int width = 185;
};

class Client
{
public:
    Client();
    Client(string name, string surname, int age, string email, string nationality, int money);
    ~Client();
    void setName(string name);
    void setSurname(string surname);
    void setAge(int age);
    void setEmail(string email);
    void setNationality(string setNationality);
    string getName();
    string getSurname();
    int getAge();
    string getEmail();
    string getPassword();
    void printClient()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;
        cout << "Email: " << email << endl;
        cout << "Nationality" << nationality << endl;
        cout << "Money: " << money << endl;
    }

private:
    string name;
    string surname;
    int age;
    string email;
    string nationality;
    int money;
};

typedef enum
{
    Qatar,
    Germany,
    Denmark,
    Brazil,
    France,
    Belgium,
    Serbia,
    Spain,
    Croatia,
    Switzerland,
    Netherlands,
    Argentina,
    Iran,
    South Korea,
    Saudi Arabia,
    Japan,
    Uruguay,
    Ecuador,
    Canada,
    Ghana,
    Senegal,
    Poland,
    Tunisia,
    Morocco,
    Cameroon,
    United States,
    Mexico,
    Wales,
    Australia,
    Costa Rica
} CountryQalified;

class Ticket
{
public:
    int *getQRcode();
    int getPrice();
    void displayQRcode();

private:
    bool finals;
    int price;
    int row;
    int column;
    int nbmatch;
    int *QRcode;
};

class Pool : protected Match
{
public:
    Pool(Team team1, Team team2, Team team3, Team team4)
    {
        this->team1 = team1;
        this->team2 = team2;
        this->team3 = team3;
        this->team4 = team4;
    }

    poolWinner()
    {
        Match match1(team1, team2);
        match1.playMatchPool();
        Match match2(team3, team4);
        match2.playMatchPool();
        Match match3(team1, team4);
        match3.playMatchPool();
        Match match4(team1, team3);
        match4.playMatchPool();
        Match match5(team2, team4);
        match5.playMatchPool();
        Match match6(team2, team3);
        match6.playMatchPool();
    }

private:
    Team team1;
    Team team2;
    Team team3;
    Team team4;
    Team winner;
}

class Competition : protected Match
{

private:
    string name;
    int date;
    CountryQalified *pools;
    Match *calendar;
};

class Match : protected Team
{

public:
    Match(Team team1, Team team2)
    {
        this->team1 = team1;
        this->team2 = team2;
    }
    Team setTeam1(Team team1)
    {
        this->team1 = team1;
    }
    Team setTeam2(Team team2)
    {
        this->team2 = team2;
    }
    Team getWinner()
    {
        srand(time(0));
        int performance1 = rand() / team1.getRanking();
        int performance2 = rand() / team2.getRanking();
        if (performance1 > performance2)
        {
            return team1;
        }
        else
        {
            return team2;
        }
    }
    void playMatchPool()
    {
        if (getWinner() == team1)
        {
            team1.setvictory();
        }
        else
        {
            team2.setvictory();
        }
    }
    Team setWinner(Team winner)
    {
        this->winner = getWinner();
    }

private:
    Team team1;
    Team team2;
    Team winner;
    Stadium stadium;
};

class Team
{
public:
    int getRanking();
    void setvictory()
    {
        this->points += 3;
    }
    void setdraw()
    {
        this->points += 1;
    }
    int getPoints()
    {
        return this->points;
    }

private:
    int ranking;
    string country;
    int pool;
    int points = 0;
};

class TicketPlatform
{
public:
    buyTicket();

private:
private:
    Match *matches;
};
