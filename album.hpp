#pragma once
#include "rock_group.hpp"
 
class album :
    public rock_group
{
public:
    album(const rock_group& group, string aname, int ayear);
    void setYear(int ayear);
    int getYear() const;
    void setAlbumName(string aname);
    string getAlbumName() const;
    friend ostream& operator<<(ostream&, const album&);
protected:
    string name;
    int year;
};


