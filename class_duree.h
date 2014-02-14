#ifndef CLASS_DUREE_H_INCLUDED
#define CLASS_DUREE_H_INCLUDED

class Duree
{
private:
    double heures;
    double minutes;
    double secondes;
public:
    Duree(double,double,double);
    void affichage();
    double convert();
    void ajout(double);
};

#endif // CLASS_DUREE_H_INCLUDED
