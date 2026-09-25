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
#include <cmath>

using namespace std;

int main() {

      SetConsoleOutputCP(CP_UTF8); // Pour afficher le texte avec les accents


      int numero_compte_bancaire;
      string nom_utilisateur;

      cout << "Quel est votre numéro de compte ? " << endl;
      cin >> numero_compte_bancaire;

      cout << "Quel est votre nom de famille ? " << endl;
      cin >> nom_utilisateur;

      const double solde_compte = 1000.0; // En CHF
      const double taux_change = 1.024; // En Euro
      const double frais_operation = 5.0; // En CHF
      double somme_euro;
      cout << "Solde de votre compte CHF : " << solde_compte << endl;
      cout << "Taux de change : 1 CHF = " << taux_change << " Euro " << endl;
      cout << "Frais d'opération : " << frais_operation << " CHF " << endl;

      cout << "Entrez la somme souhaitée en Euro :" << endl;
      cin >> somme_euro;

      double montant_franc = round((somme_euro / taux_change)*100.0) / 100.0; // Arrondi 2 chiffre après la virgule
      double somme_chf = montant_franc + frais_operation;
      double montant_restant = solde_compte - somme_chf;
      cout << "Somme CHF : " << montant_franc << ", Solde compte : " << montant_restant << endl;

      // Ticket
      cout << "+----------------------------+" << endl;
      cout <<"|" << endl;
      cout <<"|" << nom_utilisateur << endl;
      cout <<"|" << numero_compte_bancaire << endl;
      cout <<"|" << endl;
      cout <<"|" <<  "Somme Euro             : "<< somme_euro << endl;
      cout <<"|" <<  "1 CHF en Euro          : " << taux_change << endl;
      cout <<"|" << endl;
      cout <<"|" <<  "Somme CHF              : " << montant_franc << endl;
      cout <<"|" <<  "Frais                  : " << frais_operation << endl;
      cout <<"|" << endl;
      cout <<"|" <<  "Solde Compte           : " << montant_restant << endl;
      cout <<"|" << endl;
      cout << "+----------------------------+" << endl;


}