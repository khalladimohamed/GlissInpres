#include <iostream>
#include <fstream>
using namespace std;

#include "DataSource1D.h"
#include "Echantillon.h"
#include "EtudeStatistiques1D.h"

int  Menu();
void Option1();
void Option2();
void Option3();
void Option4();

int main(int argc,char* argv[])
{
  int choix;
  bool fini = false;
  
  while(!fini)
  {
    if (argc == 2) { choix = atoi(argv[1]); fini = true; }
    else choix = Menu();
    switch(choix)
    {
      case 1 : Option1(); break;
      case 2 : Option2(); break;
      case 3 : Option3(); break;
      case 4 : Option4(); break;
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
  cout << " 1. " << endl;
  cout << " 2. " << endl;
  cout << " 3. " << endl;
  cout << " 4. " << endl;
  cout << " 5. Quitter" << endl << endl;

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
  
  cout << endl;

  cout << "-----  -----" << endl;

  cout << endl;
  

  cout << "-----  -----" << endl;
  
  cout << endl;
}

/*********************************************************************************************/
void Option2()  
{
  cout << "-----  ------" << endl;
  
  cout << endl;

  cout << "-----  -----" << endl;

  cout << endl;
  

  cout << "-----  -----" << endl;
  
  cout << endl;
}

/*********************************************************************************************/
void Option3() 
{
  cout << "-----  ------" << endl;
  
  cout << endl;

  cout << "-----  -----" << endl;

  cout << endl;
  

  cout << "-----  -----" << endl;
  
  cout << endl;
}

/*********************************************************************************************/
void Option4() 
{
  cout << "-----  ------" << endl;
  
  cout << endl;

  cout << "-----  -----" << endl;

  cout << endl;
  

  cout << "-----  -----" << endl;
  
  cout << endl;
}