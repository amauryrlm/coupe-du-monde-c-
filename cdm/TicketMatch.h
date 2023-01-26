
#ifndef TICKETMATCH_H
#define TICKETMATCH_H
#include "ticket.h"

#include <string>
#include <fstream>
#include <ctime>
#include <sstream>



class TicketMatch : public Ticket
{
public:

    void setPrice();
    TicketMatch(int matchNumber); //constructeur
    // void stringToTM(std::string& date);
    void getMatchNumber() const {std::cout << matchNumber << std::endl;}
    void getRound() const {std::cout << Round << std::endl;}
    void getLocation() const {std::cout << Location << std::endl;}
    void getHomeTeam() const {std::cout << HomeTeam << std::endl;}
    void getAwayTeam() const {std::cout << AwayTeam << std::endl;}
    void getGroup() const {std::cout << Group << std::endl;}
    void stringToTM(std::string& date);
    
    ~TicketMatch(){} //destructeur
    //<< surcharge
    friend std::ostream& operator<<(std::ostream& os, const TicketMatch& t) {
        os << "Match number: " << t.matchNumber << std::endl;
        os << "Round: " << t.Round << std::endl;
        os << "Date: " << t.Date.tm_mday << "/" << t.Date.tm_mon << "/" << t.Date.tm_year << std::endl;
        os << "Location: " << t.Location << std::endl;
        os << "Home Team: " << t.HomeTeam << std::endl;
        os << "Away Team: " << t.AwayTeam << std::endl;
        os << "Group: " << t.Group << std::endl;
        os << "Price: " << t.price << std::endl;
        return os;
    }


private:
    int matchNumber;
    std::string Round;
    tm Date;
    std::string Location;
    std::string HomeTeam;
    std::string AwayTeam;
    std::string Group;


};

// transform string to tm
void TicketMatch::stringToTM(std::string& date) {
    std::tm t = {};
    std::istringstream ss(date);
    ss >> std::get_time(&t, "%d/%m/%Y");
    if (ss.fail()) {
        std::cout << "Error parsing date" << std::endl;
    }
    Date.tm_mday = t.tm_mday;
    Date.tm_mon = t.tm_mon + 1; 
    Date.tm_year = t.tm_year + 1900; 
}
//set price depending on round
void TicketMatch::setPrice(){
    int tempPrice = 50;
    if (Round == "Round of 16") {
        tempPrice = 100;
    }
    else if (Round == "Quarter-finals") {
        tempPrice = 150;
    }
    else if (Round == "Semi-finals") {
        tempPrice = 200;
    }
    else if (Round == "Final") {
        tempPrice = 250;
    }

    price = tempPrice;
}

//constructeur a partir du numero de match et du csv contenant les infos

TicketMatch::TicketMatch(int m) {
    std::string fileName = "fifa-world-cup-2022-UTC.csv"; 
    std::ifstream file(fileName);
    std::string line;
    while (std::getline(file, line)) {
        std::vector<std::string> values;
        std::stringstream s(line);
        std::string value;
        //trouve la ligne correspondant au match
        while (std::getline(s, value, ',')) {
            values.push_back(value);
        }
        if (std::stoi(values[0]) == m) {
            matchNumber = m;
            Round = values[1];
            stringToTM(values[2]);
            Location = values[3];
            HomeTeam = values[4];
            AwayTeam = values[5];
            if (values[6] == ""){
                Group = "Final";
            }else{
                Group = values[6];
            }
            std::cout << Group << std::endl;
            break;
        }
    }
    setPrice();

}




#endif // TICKETMATCH_H