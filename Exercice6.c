#include <stdio.h>
#include <stdlib.h>


const taille=50;
int tab[taille];
int i;
int main(int argc, char *argv[]){
	
	
	int tpositif[taille];
	int tnegatif[taille];
	int n, nnpositif, nnegatif, i, Nb, somme;
	
	printf("Combien de valeurs voulez-vous saisir ? \n");
	scanf("%d", &n);
	for(i=1 ; i<=n ; i++){
		printf("Entrez la %d eme valeur : ", i);
		scanf("%d", &Nb);
		saisieTab(Nb);
		somme = somme + tab[i];
	}
	printf("La somme de ces nombres est : %d", somme);
	
	
return 0;	
}
void saisieTab(int a){
	tab[i] = a; // Je n'arrive pas � stocker les valeurs entr�es dans le tableau via cette proc�dure
}
//Je n'ai pas eu le temps d'essayer de cr�er d'autre proc�dures ou fonctions
