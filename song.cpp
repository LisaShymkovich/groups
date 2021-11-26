#include "song.hpp"
 
song::song(const rock_group& group, string aname, double atime, int ayear) : rock_group(group.getGroupName())
{
    setSongName(aname);
    setTime(atime);
    setYear(ayear);
}
 
void song::setSongName(string aname)
{
    name = aname;
}

string song::getSongName() const
{
    return name;
}
 
double song::getTime() const
{
    return time;
}


void song::setTime(double atime)
{
   time = atime;
}

 
void song::setYear(int ayear)
{
    year = ayear;
}


int song::getYear() const
{
   return year;
}
 

ostream& operator<<(ostream& s, const song& asong)
{
    s <<"Название группы: " << asong.getGroupName() <<", Название песни: " << asong.name <<", Продолжительность песни: " << asong.time << ", Год издания песни: " << asong.year;
    return s;
}
