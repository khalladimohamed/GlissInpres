#ifndef DATASOURCE1D
#define DATASOURCE1D

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <cmath>
#include <iostream>

using namespace std;

class DataSource1D
{
    
private:
    int* cotation;
    int effectifTotal;

public:
    DataSource1D();

    DataSource1D(int* cotation, int effectifTotal);

    void incrementer(int i, int valeur);

    const int* getCotation() const;

    int getEffectifTotal() const;

};

#endif
