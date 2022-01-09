#include "Zona_Mil.hpp"

Zona_Mil::Zona_Mil():Zona(),functie_max(0),functie_noua(0),functie_opt(0),functie_sapte(0),functie_sase(0),functie_cinci(0),functie_patru(0),functie_trei(0),functie_doi(0),functie_jos(0)
{

}
Zona_Mil::~Zona_Mil()
{

}
istream& Zona_Mil::operator>>(istream& in)
{
    if(id_zona==0)
    {
        in>>populatie>>functie_max>>functie_noua>>functie_opt>>functie_sapte>>functie_sase>>functie_cinci>>functie_patru>>functie_trei>>functie_doi>>functie_jos;
        //id_zona=2;
    }
    if(id_zona==2)
    {
        in>>functie_max>>functie_noua>>functie_opt>>functie_sapte>>functie_sase;
        populatie=functie_max+functie_noua+functie_opt+functie_sapte+functie_sase+1;
    }
    return in;
}
float Zona_Mil::getVoturi()
{
    float s=functie_max*10+functie_noua*9+functie_opt*8+functie_sapte*7+functie_sase*6;
    return s;
}
void Zona_Mil::afisare()
{
    cout<<id_zona<<" "<<populatie<<" "<<functie_max<<" "<<functie_noua<<" "<<functie_opt<<" "<<functie_sapte<<" "<<functie_sase<<" "<<functie_cinci<<" "<<functie_patru<<" "<<functie_trei<<" "<<functie_doi<<" "<<functie_jos;
}
void Zona_Mil::set_id()
{
    id_zona=2;
}
void Zona_Mil::set_varsta_min(int v)
{
    
}