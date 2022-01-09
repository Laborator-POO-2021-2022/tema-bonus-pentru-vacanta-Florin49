#include "Zona_Ani.hpp"

Zona_Ani::Zona_Ani():Zona(),v_min(0),copii(0),adolescenti(0),adulti(0),batrani(0)
{

}
Zona_Ani::~Zona_Ani()
{

}
istream& Zona_Ani::operator>>(istream& in)
{
    if(id_zona==0)
    {
       in>>populatie;
       in>>copii;
       in>>adolescenti;
       in>>adulti;
       in>>batrani;
       ///populatie--;
    }
    if(id_zona==3)
     in>>populatie;
   return in;
}
float Zona_Ani::getVoturi()
{
    float s;
    
    if(v_min==0)
       return populatie;
    if(v_min>=14)
       s=populatie-copii;
    if(v_min>=20)
       s-=adolescenti;
    if(v_min==40)
       s-=adulti;
    return s;
}
void Zona_Ani::set_id()
{
    id_zona=3;
}
void Zona_Ani::set_varsta_min(int v)
{
   v_min=v;
}
void Zona_Ani::afisare()
{
   cout<<id_zona<<" "<<populatie<<" "<<v_min<<" "<<copii<<" "<<adolescenti<<" "<<adulti<<" "<<batrani;
}