#ifndef ZONA_ANI
#define ZONA_ANI

#include "Zona.hpp"

class Zona_Ani: public Zona
{
    protected:
       int v_min;
       int copii,adolescenti,adulti,batrani;
    public:
       Zona_Ani();
       ~Zona_Ani();
       istream& operator>>(istream&);
       float getVoturi();
       void set_id();
       void set_varsta_min(int);
       void afisare();
       
};




#endif