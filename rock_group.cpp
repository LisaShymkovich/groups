#include "rock_group.hpp"
 
 
rock_group::rock_group(string aname)
{
    setGroupName(aname);
}

void rock_group::setGroupName(string aname)
{
    name = aname;
}
string rock_group::getGroupName() const
{
    return name;
}
 
ostream& operator<<(ostream& s, const rock_group& g)
{
    s << "Название группы:  " << g.getGroupName();
    return s;
}




