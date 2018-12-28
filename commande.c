#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	int commande=0;
	if(argc>=7){
		if(strcmp(argv[1],"-i")==0){
			if((strcmp(argv[2],"xml") !=0)&& strcmp(argv[3],"json") !=0)
			{
				printf("Le type d'entree doit etre un fichier xml ou json\n");
				commande=1;
			}
			else
			{
				printf("Veuillez specifier l'option -i\n");
				commande=1;
			}
		}
		else
		{
			printf("Commande manquante\n Exemple: XJ_Convertor -i xml -f fichier.xml -o nomfichier.svg\n");
			commande=1;
		}
	}
	if(!commande)
	{
		printf("La premiere commande est valide\n");
	}
	return 0;
}
