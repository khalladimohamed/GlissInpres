#include <EtudeStatistique1D.h>

EtudeStatistique1D::EtudeStatistique1D()
{
    m_moyenne = 0.0;
    m_mediane = 0;
    m_mode[0] = 0;
    m_mode[1] = 0;
    m_mode[2] = 0;
    m_mode[3] = 0;
    m_ecartType = 0.0;
    m_etendue = 0;
    m_coefficientVariation = 0.0;
}


EtudeStatistique1D::EtudeStatistique1D(DataSource1D* data)
{
    calculeMoyenne(data);
    calculeMediane(data);
    calculeMode(data);
    calculeEcartType(data);
    calculeEtendue(data);
    calculeCoefficientVariation(data);
}


void EtudeStatistique1D::calculeMoyenne(DataSource1D* data)
{
    double somme = 0.0;
    for (int i = 1; i <= 10; ++i) {
        somme += i * data->getCotation()[i-1];
        cout << "test : " << somme << endl;
    }
    m_moyenne = somme / data->getEffectifTotal();
}


void EtudeStatistique1D::calculeMediane(DataSource1D* data)
{
    int effectifCumul = 0;
    int indexMediane = data->getEffectifTotal() / 2;
    for (int i = 1; i <= 10; ++i) {
        effectifCumul += data->getCotation()[i-1];
        if (effectifCumul >= indexMediane) {
            m_mediane = i;
            break;
        }
    }
}


void EtudeStatistique1D::calculeMode(DataSource1D* data)
{
    int maxEffectif = 0;
    for (int i = 1; i <= 10; ++i) {
        if (data->getCotation()[i-1] > maxEffectif) {
            maxEffectif = data->getCotation()[i-1];
            m_mode[0] = i;
            m_mode[1] = 0;
            m_mode[2] = 0;
        }
        else if (data->getCotation()[i-1] == maxEffectif) {
            if (m_mode[1] == 0) {
                m_mode[1] = i;
            }
            else {
                m_mode[2] = i;
            }
        }
    }
}


void EtudeStatistique1D::calculeEcartType(DataSource1D* data)
{
    double variance = 0.0;
    for (int i = 1; i <= 10; ++i) {
        double diff = i - m_moyenne;
        variance += diff * diff * data->getCotation()[i-1];
    }
    variance /= data->getEffectifTotal();
    m_ecartType = sqrt(variance);
}


void EtudeStatistique1D::calculeEtendue(DataSource1D* data)
{
    int minCote = 1;
    while (data->getCotation()[minCote - 1] == 0) {
        minCote++;
    }
    int maxCote = 10;
    while (data->getCotation()[maxCote - 1] == 0) {
        maxCote--;
    }
    m_etendue = maxCote - minCote + 1;
}


void EtudeStatistique1D::calculeCoefficientVariation(DataSource1D* data)
{
    m_coefficientVariation = (m_ecartType / m_moyenne) * 100.0;
}


double EtudeStatistique1D::getMoyenne() const
{
    return m_moyenne;
}


int EtudeStatistique1D::getMediane() const
{
    return m_mediane;
}


int EtudeStatistique1D::getMode() const
{
    return m_mode[0];
}


double EtudeStatistique1D::getEcartType() const
{
    return m_ecartType;
}


int EtudeStatistique1D::getEtendue() const
{
    return m_etendue;
}


double EtudeStatistique1D::getCoefficientVariation() const
{
    return m_coefficientVariation;
}


void EtudeStatistique1D::Affiche() const
{
    cout << "Moyenne : " << m_moyenne << endl;
    
    cout << "Mediane : " << m_mediane << endl;
    
    cout << "Mode : ";
    if (m_mode[1] == 0 && m_mode[2] == 0)
    {
        cout << m_mode[0] << endl;
    }
    else
    {
        if(m_mode[1] != 0 && m_mode[2] == 0)
        {
            cout << m_mode[0] << "   " << m_mode[1] << endl;
        }
        else
        {
            cout << m_mode[0] << "   " << m_mode[1] << "   " << m_mode[2] << endl;
        }
    }
    
    cout << "Ecart-type : " << m_ecartType << endl;
    
    cout << "Etendue : " << m_etendue << endl;
    
    cout << "Coefficient de variation : " << m_coefficientVariation << "%" << endl;
}
