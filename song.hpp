#ifndef song_hpp
#define song_hpp

#pragma once
#include "rock_group.hpp"
class song :
    public rock_group
{
public:
    song(const rock_group& group, string aname, double atime, int ayear);
    void setSongName(string aname);
    string getSongName() const;
    void setTime(double atime);
    double getTime() const;
    void setYear(int ayear);
    int getYear() const;
    friend ostream& operator<<(ostream&, const song&);
protected:
    string name;
    int year;
    double time;
};


#endif /* song_hpp */
