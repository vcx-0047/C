#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour charger une chaîne de caractères
char *ChargerChaine(int N) {
    char *chaine = (char *)malloc((N + 1) * sizeof(char)); // +1 pour le caractère nul
    if (chaine == NULL) {
        fprintf(stderr, "Allocation mémoire échouée\n");
        exit(1); // Gestion d'erreur : sortie du programme en cas d'échec de l'allocation
    }
    printf("Entrez une chaîne de caractères (max %d caractères) : ", N);
    fgets(chaine, N + 1, stdin); // Lecture de la chaîne avec fgets pour gérer les espaces et éviter les dépassements de tampon
    chaine[strcspn(chaine, "\n")] = 0; // Supprime le caractère de nouvelle ligne ajouté par fgets

    return chaine;
}

// Fonction pour calculer la longueur d'une chaîne
int Longueur(char *ch) {
    return strlen(ch);
}

// Procédure pour charger une chaîne dans un tableau
void ChargerTab(char *p, char Tab[]) {
    strcpy(Tab, p); // Copie la chaîne dans le tableau
}

// Procédure pour inverser un tableau de caractères
void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m - 1 - i];
    }
    T[m] = '\0'; // Ajout du caractère nul pour terminer la chaîne inversée
}

// Procédure pour afficher un tableau de caractères comme une chaîne
void AfficherTab(char Tab[], int m) {
    for (int i = 0; i < m; i++) {
        printf("%c", Tab[i]);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Entrez la taille maximale de la chaîne : ");
    scanf("%d", &N);
    getchar(); // Consomme le  de nouvelle ligne laissé par scanf
    //N=N+1
    char *chaine = ChargerChaine(N);
    int longueur = Longueur(chaine);
    char Tab[longueur + 1]; // Tableau pour stocker la chaîne
    char T[longueur + 1]; // Tableau pour stocker la chaîne inversée

    ChargerTab(chaine, Tab);
    InverserTab(Tab, T, longueur);
    AfficherTab(Tab, longueur);
    AfficherTab(T, longueur);

    free(chaine); // Libération de la mémoire allouée dynamiquement

    return 0;
}