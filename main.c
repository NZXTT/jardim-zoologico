#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Animal{

    int num;
    char nome[30];
    char especie[30];
    int idade;
    int dia, mes, ano;

};

struct Animal arr_Animais[30];

/*
* FUNCTION PROTORYPES
*/
void AddAnimal();
void changeAnimalData();
void checkAnimalData();
void listAnimalBySpecie();
void listAllAnimals();
void fillArray();


int main()
{
    setlocale(LC_ALL, "Portuguese");
    menu();
    return 0;
}

void header() {

    printf("----------------------------------------\n");
    printf("       OLYMPIA - JARDIM ZOOLÓGICO       \n");
    printf("----------------------------------------\n");

}


void menu(){

	char opc;
	do{
		system("CLS");
        header();
		printf("\nM E N U\n");
		printf("\n1 - GESTÃO DE ANIMAIS");
		printf("\n2 - GESTÃO DE TRATADORES");
		printf("\n3 - MARCAÇÃO/CONSULTAS DE VISITAS");
        printf("\n\n0 - S A I R");
		printf("\n\nESCOLHA A OPÇÃO: ");
		opc=getche();
		switch(opc){
			case '1': gestaoAnimais();break;
			case '2': //gestaoTratadores();break;
            case '3': //gestaoMarcacaoConsultas();break;

			case '0':break;
			default: printf("\nESCOLHA UMA OPÇÃO VÁLIDA: ");getch();break;
		}
	} while(opc!='0');
}

void gestaoAnimais(){
	char opc;
	do{
		system("CLS");
		header();
		printf("\nM E N U   G E S T Ã O   A N I M A I S\n");
        printf("\n1 - ACRESCENTAR ANIMAL");
        printf("\n2 - ALTERAR DADOS DO ANIMAL");
        printf("\n3 - VERIFICAR OS DADOS DE UM ANIMAL");
        printf("\n4 - LISTAR REGISTOS DE TODOS OS ANIMAIS");
        printf("\n5 - LISTAR ANIMAIS POR ESPÉCIE");
        printf("\n6 - PREENCHER ARRAY");
		printf("\n\n0 - S A I R");
		printf("\n\nESCOLHA A OPÇÃO: ");
		opc=getche();
		switch(opc){
		    case '6': fillArray(); break;
		    case '5': listAnimalBySpecie(); break;
		    case '4': listAllAnimals(); break;
		    case '3': checkAnimalData(); break;
		    case '2': changeAnimalData(); break;
            case '1': addAnimal(); break;
			case '0':break;
			default: printf("\nOPÇÃO INVÁLIDA! PRIMA UMA TECLA PARA VOLTAR: ");getch();break;
		}
	}while(opc!='0');
}


/*
*
* FUNÇÕES ANIMAIS
*
*/

void addAnimal() {

    system("cls");
    header();
    struct Animal animal;
    char nome[30], especie[30];
    printf("\n---------------------------------\n");
    printf("     INTRODUZIR DADOS ANIMAL     \n");
    printf("---------------------------------\n");
    printf("Introduza o número de registo do animal: ");
    scanf("%d", &animal.num);
    printf("Introduza o nome do animal: ");
    scanf("%s", &nome);
    printf("Introduza a espécie do animal: ");
    scanf("%s", &especie);
    printf("Introduza a idade do animal: ");
    scanf("%d", &animal.idade);
    printf("Introduza o dia: ");
    scanf("%d", &animal.dia);
    printf("Introduza o mês: ");
    scanf("%d", &animal.mes);
    printf("Introduza o ano: ");
    scanf("%d", &animal.ano);
    printf("---------------------------------\n");

    strcpy(animal.nome, nome);
    strcpy(animal.especie, especie);

    arr_Animais[animal.num] = animal;

    system("cls");
    printf("-------------------------\n");
    printf("     DADOS INSERIDOS     \n");
    printf("-------------------------\n");

    printf("Animal Nº: %d\n", arr_Animais[animal.num].num);
    printf("Nome: %s\n", arr_Animais[animal.num].nome);
    printf("Espécie: %s\n", arr_Animais[animal.num].especie);
    printf("Idade: %d\n", arr_Animais[animal.num].idade);
    printf("Data: %d-%d-%d\n", arr_Animais[animal.num].dia, arr_Animais[animal.num].mes, arr_Animais[animal.num].ano);

    printf("-------------------------\n");
    printf("Prima enter para voltar: ");
    getchar();
    getchar();
}

