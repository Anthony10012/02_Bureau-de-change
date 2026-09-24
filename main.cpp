/* --------------------------- 
Laboratoire : 03
Auteur(s) : Anthony Simond
Date : 25.09.2026
But : Bureau de change 
Remarque(s) : 
--------------------------- */
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {

      SetConsoleOutputCP(CP_UTF8); // Pour afficher le texte avec les accents


      int numero_compte_bancaire;
      string nom_utilisateur;

      cout << "Quel est votre numéro de compte ? " << endl;
      cin >> numero_compte_bancaire;

      cout << "Quel est votre nom de famille ? " << endl;
      cin >> nom_utilisateur;

      const int solde_compte = 1000; // En CHF
      const double taux_change = 1.024; // En Euro
      const int frais_operation = 5; // En CHF
      double somme_euro;
      cout << "Solde de votre compte CHF : " << solde_compte << endl;
      cout << "Taux de change : 1 CHF = " << taux_change << " Euro " << endl;
      cout << "Frais d'opération : " << frais_operation << " CHF " << endl;

      cout << "Entrez la somme souhaitée en Euro :" << endl;
      cin >> somme_euro;









}