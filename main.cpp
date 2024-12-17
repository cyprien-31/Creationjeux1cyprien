/**
* @Créationjeux
* Dans ce mini-projet on doit créer un mini-jeu, on avait le choix entre trois jeux , la bataille navale ,le Zanzibar
 et le jeu du Môlky. Moi j'ai chosis le jeu du Môlky.
* Donc dans ce jeu il'y'a 12 quilles numérotées de 1 à 12  et donc celui qui fait tomber une seule quille prend
 les points associés à cette même quille , parcontre si le joueur fait tomber plus d'une seule quille il prend
 le nombre de quille tomber en points. Mais les joueurs ne doivent pas dépasser 50 sinon il retombe a 25.
* Marcy Cyprien
* 10/12/2024
*/

using namespace std;
#include <iostream>
#include <array>

int main() {
    int score1(0);
    int quille_Tomber(0);
    int Points_quilles(0);
    int score2(0);
    int equipe = 1;

    while (score1 < 50 && score2 < 50) {

        cout << "equipe " << equipe << " combien de quille sont tomber (max 12): " << endl;
        cin >> quille_Tomber;

        if (quille_Tomber > 12) {
            cout << "Le nombres de quilles tombees ne peut pas depasser 12. Veuillez entrer une valeur valide . "
                 << endl;
            continue;

        }


        if (quille_Tomber >= 2) {
            if (equipe == 1) {

                score1 = score1 + quille_Tomber;
            } else {
                score2 = score2 + quille_Tomber;
            }


        } else if (quille_Tomber == 1) {
            do {
                cout << "numero de la quille tomber (max 12) : " << endl;
                cin >> Points_quilles;

                if (Points_quilles > 12) {
                    cout
                            << "Les points associe a une quille ne peuvent pas depasser 12. Veuillez entrer une valeur valide. "
                            << endl;

                }
            } while (Points_quilles > 12);

            if (equipe == 1) {
                score1 = score1 + Points_quilles;
            } else {
                score2 = score2 + Points_quilles;
            }
        }


        cout << "score actuel equipe 1 : " << score1 << endl;
        cout << "score actuel equipe 2 : " << score2 << endl;

        if (score1 == 50) {
            cout << "bravo l'equipe 1 vous avez gagnez la partie  " << endl;
            break;


        } else if (score2 == 50) {
            cout << "bravo l'equipe 2 vous avez gagnez la partie " << endl;
            break;

        } else if (score1 > 50) {
            score1 = 25;
            cout << "score de l'equipe 1 reinitialiser a 25 : " << endl;

        } else if (score2 > 50) {
            score2 = 25;
            cout << "score de l'equipe 2 reinitialiser a 25 : " << endl;
        }
        equipe = (equipe == 1) ? 2 : 1;
    }

    return 0;

    }
