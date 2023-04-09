#include <Echantillon.h>


Echantillon::Echantillon(const string& fichier, int colonne) {
    m_donnees = nullptr;
    m_taille = 0;

    ifstream fichierEntree(fichier);
    
    if (!fichierEntree) {
        cerr << "Erreur : Impossible d'ouvrir le fichier " << fichier << endl;
        exit(EXIT_FAILURE);
    }

    int donnee;

    while (fichierEntree >> donnee) {
        
        int i = 0;
        int* newDonnees = new int[m_taille + 1];
        
        for (i = 0; i < m_taille; i++) {
            newDonnees[i] = m_donnees[i];
        }
        
        newDonnees[i] = donnee;

        if (m_donnees != nullptr) {
            delete[] m_donnees;
        }

        m_donnees = newDonnees;
        m_taille++;
    }

//isoler juste les valeur de la colonne choisie (utiliser colonne)

//creer un tableau avec 10 case et  Chaque case correspond
//à une cotation différente et son contenu au nombre de personnes ayant attribué
//cette cote.


    dataSource = DataSource1D(m_donnees, m_taille);
}


Echantillon::~Echantillon() {
    delete[] m_donnees;
}


EtudeStatistique1D& Echantillon::effectuerEtudeStatistique() {
    return *(new EtudeStatistique1D(dataSource));
}
