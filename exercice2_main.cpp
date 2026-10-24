#include <iostream>
#include <string>

// 1. Déclaration de la classe Université
class Universite {
private:
    std::string nom;

public:
    // Constructeur de l'Université
    Universite(const std::string& n) : nom(n) {}

    // Méthode pour afficher le nom de l'université
    void afficherNom() const {
        std::cout << nom;
    }
};

// 2. Déclaration de la classe Etudiant
class Etudiant {
private:
    std::string nom;
    int age;
    // Pointeur vers un objet Université (relation d'association)
    const Universite* universite;

    // Attribut statique partagé pour compter le nombre total d'étudiants
    static int nbEtudiants;

public:
    // Constructeur de l'Étudiant
    Etudiant(const std::string& n, int a, const Universite* univ)
        : nom(n), age(a), universite(univ) {
        nbEtudiants++; // Incrémentation du compteur global à chaque création
    }

    // Méthode pour afficher les infos de l'étudiant et de son université
    void afficher() const {
        std::cout << "Etudiant : " << nom 
                  << " | Age : " << age 
                  << " | Universite : ";
        
        // Vérification de sécurité avant d'accéder au pointeur
        if (universite != nullptr) {
            universite->afficherNom();
        } else {
            std::cout << "Aucune";
        }
        std::cout << std::endl;
    }

    // Méthode statique pour afficher le total d'étudiants
    static void afficherTotal() {
        std::cout << "Nombre total d'etudiants : " << nbEtudiants << std::endl;
    }
};

// Initialisation obligatoire de l'attribut statique en dehors de la classe
int Etudiant::nbEtudiants = 0;

int main() {
    // Création de l'université
    Universite u("Universite de Casablanca");

    // Création des étudiants associés à cette université via l'adresse (&u)
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);
    Etudiant e3("Mehdi", 22, &u);

    // Affichage des informations de chaque étudiant
    e1.afficher();
    e2.afficher();
    e3.afficher();

    // Appel de la méthode statique pour vérifier le compteur total
    Etudiant::afficherTotal(); // Doit afficher 3

    return 0;
}