void changeAnimalData() {

    system("cls");
    header();
    struct Animal animal;
    char nome[30], especie[30];
    int num;

    printf("Insira o código do animal que quer alterar os dados: ");
    scanf("%d", &num);
    getchar();

    system("cls");
    header();
    printf("\n-------------------------\n");
    printf("     DADOS ANIMAL %d     \n", num);
    printf("-------------------------\n");
    printf("Animal Nº: %d\n", arr_Animais[num].num);
    printf("Nome: %s\n", arr_Animais[num].nome);
    printf("Espécie: %s\n", arr_Animais[num].especie);
    printf("Idade: %d\n", arr_Animais[num].idade);
    printf("Data: %d-%d-%d\n", arr_Animais[num].dia, arr_Animais[num].mes, arr_Animais[num].ano);
    printf("--------------------------\n");
    printf("Prima uma tecla para continuar: ");
    getchar();

    printf("\n--------------------------\n");
    printf("  INSIRA OS NOVOS DADOS  \n", num);
    printf("--------------------------\n");
    printf("Introduza o número de registo do animal: ");
    scanf("%d", &animal.num);
    printf("Introduza o nome do animal: ");
    scanf("%s", &nome);
    printf("Introduza a espécie do animal: ");
    scanf("%s", &especie);
    printf("Introduza a idade do animal: ");
    scanf("%d", &animal.idade);
    printf("Introduza o dia: ");
    scanf("%d", &animal.dia);
    printf("Introduza o mês: ");
    scanf("%d", &animal.mes);
    printf("Introduza o ano: ");
    scanf("%d", &animal.ano);
    printf("---------------------------------\n");

    strcpy(animal.nome, nome);
    strcpy(animal.especie, especie);

    arr_Animais[num] = animal;

    printf("\n-------------------------\n");
    printf("   NOVOS DADOS ANIMAL %d   \n", num);
    printf("-------------------------\n");
    printf("Animal Nº: %d\n", arr_Animais[num].num);
    printf("Nome: %s\n", arr_Animais[num].nome);
    printf("Espécie: %s\n", arr_Animais[num].especie);
    printf("Idade: %d\n", arr_Animais[num].idade);
    printf("Data: %d-%d-%d\n", arr_Animais[num].dia, arr_Animais[num].mes, arr_Animais[num].ano);
    printf("--------------------------\n");
    printf("Prima uma tecla para voltar: ");
    getchar();
}

void checkAnimalData() {

    system("cls");
    header();
    int num;

    printf("Insira o código do animal que quer verificar: ");
    scanf("%d", &num);
    getchar();

    system("cls");
    header();
    printf("-------------------------\n");
    printf("         ANIMAL %d       \n", num);
    printf("-------------------------\n");

    printf("Animal Nº: %d\n", arr_Animais[num].num);
    printf("Nome: %s\n", arr_Animais[num].nome);
    printf("Espécie: %s\n", arr_Animais[num].especie);
    printf("Idade: %d\n", arr_Animais[num].idade);
    printf("Data: %d-%d-%d\n", arr_Animais[num].dia, arr_Animais[num].mes, arr_Animais[num].ano);

    printf("-------------------------\n");
    printf("Prima enter para voltar: ");
    getchar();
}

void listAllAnimals() {

    system("cls");
    header();
    printf("\n-------------------------\n");
    printf("      ANIMAIS DO ZOO     \n");
    printf("-------------------------\n");

    for (int i = 0; i < 30; i++){

        if (arr_Animais[i].idade != 0) {

            printf("------------------------------------\n");
            printf("Animal Nº: %d\n", arr_Animais[i].num);
            printf("Nome: %s\n", arr_Animais[i].nome);
            printf("Espécie: %s\n", arr_Animais[i].especie);
            printf("Idade: %d\n", arr_Animais[i].idade);
            printf("Data: %d-%d-%d\n", arr_Animais[i].dia, arr_Animais[i].mes, arr_Animais[i].ano);
            printf("------------------------------------\n");

        }
    }
    getchar();
}

