#include <Echantillon.h>


Echantillon::Echantillon(const string& fichier, int colonne) {

    int* m_donnees = new int[10] {0};
    int m_taille = 10;

    ifstream fichierEntree(fichier);
    
    if (!fichierEntree) 
    {
        cerr << "Erreur : Impossible d'ouvrir le fichier " << fichier << endl;
        exit(EXIT_FAILURE);
    }

    string ligne;
    int numLigne = 0;

    while (getline(fichierEntree, ligne)) 
    {
        stringstream ss(ligne);
        string valeur;
        int colonneActuelle = 0;

        numLigne++;

        while (getline(ss, valeur, ';')) 
        {
            if (colonneActuelle == colonne && numLigne != 1) 
            {
                int donnee = stoi(valeur);
                m_donnees[donnee - 1]++;
            }
            
            colonneActuelle++;
        }
    }

    
    //Test - Affichage
    cout << "Debut : test de la decoupe (classe echantillon)" << endl;
    
    for (int i = 0; i < m_taille; i++) {
        cout << "Cote " << i+1 << " : " << m_donnees[i] << endl;
    }

    cout << "Effectif " << " : " << numLigne - 1 << endl;

    cout << "Fin : test de la decoupe (classe echantillon)" << endl;
    cout << endl;
    cout << endl;
    //Test - Affichage


    dataSource = DataSource1D(m_donnees, numLigne);

    EtudeStatistique = EtudeStatistique1D(&dataSource);

    EtudeStatistique.Affiche();

}
