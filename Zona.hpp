#ifndef ZONA
#define ZONA

#include "Doua_Mii_Douazeci_Si_Doi.hpp"
class Zona:  public Doua_Mii_Douazeci_Si_Doi
{
    protected:
        int id_zona;
        int populatie;
    public:
         Zona();
         
         ~Zona();
         istream& operator>>(istream&);
         float getVoturi();
         void set_id();
         void set_varsta_min(int);
         void afisare();
        //  friend ostream& operator<<(ostream&, const Zona&);
};

#endif