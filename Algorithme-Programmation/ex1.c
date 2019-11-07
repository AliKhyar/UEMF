#include<stdio.h>


typedef struct Etudiant{
	char nom[20];
	char prenom[20];
	double note;
}Etudiant;

void main(){
	
	Etudiant list_et[3];
	int i = 0;
	for(i=0; i<3;i++){
		printf("Ecrire le nom d'et num %d \n", i+1);
		scanf("%s", list_et[i].nom);
		printf("Ecrire son prenom:\n");
		scanf("%s", list_et[i].prenom);
		printf("Ecrire sa note \n");
		scanf("%lf", &(list_et[i].note));
	}
	i = 0;
	for(i=0; i<3;i++){
		if(list_et[i].note >= 10){
			printf("%s %s avec note %.2f \n", list_et[i].nom, list_et[i].prenom, list_et[i].note);
	}
	}	
}
