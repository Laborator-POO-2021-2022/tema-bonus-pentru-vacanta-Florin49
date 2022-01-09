#include "Zona_Rel.hpp"

Zona_Rel::Zona_Rel():Zona(),patru_indatoriri(0),trei_indatoriri(0),doua_indatoriri(0),o_indatorire(0),eretici(0)
{

}

Zona_Rel::~Zona_Rel()
{
   
}
istream& Zona_Rel::operator>>(istream& in)
{
    if(id_zona==0)
    {
        in>>populatie;
        in>>patru_indatoriri;
        in>>trei_indatoriri;
        in>>doua_indatoriri;
        in>>o_indatorire;
        in>>eretici;
        ///id_zona=1;
    }
    if(id_zona==1)
       {
           in>>patru_indatoriri;
           in>>trei_indatoriri;
           in>>doua_indatoriri;
           in>>o_indatorire>>eretici;
           populatie=patru_indatoriri+trei_indatoriri+doua_indatoriri+o_indatorire+eretici;
       }
    return in;
}
void Zona_Rel::afisare()
{
    cout<<id_zona<<" "<<populatie<<" "<<patru_indatoriri<<" "<<trei_indatoriri<<" "<<doua_indatoriri<<" "<<o_indatorire<<" "<<eretici;
}

float Zona_Rel::getVoturi()
{
    float s=patru_indatoriri+0.8*trei_indatoriri+0.6*doua_indatoriri+0.4*o_indatorire+0.2*eretici;
    return s;
    
}
void Zona_Rel::set_id()
{
    id_zona=1;
}
void Zona_Rel::set_varsta_min(int v)
{
     
}