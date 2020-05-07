
#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "plante.h"
#include <string>
#include <iostream>

   plante::plante(std::string name){}
   
        void plante::engrais(int grandir){
               _vie-=10;
            if(_fatigue<0) _vie=0;
            _soif+=10;  
        }
        void plante::tailler(int sante){
               _taille-=sante;
            if(_taille<0) _taille=0;
        }
        void plante::arroser(int eau){
               _soif-=10;
            if (_soif<0)_soif=0;
        }