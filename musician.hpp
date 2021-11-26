#pragma once
#include "rock_group.hpp"
class musician :
    public rock_group
{
public:
    musician(const rock_group& group, string aname, string ainstrument);
    void setName(string aname);
    string getName() const;
    void setInstrument(string ainstrument);
    string getInstrument() const;
    friend ostream& operator<<(ostream&, const musician&);
protected:
    string name;
    string insrument;
};


