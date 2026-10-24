#include <iostream>
#include <string>

class Livre {
private:
    std::string titre;
    std::string auteur;
    int annee;

    // Attribut statique partagé par toutes les instances
    static int nbLivres;

public:
    // Constructeur
    Livre(const std::string& t, const std::string& a, int ann)
        : titre(t), auteur(a), annee(ann) {
        nbLivres++; // Incrémentation du compteur à chaque création d'un livre
    }

    // Méthode pour afficher les informations de l'objet courant
    void afficher() const {
        std::cout << "Titre : " << titre 
                  << " | Auteur : " << auteur 
                  << " | Annee : " << annee << std::endl;
    }

    // Méthode statique pour afficher le nombre total de livres
    static void afficherTotal() {
        std::cout << "Nombre total de livres crees : " << nbLivres << std::endl;
    }
};

// Initialisation obligatoire de l'attribut statique en dehors de la classe
int Livre::nbLivres = 0;

int main() {
    // Appel de la méthode statique avant toute instanciation
    std::cout << "--- Avant creation des objets ---" << std::endl;
    Livre::afficherTotal(); // Affiche 0

    std::cout << "\n--- Creation des livres ---" << std::endl;
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    // Affichage des informations de chaque livre
    l1.afficher();
    l2.afficher();
    l3.afficher();

    std::cout << "\n--- Nombre total ---" << std::endl;
    // Appel de la méthode statique sans instanciation
    Livre::afficherTotal(); // Doit afficher 3

    return 0;
}