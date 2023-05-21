#ifndef ECHANTILLON
#define ECHANTILLON

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <cmath>
#include <iostream>
#include <sstream>

#include <DataSource1D.h>
#include <EtudeStatistique1D.h>

using namespace std;

class Echantillon
{
    
private:
    DataSource1D dataSource;
    EtudeStatistique1D EtudeStatistique;

public:
    Echantillon(const string& fichier, int colonne);

};

#endif