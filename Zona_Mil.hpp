#ifndef ZONA_MIL
#define ZONA_MIL

#include "Zona.hpp"
class Zona_Mil: public Zona
{
   protected:
        int functie_max,functie_noua,functie_opt,functie_sapte,functie_sase,functie_cinci,functie_patru,functie_trei,functie_doi,functie_jos;
   public:
        Zona_Mil();
       
        ~Zona_Mil();
        istream& operator>>(istream&);
        float getVoturi();
        void set_id();
        void set_varsta_min(int);
        void afisare();
};


#endif