#include <iostream>
#include <fstream>

using namespace std;

#include "DataSource1D.h"
#include "Echantillon.h"
#include "EtudeStatistique1D.h"

int  Menu();
void Option1();
void Option2();
void Option3();

int main(int argc,char* argv[])
{
  int choix;
  bool fini = false;
  
  while(!fini)
  {
    
    if(argc == 2) 
    { 
      choix = atoi(argv[1]); 
      fini = true; 
    }
    else 
      choix = Menu();
    
    switch(choix)
    {
      case 1 : Option1(); break;
      case 2 : Option2(); break;
      case 3 : Option3(); break;
      default : fini = true ; break;
    }
  
  }

  return 0;
}

int Menu()
{
  cout << endl;
  cout << "---------------------------------------------------------------------------" << endl;
  cout << "--- GlissInpres -----------------------------------------------------------" << endl;
  cout << "---------------------------------------------------------------------------" << endl;
  cout << " 1. Etude statistique pour les pistes (Tapez 1)" << endl;
  cout << " 2. Etude statistique pour les remontees (Tapez 2)" << endl;
  cout << " 3. Etude statistique pour les commerces (Tapez 3)" << endl;
  cout << " 4. Quitter (Tapez 4)" << endl << endl;

  int ch;
  cout << "  Choix : ";
  cin >> ch;
  cin.ignore();
  
  return ch;
}

/*********************************************************************************************/
void Option1()
{
  cout << "-----  ------" << endl;

  Echantillon echantillon("DataSkiInpres.csv", 1);
  
  cout << endl;
}

/*********************************************************************************************/
void Option2()  
{
  cout << "-----  ------" << endl;
  
  Echantillon echantillon("DataSkiInpres.csv", 2);

  cout << endl;
}

/*********************************************************************************************/
void Option3() 
{
  cout << "-----  ------" << endl;
  
  Echantillon echantillon("DataSkiInpres.csv", 3);
  
  cout << endl;
}