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
int score(0);
int i(0);
int compteur(0);
int quille_Tomber(0);
int Points_quilles(0);


while(i < 50) {
    cout << "combien de quille sont tomber : " << endl;
    cin >> quille_Tomber;
    if (quille_Tomber >= 2) {

        score = score + quille_Tomber;
    }

    if (quille_Tomber == 1){
        cout << "point associés  a la quille : " << endl;
        cin >> Points_quilles;
        score = score + Points_quilles;
    }
    cout << score << endl;

}


    return 0;
}
