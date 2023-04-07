#ifndef DATASOURCE1D
#define DATASOURCE1D

#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;


class DataSource1D
{
    
private:
    vector<int> cotation;
    int effectifTotal;

public:
    DataSource1D();

    void incrementer(int i, int value = 1);

    const vector<int>& getCotation() const;

    int getEffectifTotal() const;

}

#endif