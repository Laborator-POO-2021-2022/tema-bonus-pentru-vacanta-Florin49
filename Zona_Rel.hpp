#ifndef ZONA_REL
#define ZONA_REL

#include "Zona.hpp"

class Zona_Rel: public Zona
{
   protected:
         int patru_indatoriri;
         int trei_indatoriri;
         int doua_indatoriri;
         int o_indatorire;
         int eretici;
   public:
        Zona_Rel();
        ~Zona_Rel();
        istream& operator>>(istream&);
        float getVoturi();
        void set_id();
        void set_varsta_min(int);
        void afisare();
        // friend ostream& operator<<(ostream&,const Zona_Rel&);
};

#endif