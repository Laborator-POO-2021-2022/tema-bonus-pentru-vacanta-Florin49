#include "Zona_Ani.hpp"
#include "Zona_Mil.hpp"
#include "Zona_Rel.hpp"
#include "string"
#include "sstream"

int main()
{
    fstream F("input.txt",ios::in);
    fstream G;
    G.open("output.txt",ios::out);
    Doua_Mii_Douazeci_Si_Doi **Referinta;
    Referinta= new Doua_Mii_Douazeci_Si_Doi*[3];
    int i,id;
    
    for(i=0;i<3;i++)
    {
        F>>id;
        if(id==1)
        {
            Referinta[id-1]=new Zona_Rel;
            Referinta[id-1]->operator>>(F);
            
        }
        if(id==2)
        {
            Referinta[id-1]=new Zona_Mil;
            Referinta[id-1]->operator>>(F);
          
        }
        if(id==3)
        {
            Referinta[id-1]=new Zona_Ani;
            Referinta[id-1]->operator>>(F);
            
        }
    }
    Referinta[0]->set_id();
    Referinta[0]->afisare();
    cout<<endl;
    Referinta[1]->set_id();
    Referinta[1]->afisare();
    cout<<endl;
    Referinta[2]->set_id();
    Referinta[2]->afisare();
    cout<<endl;
    int nr_q,varsta_min;
    char ok[3];
    Zona_Rel R1,R2;
    R1.set_id();
    R2.set_id();
    Zona_Mil M1,M2;
    M1.set_id();
    M2.set_id();
    Zona_Ani A1,A2;
    A1.set_id();
    A2.set_id();
    string intrebare;
    // F>>id; 
    // cout<<id;
    // F>>nr_q;
    // cout<<" "<<nr_q;
    // getline(F,intrebare);
    // cout<<endl<<intrebare;
    // getline(F,intrebare);
    // cout<<endl<<intrebare;
    while(F>>nr_q)
    {
        F>>id;
        for(i=1;i<=nr_q;i++)
        {  
        
        if(id==3)
        {
            F>>varsta_min;
            Referinta[2]->set_varsta_min(varsta_min);
        }
        getline(F,intrebare);
        getline(F,intrebare);
        
        if(id==1)
        {
         G<<"Zona 1\n"<<intrebare<<endl;
         ///getline(F,intrebare);
         F>>ok;
         R1.operator>>(F);
        
         F>>ok;
         R2.operator>>(F);
         if(R1.getVoturi()>R2.getVoturi())
                 G<<"Acceptat "<<R1.getVoturi()<<"-"<<R2.getVoturi();
         else if(R1.getVoturi()<R2.getVoturi())
                G<<"Respins "<<R1.getVoturi()<<"-"<<R2.getVoturi();
         else
               G<<"Egalitate "<<R1.getVoturi()<<"-"<<R2.getVoturi();
         G<<"\nPrezenta vot: "<<(R1.getVoturi()+R2.getVoturi())/Referinta[0]->getVoturi()*100<<"%"<<endl;
         }
         if(id==2)
        {
         G<<"Zona 2\n"<<intrebare<<endl;
         F>>ok;
         M1.operator>>(F);
         F>>ok;
         M2.operator>>(F);
         if(M1.getVoturi()>M2.getVoturi())
                 G<<"Acceptat "<<M1.getVoturi()<<"-"<<M2.getVoturi();
         else if(R1.getVoturi()<R2.getVoturi())
                G<<"Respins "<<M1.getVoturi()<<"-"<<M2.getVoturi();
         else
               G<<"Egalitate "<<M1.getVoturi()<<"-"<<M2.getVoturi();
         G<<"\nPrezenta vot: "<<(M1.getVoturi()+M2.getVoturi())/Referinta[1]->getVoturi()*100<<"%"<<endl;
         }
         if(id==3)
        {
         G<<"Zona 3\n"<<intrebare<<endl;
         F>>ok;
         A1.operator>>(F);
         A1.set_varsta_min(varsta_min);
         F>>ok;
         A2.operator>>(F);
         A2.set_varsta_min(varsta_min);
         if(A1.getVoturi()>A2.getVoturi())
                 G<<"Acceptat "<<A1.getVoturi()<<"-"<<A2.getVoturi();
         else if(A1.getVoturi()<A2.getVoturi())
                G<<"Respins "<<A1.getVoturi()<<"-"<<A2.getVoturi();
         else
               G<<"Egalitate "<<A1.getVoturi()<<"-"<<A2.getVoturi();
         G<<"\nPrezenta vot: "<<(A1.getVoturi()+A2.getVoturi())/Referinta[2]->getVoturi()*100<<"%"<<endl;
         }
        }
        
        
    }
    
    return 0;
}