#ifndef ECHANTILLON
#define ECHANTILLON

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <cmath>
#include <iostream>

#include <DataSource1D.h>
#include <EtudeStatistique1D.h>

using namespace std;

class Echantillon
{
    
private:
    DataSource1D dataSource;
    int* m_donnees;
    int m_taille;

public:
    Echantillon(const string& fichier, int colonne);

    ~Echantillon();

    EtudeStatistique1D& effectuerEtudeStatistique();

};

#endif