#include DataSource1D.h

DataSource1D::DataSource1D() {
    cotation = vector<int>(10, 0);
    effectifTotal = 0;
}

void DataSource1D::incrementer(int i, int value = 1) {
    cotation[i] += value;
    effectifTotal += value;
}

const vector<int>& DataSource1D::getCotation() const {
    return cotation;
}

int DataSource1D::getEffectifTotal() const {
    return effectifTotal;
}