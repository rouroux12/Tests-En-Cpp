// ConsoleApplicationTest.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{   
   /* cout << "t'es chiant florent" << endl << "car t'es un debutant" << endl;
    cout << "je teste des choses" << " car je suis debutant" << endl; 


    string phrase("bienvenue dans question pour un coince !");
    bool estCeUneBonneIdee(true), vousEtesSur(true);
    int depuisCombienDeTempsShadowEstPasTresIntelligent(16);
    // double marche pas?

    cout << phrase << endl << "depuis combien de temps shadow est con ?" << endl << depuisCombienDeTempsShadowEstPasTresIntelligent <<endl;

    int ageUtilisateur(18); //Une variable pour contenir l'âge de l'utilisateur

    int& maReference(ageUtilisateur); //Et une référence sur la variable 'ageUtilisateur'

    //On peut utiliser à partir d'ici
    //'ageUtilisateur' ou 'maReference' indistinctement
    //Puisque ce sont deux étiquettes de la même case en mémoire

    cout << "Vous avez " << ageUtilisateur << "  ans. (via variable)" << endl;
    //On affiche, de la manière habituelle

    cout << "Vous avez " << maReference << " ans. (via reference)" << endl;
    //Et on affiche en utilisant la référence

     int quelleage(0);
        cout << "quelle age avez vous ?" << endl;
        cin >> quelleage; 
        cout << "vous avez : " << quelleage << " ans" << endl; */
        
        
        cout << "Quel est votre nom ?" << endl;
        string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères
        getline(cin, nomUtilisateur); //On remplit cette case avec toutela ligne que l'utilisateur a écrit

        cout << "Combien vaut pi ?" << endl;
        double piUtilisateur(-1.); //On crée une case mémoire pour stockerun nombre réel
        cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur
     
        cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << endl;

        int const nombreNiveaux(10);
        
        int a(0), b(0), resultat(0);
        cout << "Choississez unze valeure sans virgule pour a : " << endl;
        cin >> a;
        cout << "choississzez une valeure sans virgule pour b : " << endl;
        cin >> b;
        resultat = a + b;
        ++resultat;
        --resultat;
        cout << "le resultat est " << resultat << endl;

        double nombre(5.3);
        nombre += 4.2;       //'nombre' vaut maintenant 9.5
        nombre *= 2.;        //'nombre' vaut maintenant 19
        nombre -= 1.;        //'nombre' vaut maintenant 18
        nombre /= 3.;        //'nombre' vaut maintenant 6
        cout << "le resultat est " << nombre << endl; 

        double const a(19);
        double const b(5);
        double const resultat = pow(a, b); // creer un nombre avec des puissances


    //suite du cours dimanche...



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
