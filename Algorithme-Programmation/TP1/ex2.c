#include<stdio.h>

#define n 5
typedef struct Etudiant{
	char nom[20];
	char prenom[20];
	double note;
}Etudiant;
void ajouter_bonus(Etudiant* et, double bonus ){
	et->note = et->note + bonus;

}

void main(){
	
	Etudiant list_et[n];
	int i = 0;
	for(i=0; i<n;i++){
		printf("Ecrire le nom d'et num %d \n", i+1);
		scanf("%s", list_et[i].nom);
		printf("Ecrire son prenom:\n");
		scanf("%s", list_et[i].prenom);
		printf("Ecrire sa note \n");
		scanf("%lf", &list_et[i].note);
	}

	for(i=0; i<n;i++){

		printf("%s %s avec note %.2f \n", list_et[i].nom, list_et[i].prenom, list_et[i].note);
	}
	printf("notes avec bonus");
	for(i=0; i<n;i++){
		if(list_et[i].note <10){
			ajouter_bonus(&list_et[i], 1);
		}else if((list_et[i].note >10) &&(list_et[i].note <15)){
			ajouter_bonus(&list_et[i], 0.5);		
			}
	
	}
	for(i=0; i<n;i++){
		printf("%s %s avec note %.2f \n", list_et[i].nom, list_et[i].prenom, list_et[i].note);
	}

}
