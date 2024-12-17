#include <stdio.h>
#include <stdlib.h>

// Definition of the linked list element structure
typedef struct element {
    int val;
    struct element* suivant;
} element;

// Function to create an empty list
element* creerListe() {
    return NULL; // Return NULL for an empty list
}

// Function to load a linked list from an array
element* chargerListe(int Tab[], int size, element* liste) {
    for (int i = size - 1; i >= 0; i--) { // Start from the last element for proper order
        element* newNode = (element*)malloc(sizeof(element));
        newNode->val = Tab[i];
        newNode->suivant = liste;
        liste = newNode;
    }
    return liste;
}

// Procedure to display the elements of the list
void afficherListe(element* liste) {
    element* current = liste;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->suivant;
    }
    printf("NULL\n");
}

// Function to delete the last element of the list
element* supprimerEnFin(element* liste) {
    if (liste == NULL) { // List is empty
        return NULL;
    }
    if (liste->suivant == NULL) { // List has only one element
        free(liste);
        return NULL;
    }
    element* current = liste;
    while (current->suivant->suivant != NULL) {
        current = current->suivant;
    }
    free(current->suivant);
    current->suivant = NULL;
    return liste;
}

// Function to add an element at the beginning of the list
element* ajouterEnDebut(element* liste, int val) {
    element* newNode = (element*)malloc(sizeof(element));
    newNode->val = val;
    newNode->suivant = liste;
    return newNode;
}

// Procedure to empty the list
void viderListe(element* liste) {
    element* current = liste;
    while (current != NULL) {
        element* temp = current;
        current = current->suivant;
        free(temp);
    }
    printf("The list is empty\n");
}

// Main function
int main() {
    int Tab[10] = {1, 3, 5, 7, 8, 10, 9, 11, 13, 20};
    element* liste = creerListe();
    element* L = chargerListe(Tab, 10, liste);
    afficherListe(L);
    
    element* L1 = supprimerEnFin(L);
    afficherListe(L1);
    
    element* L2 = ajouterEnDebut(L1, 40);
    afficherListe(L2);
    
    viderListe(L2);
    return 0;
}