void listAnimalBySpecie() {

    system("cls");
    header();
    char especie[30];

    printf("Insira a espécie de animais que pretende listar: ");
    scanf("%s", &especie);

    //scanf("%s", &especie);
    getchar();


    system("cls");
    header();
    printf("-------------------------\n");
    printf("          %s             \n", especie);
    printf("-------------------------\n");

    for (int i = 0; i < 30; i++) {

        if (strcmp(arr_Animais[i].especie, especie) == 0) {

            printf("------------------------------------\n");
            printf("Animal Nº: %d\n", arr_Animais[i].num);
            printf("Nome: %s\n", arr_Animais[i].nome);
            printf("Espécie: %s\n", arr_Animais[i].especie);
            printf("Idade: %d\n", arr_Animais[i].idade);
            printf("Data: %d-%d-%d\n", arr_Animais[i].dia, arr_Animais[i].mes, arr_Animais[i].ano);
            printf("------------------------------------\n");
        }

    }
    printf("Prima enter para voltar: ");
    getchar();
}


void fillArray() {

    struct Animal animal1, animal2, animal3, animal4, animal5, animal6, animal7, animal8, animal9, animal10;

    // ANIMAL 0
    animal1.num = 0;
    strcpy(animal1.nome, "Lion");
    strcpy(animal1.especie, "Leao");
    animal1.idade = 7;
    animal1.dia = 8; animal1.mes = 1; animal1.ano = 2023;
    arr_Animais[animal1.num] = animal1;

    // ANIMAL 1
    animal2.num = 1;
    strcpy(animal2.nome, "Lion1");
    strcpy(animal2.especie, "Leao");
    animal2.idade = 4;
    animal2.dia = 8; animal2.mes = 1; animal2.ano = 2023;
    arr_Animais[animal2.num] = animal2;

    // ANIMAL 2
    animal3.num = 2;
    strcpy(animal3.nome, "Giraffe");
    strcpy(animal3.especie, "Girafa");
    animal3.idade = 15;
    animal3.dia = 8; animal3.mes = 1; animal3.ano = 2023;
    arr_Animais[animal3.num] = animal3;

    // ANIMAL 3
    animal4.num = 3;
    strcpy(animal4.nome, "Hippo");
    strcpy(animal4.especie, "Hipopotamo");
    animal4.idade = 25;
    animal4.dia = 8; animal4.mes = 1; animal4.ano = 2023;
    arr_Animais[animal4.num] = animal4;

    // ANIMAL 4
    animal5.num = 4;
    strcpy(animal5.nome, "Zebra");
    strcpy(animal5.especie, "Zebra");
    animal5.idade = 2;
    animal5.dia = 8; animal5.mes = 1; animal5.ano = 2023;
    arr_Animais[animal5.num] = animal5;

    // ANIMAL 5
    animal6.num = 5;
    strcpy(animal6.nome, "Lion3");
    strcpy(animal6.especie, "Leao");
    animal6.idade = 2;
    animal6.dia = 8; animal6.mes = 1; animal6.ano = 2023;
    arr_Animais[animal6.num] = animal6;

    // ANIMAL 6
    animal7.num = 6;
    strcpy(animal7.nome, "Lion4");
    strcpy(animal7.especie, "Leao");
    animal7.idade = 13;
    animal7.dia = 8; animal7.mes = 1; animal7.ano = 2023;
    arr_Animais[animal7.num] = animal7;

    // ANIMAL 7
    animal8.num = 7;
    strcpy(animal8.nome, "Leo");
    strcpy(animal8.especie, "Leopardo");
    animal8.idade = 1;
    animal8.dia = 8; animal8.mes = 1; animal8.ano = 2023;
    arr_Animais[animal8.num] = animal8;

    // ANIMAL 8
    animal9.num = 8;
    strcpy(animal9.nome, "Tiger");
    strcpy(animal9.especie, "Tigre");
    animal9.idade = 1;
    animal9.dia = 8; animal9.mes = 1; animal9.ano = 2023;
    arr_Animais[animal9.num] = animal9;

    // ANIMAL 9
    animal10.num = 9;
    strcpy(animal10.nome, "Zira");
    strcpy(animal10.especie, "Elefante");
    animal10.idade = 3;
    animal10.dia = 8; animal10.mes = 1; animal10.ano = 2023;
    arr_Animais[animal10.num] = animal10;

    getchar();
}


