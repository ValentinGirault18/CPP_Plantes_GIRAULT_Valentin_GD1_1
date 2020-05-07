
#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "plante.h"
#include <string>
#include <iostream>


    void Botaniste::DonnerEngrais(Animal){
        (*cible).engrais();
    }
    
    void Botaniste::TaillerPlantes(Animal){
        (*cible).tailler();
    }
  
    void Botaniste::ArroserPlantes(Animal){
        (*cible).arroser();
    }
    
    void Botaniste::affiche(){
        std::cout << "Bonjour " << _nom << std::endl;
    }
    
    Botaniste::Botaniste(std::string name) : _nom(name) {}
    