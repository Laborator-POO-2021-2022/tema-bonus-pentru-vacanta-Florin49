#include "Zona.hpp"

Zona::Zona():id_zona(0),populatie(0)
{

}

Zona::~Zona()
{

}
istream& Zona::operator>>(istream& in)
{
    in>>id_zona;
    in>>populatie;
     return in;
}
// ostream& operator<<(ostream& on,const Zona& z)
// {
//     on<<z.id_zona<<" "<<z.populatie;
//     return on;
// }
float Zona::getVoturi()
{
   return (float)populatie-1;
}
void Zona::set_id()
{
    id_zona=0;
}
void Zona::set_varsta_min(int v)
{

}
void Zona::afisare()
{

}