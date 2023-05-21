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
    //Moyenne
    double m_moyenne;
    int m_mediane;
    int m_mode[3];

    //Dispersion
    double m_ecartType;
    int m_etendue;
    double m_coefficientVariation;

public:
    EtudeStatistique1D();

    EtudeStatistique1D(DataSource1D* data);

    double getMoyenne() const;

    int getMediane() const;

    int getMode() const;

    double getEcartType() const;
    
    int getEtendue() const;
    
    double getCoefficientVariation() const;

    void Affiche() const;

    private:
    void calculeMoyenne(DataSource1D* data);

    void calculeMediane(DataSource1D* data);

    void calculeMode(DataSource1D* data);

    void calculeEcartType(DataSource1D* data);

    void calculeEtendue(DataSource1D* data);
    
    void calculeCoefficientVariation(DataSource1D* data);

};

#endif
