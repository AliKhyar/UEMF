#include<stdio.h>
#define N 2

static int len_list = N+1;
typedef struct Personne{
	char nom[20];
	char prenom[20];
	int age;
}Personne;

void ajouter_personne(Personne list_pers[N+10]){
	int position;
	Personne pers;
	printf("What position you want to insert you person at? \n");
	scanf("%d",&position);
	//int len_list = sizeof(list_pers)/sizeof(list_pers[0]);
	if(len_list-2>position){
		printf("out of range");
	}else{
		for(i=len_list; i<=position; i--){
			list_pers[i+1]=list_pers[i];
		}
		printf("Enter the name of the person at position %d \n", position);
		scanf("%s", list_pers[len_list+1].nom);
		printf("Enter his last name:\n");
		scanf("%s", list_pers[len_list+1].prenom);
		printf("Enter his age \n");
		scanf("%d", &list_pers[len_list+1].age);
		int i;
		
		len_list= len_list +1;
	}

}

void main(){
	Personne list_personnes[N+10];
	int i;
	for(i=0; i<N;i++){
		printf("Enter the name of the person at position  %d \n", i+1);
		scanf("%s", list_personnes[i].nom);
		printf("Enter his last name:\n");
		scanf("%s", list_personnes[i].prenom);
		printf("Enter his age \n");
		scanf("%d", &list_personnes[i].age);
	}
	ajouter_personne(list_personnes);
	
}
