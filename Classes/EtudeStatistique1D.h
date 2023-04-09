#ifndef ETUDESTATISTIQUE1D
#define ETUDESTATISTIQUE1D

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <cmath>
#include <iostream>
#include <algorithm>

#include <DataSource1D.h>

using namespace std;

class EtudeStatistique1D
{

private:
    double m_moyenne;
    int m_mediane;
    int m_mode[3];

public:
    EtudeStatistique1D(const DataSource1D& data);

    double getMoyenne() const;

    int getMediane() const;

    int getMode() const;

    void Affiche() const;

};

#endif
