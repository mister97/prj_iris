#ifndef CLASSE_DUREE_H_INCLUDED
#define CLASSE_DUREE_H_INCLUDED

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

#endif // CLASSE_DUREE_H_INCLUDED
