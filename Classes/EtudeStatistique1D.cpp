#include <EtudeStatistique1D.h>


EtudeStatistique1D::EtudeStatistique1D(const DataSource1D& data)
{
    // Calcul de la moyenne
    double somme = 0.0;
    for (int i = 1; i <= 10; ++i) {
        somme += i * data.getEffectif(i);
    }
    m_moyenne = somme / data.getEffectifTotal();

    // Calcul de la médiane
    int effectifCumul = 0;
    int indexMediane = data.getEffectifTotal() / 2;
    for (int i = 1; i <= 10; ++i) {
        effectifCumul += data.getEffectif(i);
        if (effectifCumul > indexMediane) {
            m_mediane = i;
            break;
        }
        else if (effectifCumul == indexMediane) {
            m_mediane = (i + i + 1) / 2;
            break;
        }
    }

    // Calcul du mode
    int maxEffectif = 0;
    for (int i = 1; i <= 10; ++i) {
        if (data.getEffectif(i) > maxEffectif) {
            maxEffectif = data.getEffectif(i);
            m_mode[0] = i;
            m_mode[1] = 0;
            m_mode[2] = 0;
        }
        else if (data.getEffectif(i) == maxEffectif) {
            if (m_mode[1] == 0) {
                m_mode[1] = i;
            }
            else {
                m_mode[2] = i;
            }
        }
    }

    // Affichage des résultats
    Affiche();
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



void EtudeStatistique1D::Affiche() const
{
    cout << "Moyenne : " << m_moyenne << endl;
    cout << "Mediane : " << m_mediane << endl;
    cout << "Mode : ";
    if (m_mode[1] == 0 && m_mode[2] == 0) {
        cout << m_mode[0] << endl;
    }
    else {
        cout << m_mode[0] << " " << endl;
    }
}
