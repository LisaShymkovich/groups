#include "album.hpp"
 
album::album(const rock_group& group, string aname, int ayear) : rock_group(group.getGroupName())
{
    setAlbumName(aname);
    setYear(ayear);
}
 
void album::setAlbumName(string aname)
{
    name = aname;
}

string album::getAlbumName() const
{
    return name;
}
 
void album::setYear(int ayear)
{
    year = ayear;
}
 
int album::getYear() const
{
    return year;
}
 
ostream& operator<<(ostream& s, const album& aalbum)
{
    s <<"Название группы: " << aalbum.getGroupName() << ", Название альбома: " << aalbum.name << ", Год издания: " << aalbum.year;
    return s;
}

