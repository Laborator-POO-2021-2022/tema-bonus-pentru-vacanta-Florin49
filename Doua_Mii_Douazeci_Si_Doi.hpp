#ifndef DOUA_MII_DOUAZECI_SI_DOI
#define DOUA_MII_DOUAZECI_SI_DOI

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Doua_Mii_Douazeci_Si_Doi
{
   public:
     
       virtual ~Doua_Mii_Douazeci_Si_Doi()=0;
       virtual float getVoturi()=0;
       virtual istream& operator>>(istream&)=0;
       virtual void set_id()=0;
       virtual void set_varsta_min(int)=0;
       virtual void afisare()=0;
};



#endif