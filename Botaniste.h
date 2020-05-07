
#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include "plante.h"

class Botaniste {
    private:
        std::string _nom;
        
    public :
     void DonnerEngrais(plante);
     void TaillerPlantes(plante);
     void ArroserPlantes(plante);
     void affiche();
    
    Botaniste (std::string name);
};