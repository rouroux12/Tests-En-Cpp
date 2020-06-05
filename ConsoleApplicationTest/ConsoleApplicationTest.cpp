// ConsoleApplicationTest.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "nique ta mere shadow" << endl << "car t'es un gros fdp" << endl;
    cout << "je teste des choses" << " car je suis debutant" << endl; 


    string phrase("bienvenue dans question pour un noob !");
    bool estCeUneBonneIdee(true), vousEtesSur(true);
    int depuisCombienDeTempsShadowEstCon(16);
    // double marche pas?

    cout << phrase << endl << "depuis combien de temps shadow est con ?" << endl << depuisCombienDeTempsShadowEstCon <<endl;

    int ageUtilisateur(18); //Une variable pour contenir l'âge de l'utilisateur

    int& maReference(ageUtilisateur); //Et une référence sur la variable 'ageUtilisateur'

    //On peut utiliser à partir d'ici
    //'ageUtilisateur' ou 'maReference' indistinctement
    //Puisque ce sont deux étiquettes de la même case en mémoire

    cout << "Vous avez " << ageUtilisateur << "  ans. (via variable)" << endl;
    //On affiche, de la manière habituelle

    cout << "Vous avez " << maReference << " ans. (via reference)" << endl;
    //Et on affiche en utilisant la référence

    //suite du cours diamnche...


    return 0; //termine la fonction main et termine le programme
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
