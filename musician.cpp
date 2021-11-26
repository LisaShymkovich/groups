#include "musician.hpp"
 
 
musician::musician(const rock_group& group, string aname, string ainstrument) : rock_group(group.getGroupName())
{
    setName(aname);
    setInstrument(ainstrument);
}
 
void musician::setName(string aname)
{
    name = aname;
}

string musician::getName() const
{
    return name;
}

 
void musician::setInstrument(string ainstrument)
{
    insrument = ainstrument;
}
 
string musician::getInstrument() const
{
    return insrument;
}
 

ostream& operator<<(ostream& s, const musician& person)
{
    s << "Название группы: " << person.getGroupName() << ", Имя музыканта: "<< person.name << ", Инструмент: " << person.insrument;
    return s;
}


