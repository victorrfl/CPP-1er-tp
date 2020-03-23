#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

typedef vector<string> StringList;

void creerFichier()
{
    string nomFichier = "prenom.txt";

    ofstream monFichierOut;

    monFichier.open("prenom.txt");

    monFichierOut << "Didier " << endl();
    monFichierOut << "Bertrand " << endl();
    monFichierOut << "Eude " << endl();
    monFichierOut << "Michel " << endl();
    monFichierOut << "Fred " << endl();
}

bool chargeFichier(vector<string> &ListeNoms)
{
   string nomFichier = "prenom.txt";
   ifstream monFichierIn;
    if(!nomFichier.is_open()) {
        return false;
    }
    while (gotLine(prenom, LINE))
    {
        ListeNoms.push_back(LINE);
    }
    return true;
bool chercheNom(string nom, const vector<string> &ListeNoms)
{
    for(int i =0, i < ListeNoms.size(), i++) {
        if(ListeNoms(i) == noms){
            return true;
        }
    }
}

int main()
creerFichier();
vector<string> prenom;
chargeFichier(prenom);
cout << chercheNom("Luc", prenom) << endl;
cout << chercheNom("Fred", prenom) << endl;
