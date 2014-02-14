#include "def_class.cpp"

int main()
{
    Duree temps(4,73,55);

    temps.affichage();

    temps.ajout(5);

    temps.affichage();

    double ts=temps.convert();
    cout<<"\nLe temps total en secondes est de "<<ts<<"s."<<endl;

    return 0;
}
