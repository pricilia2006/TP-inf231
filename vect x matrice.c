#include <stdio.h>

#define N 3 // Taille de la matrice (3x3) et du vecteur (3)

// Fonction pour calculer le produit vecteur x matrice
void vector_matrix_product(float vector[N], float matrix[N][N], float result[N]) {
    for (int i = 0; i < N; i++) {
        result[i] = 0;
        for (int j = 0; j < N; j++) {
            result[i] += vector[j] * matrix[j][i];
        }
    }
}

int main() {
    float vector[N]; // Vecteur d'entrée
    float matrix[N][N]; // Matrice 3x3
    float result[N]; // Vecteur résultat

    // Saisie du vecteur
    printf("Entrez les %d composantes du vecteur : ", N);
    for (int i = 0; i < N; i++) {
        scanf("%f", &vector[i]);
    }

    // Saisie de la matrice
    printf("Entrez les éléments de la matrice %dx%d (par lignes) :\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calcul du produit
    vector_matrix_product(vector, matrix, result);

    // Affichage du résultat
    printf("Résultat du produit vecteur x matrice = (");
    for (int i = 0; i < N; i++) {
        printf("%.2f", result[i]);
        if (i < N - 1) printf(", ");
    }
    printf(")\n");

    return 0;
}