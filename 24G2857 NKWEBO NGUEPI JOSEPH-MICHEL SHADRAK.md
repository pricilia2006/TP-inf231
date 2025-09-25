# Informations Étudiant

- **Nom :** NKWEBO NGUEPI  
- **Prénom :** JOSEPH-MICHEL SHADRAK  
- **Matricule :** 24G2857  

##  Projet : Algorithmes et Structures de Données en C

### Fonctionnalités implémentées pour ma partition 

5. Tester si un tableau est trié  
6. Trouver la médiane d'\''un tableau  


##  Processus de réalisation

### 5️⃣ Tester si un tableau est trié
- **Étape 1 :** Lire la taille du tableau et ses éléments.  
- **Étape 2 :** Parcourir le tableau du premier à l'\''avant-dernier élément.  
- **Étape 3 :** Pour chaque élément `i`, vérifier si `tab[i] ≤ tab[i+1]` (ordre croissant).  
- **Étape 4 :** Si une seule paire ne respecte pas l'\''ordre, le tableau n'\''est pas trié.  
- **Étape 5 :** Afficher "Trié" ou "Non trié" selon le résultat.  

**Code conceptuel :**
  En c :
int estTrie = 1;
for(int i = 0; i < taille-1; i++) {
    if(tab[i] > tab[i+1]) {
        estTrie = 0;
        break;
    }
}


### 6️⃣ Trouver la médiane d'\''un tableau
- **Étape 1 :** Lire la taille du tableau et ses éléments.  
- **Étape 2 :** Trier le tableau (ordre croissant) avec un algorithme de tri.  
- **Étape 3 :** Si la taille est impaire : médiane = élément du milieu `tab[taille/2]`.  
- **Étape 4 :** Si la taille est paire : médiane = moyenne des deux éléments du milieu  
  `(tab[taille/2 - 1] + tab[taille/2]) / 2.0`.  
- **Étape 5 :** Afficher la valeur médiane.  

**Code conceptuel :**
c
// Après avoir trié le tableau
if(taille % 2 == 1) {
    mediane = tab[taille/2];
} else {
    mediane = (tab[taille/2 - 1] + tab[taille/2]) / 2.0;
}


## Auteur
- Réalisé par *NKWEBO NGUEPI JOSEPH-MICHEL SHADRAK**  
- Matricule : **24G2857**  
- Université de Yaoundé I – Licence 2 Informatique  
- UE : **algorithmie et  structures de données II en c**
