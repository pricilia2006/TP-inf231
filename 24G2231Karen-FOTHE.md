``markdown
# Fiche Étudiant - TP INF231

Informations Personnelles


- Matricule : 24G2231
- Nom : FOTHE TONLIEU 
- Prénom : KAREN 
- Niveau : Licence 2 Informatique
- Cours :INF231 - Structures de Données II
- Enseignant :Professor Metatagia

      
      Ma Contribution au Projet

 Exercice Assigné
- Exercice 1 : Somme de Matrices

EXERCICE 1 : SOMMES DES MATRICES
But  :Calculer la somme de deux matrices de même dimension.  
Principe : Additionner chaque élément correspondant : `C[i][j] = A[i][j] + B[i][j]`  
Entrées : Dimensions de la matrice (m, n), puis les éléments des matrices A et B.  
Sortie : La matrice somme C.



  Description de Ma Participation
J'ai participé à l'implémentation de l'algorithme de somme de matrices en langage C.

   Détails Techniques
Algorithme implémenté :
```c
// Somme de deux matrices A et B
for (int i = 0; i < lignes; i++) {
    for (int j = 0; j < colonnes; j++) {
        C[i][j] = A[i][j] + B[i][j];
    }
}
```

Fonctions développées :

· matrice_somme() : Fonction principale de somme
· saisie_matrice() : Saisie utilisateur des matrices
· affichage_matrice() : Affichage des résultats

 Compétences Utilisées

· Langage C
· Algorithmie : Complexité O(n²) pour matrices n×n
· Git/GitHub : Collaboration

   Résultats Obtenus

·  Code fonctionnel pour matrices de toutes dimensions
·  Gestion des erreurs 
·  Tests validés avec multiples cas d'usage

·
· GitHub :@fothetonlieukaren
