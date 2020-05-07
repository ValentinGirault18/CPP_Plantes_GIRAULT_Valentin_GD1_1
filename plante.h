
#ifndef PLANTE_H
#define PLANTE_H

#include <string>

#ifndef PLANTE_H
#define PLANTE_H

class Plante : public Plantes {
    
        public:
        
            Plante(std::string name);
            
            void engrais(int grandir);
            void tailler(int sante);
            void arroser(int eau);
            void affiche();
           
        protected :
            
            int maturite();
            int name();
            std::string _nom;
            int _vie;
            int _soif;
            int _fatigue;
            int _taille;
        
            
};

#endif