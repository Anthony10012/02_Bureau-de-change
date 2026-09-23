# Labo03 - Bureau de change

## Objectif
- Utiliser les types, les formules et les opérations mathématiques de c++.


## Contexte
Vous êtes responsable de la programmation d’une machine automatique de change de CHF en Euro. Cette machine est liée à la banque et à chaque opération elle débite la somme retirée du montant disponible sur votre compte CHF et vous imprime un ticket récapitulatif. Pour chaque opération de change, la machine facture des frais d’opération fixe

Les étapes de fonctionnement sont les suivantes :

1.	Au démarrage, la machine demande le numéro de compte bancaire et le nom de l’utilisateur. On considère que les informations saisies sont correctes et que nous avons le montant disponible sur le compte.
2.	Ensuite, la machine affiche à l’utilisateur la somme disponible sur son compte en CHF, le taux de change CHF  Euro et les frais d’opération fixes et demande à l’utilisateur de saisir la somme demandée en Euro.
3.	La machine convertit la somme demandée en CHF et arrondit le montant à 2 chiffres après la virgule.
4.	La machine débite ensuite la somme calculée (de l’étape 3) en CHF + les frais d’opération du montant disponible sur le compte de l’utilisateur.
5.	La machine imprime à l’utilisateur un ticket récapitulatif contenant les informations suivantes : 
    - Le nom de l’utilisateur et le numéro de son compte.
    - La somme demandée en Euro.
    - Le taux de change.
    - Le montant équivalent en CHF.
    - Les frais d’opérations.
    - Le montant restant sur son compte bancaire après l’opération.

Pour arrondir un chiffre en c++ vous pouvez utiliser la fonction round, je vous laisse chercher la syntaxe et la librairie dont elle fait partie.

Pour lire une saisie utilisateur dans une variable, cin >> i ; cela va lire une valeur saisie par l’utilisateur dans la variable i.

### Note 
afin de faciliter la validation du labo (i.e. avoir une sortie identique aux tests) :
-	La somme disponible sur le compte du client = 1000 chf.
-	Le taux de change : 1 CHF = 1.024 Euro.
-	Les frais d’opération = 5 CHF.
-	Les questions que votre programme pose à l’utilisateur :
    - Quel est votre numéro de compte ?
    - Quel est votre nom de famille ?
    - Entrez la somme souhaitée en Euro :
-	Pour afficher les informations de l’étape 2, utiliser les modèles suivants : 
~~~
Solde de votre compte CHF : 1000.00
Taux de change : 1 CHF = 1.024 Euro
Frais d’opération : 5.00 CHF
~~~
-	Votre programme doit afficher la ligne suivante avant l’affichage du ticket, cette ligne contient la somme en CHF et le solde du compte après déduction : (les chiffres sont à titre exemple)
~~~
Somme CHF : 122.07, Solde compte : 872.93
~~~

## Ticket
Le ticket doit être affichée sur la sortie standard. Le ticket est entouré d’un cadre réalisé avec les caractères +, - et |. Le nom de l’utilisateur et son numéro de compte sont affichés en tête. Les détails de l’opération sont ensuite affichés en deux colonnes séparées par le caractère :. L’annexe fournit un exemple illustrant la sortie attendue, dont le format devra être reproduit à l’identique.

PS. Une fois que nous aurions vu les chapitres 5 et 6, nous seront en mesure de faire un ticket bien plus esthétique avec les outils de formatage des flux.


## Travail demandé 
Implémenter votre algorithme en c++, votre code devra être rédigé et commenté selon les indications reçues dans le cours.

Il devrait être facile de modifier votre programme pour changer le taux de change, le solde initial et certains paramètres d’affichage comme le séparateur utilisé entre les deux colonnes, les caractères utilisés pour afficher le cadre, etc.


## Remise du travail 
- Veuillez soumettre (sur Cyberlearn ou Teams selon le cas) le hash de votre commit dans github ainsi que le lien vers le repo.
- Le code c++, fichier main.cpp, doit être dans le repo git.
- Travail individuel.

## Annexe
~~~
Quel est votre numéro de compte ?
1256845
Quel est votre nom de famille ?
TOTO
Solde de votre compte CHF : 1000
Taux de change : 1 CHF = 1.024 Euro
Frais d’opération : 5 CHF
Entrez la somme souhaitée en Euro :
125

+-------------------------------+
|                               
| TOTO
| 1256845
|                               
| Somme Euro             : 125
| 1 CHF en Euro          : 1.024
|                               
| Somme CHF              : 122.07
| Frais                  : 5
|                               
| Solde Compte           : 872.93
|                               
+-------------------------------+
~~~
