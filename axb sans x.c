#include <stdio.h>



int main() {
    int a, b;
    printf("Entrez a et b (positifs): ");
    scanf("%d %d", &a, &b);

    int produit = 0;

    // Répéter b fois
    for (int i = 0; i < b; i++) {
        // Ajouter "a" à produit en faisant +1 a fois
        for (int j = 0; j < a; j++) {
            produit = produit + 1;
        }
    }

    printf("a * b = %d\n", produit);

    return 0;
}

