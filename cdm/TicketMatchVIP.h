#ifndef TICKETMATCHVIP_H
#define TICKETMATCHVIP_H
#include "TicketMatch.h"

class TicketMatchVIP : public TicketMatch
{
    public:
        TicketMatchVIP(int m, std::string s,std::string f, bool a):TicketMatch(),sizeForJersey(s),foodAlergies(f),alcohol(a){price*=2;}
    private:
        bool alcohol;
        std::string sizeForJersey;
        std::string foodAlergies;
    

};


#endif // TICKETMATCHVIP_H