#include <iostream>
#include "class_duree.h"
using namespace std;

Duree::Duree(double h, double m, double s)
{
    if(h<0) h*=-1;
    if(m<0) m*=-1;
    if(s<0) s*=-1;

    while(s>=60)
    {
        s-=60;
        m++;
    }
    while(m>=60)
    {
        m-=60;
        h++;
    }
    heures=h; minutes=m, secondes=s;
}

void Duree::affichage()
{
    cout<<heures<<"h"<<minutes<<"m"<<secondes<<"s"<<endl;
}

double Duree::convert()
{
    double total;

    return total=((heures*3600)+(minutes*60)+secondes);
}

void Duree::ajout(double ns)
{
    secondes+=ns;

    while(secondes>=60)
    {
        secondes-=60;
        minutes++;
    }
    while(minutes>=60)
    {
        minutes-=60;
        heures++;
    }
}
