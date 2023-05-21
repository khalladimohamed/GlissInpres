#include <DataSource1D.h>


DataSource1D::DataSource1D() {
    cotation = new int[10] {0};
    effectifTotal = 0;
}


DataSource1D::DataSource1D(int* cotation, int effectifTotal) {
    this->cotation = cotation;
    this->effectifTotal = effectifTotal;
}


void DataSource1D::incrementer(int i, int valeur) {
    cotation[i] += valeur;
    effectifTotal += valeur;
}


const int* DataSource1D::getCotation() const {
    return cotation;
}


int DataSource1D::getEffectifTotal() const {
    return effectifTotal;
}