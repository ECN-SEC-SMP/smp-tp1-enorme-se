#include <iostream>

using namespace std; 

int U0 = 0;          // 1er terme de la suite (u0)
int U1 = 1;          // 2nd terme de la suite (u1)
int Un = 0;          // Terme issu de la récurrence
int Un1 = 0;         // Prochains termes permettant de 
int Un2 = 0;         //    calculer la récurrence

int main() {        // Boucle principale

    Un1 = U1;       // Affectation des 1er termes u0 et u1
    Un2 = U0;

    for (int i = 0; i<20; i++)   // Boucle de 20 itérations
    {
        Un = Un1 + Un2;          // Formule de la suite de Fibonnacci
        Un2 = Un1;               
        Un1 = Un;                // Les termes additionnés prennent la valeur des précédents pour calculer le prochain terme de la suite
        cout << Un << endl;      // Affichage du résultat
    }
    return 0;                    // Sortie propre du programme
}