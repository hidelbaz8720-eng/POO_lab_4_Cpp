# TP 4 : Constructeurs et destructeurs en C++

 **Formation :** Programmation orientée objet en C++  

##  Présentation du TP

Ce TP a pour objectif de renforcer les connaissances en programmation orientée objet (POO) en C++, à travers l'utilisation des constructeurs, des attributs statiques, des méthodes statiques et des associations entre classes.

##  Exercice 1 : Suivi des livres dans une bibliothèque

### Objectifs
- Créer une classe `Livre` contenant le titre, l'auteur et l'année de publication.
- Utiliser un attribut statique `nbLivres` pour compter le nombre total de livres créés.
- Implémenter un constructeur qui initialise les attributs et incrémente le compteur.
- Créer une méthode `afficher()` pour afficher les informations de chaque livre.
- Créer une méthode statique `afficherTotal()` pour afficher le nombre total de livres.



###  Captures d'écran

**Énoncé de l'exercice 1**

<img width="1366" height="768" alt="ex1" src="https://github.com/user-attachments/assets/a12f7ae5-d3ee-4ba7-9ee1-d070405be3d1" />



##  Exercice 2 : Gestion des étudiants et de l'université

### Objectifs
- Créer une classe `Universite` contenant le nom de l'université.
- Implémenter une méthode `afficherNom()` pour afficher ce nom.
- Créer une classe `Etudiant` contenant le nom, l'âge et un pointeur vers un objet `Universite`.
- Utiliser l'attribut statique `nbEtudiants` pour compter le nombre total d'étudiants créés.
- Implémenter un constructeur qui initialise les attributs et incrémente le compteur.
- Créer une méthode `afficher()` pour afficher les informations de l'étudiant et son université.
- Créer une méthode statique `afficherTotal()` pour afficher le nombre total d'étudiants.



###  Captures d'écran


**Résultat de l'exécution**

<img width="1366" height="768" alt="ex2" src="https://github.com/user-attachments/assets/1d6982d9-6e8b-4c38-b4c0-bbe5ced3d440" />

##  Technologies utilisées

- **Langage :** C++
- **Paradigme :** Programmation orientée objet
- **Concepts étudiés :**
  - Constructeurs
  - Classes et objets
  - Attributs statiques
  - Méthodes statiques
  - Association entre classes
  - Pointeurs d'objets
  - Affichage des informations



## Résultats attendus

- **Exercice 1 :** Affichage des informations de trois livres et du nombre total de livres créés, soit `3`.
- **Exercice 2 :** Affichage des informations de deux étudiants associés à une université et du nombre total d'étudiants créés, soit `2`.

##  Compétences acquises

À travers ce TP, les compétences suivantes sont développées :

- Comprendre le rôle des constructeurs.
- Manipuler les attributs et les méthodes statiques.
- Compter les objets créés à l'aide d'un compteur partagé.
- Organiser un programme avec plusieurs classes.
- Utiliser des pointeurs pour associer des objets.
- Documenter un projet C++ sur GitHub.

