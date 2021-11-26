#ifndef rock_group_hpp
#define rock_group_hpp

#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
 
class rock_group
{
public:
 void setGroupName(string aname);
 string getGroupName() const;
 rock_group(string aname);
 friend ostream& operator<<(ostream&, const rock_group&);

protected:
 string name;
};



#endif /* rock_group_hpp */
