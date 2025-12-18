#include <stdio.h>
#include <string.h>

#define MAX 3
#define CHAR 50

int structQtd = 0;

typedef struct {
    char song_name[CHAR];
    int launch_year;
    int duration;
    char artist_name[CHAR];
}playlist;


void ClearBuffer(){
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void StripNewLine(char vector[]){
    vector[strcspn(vector,"\n")] = 0;
}

void AddSongs(playlist vector[]){

    if(structQtd >= MAX){
        printf("A lista ja esta cheia, nao e possivel adicionar mais musicas\n");
        return;
    }
    else{

    printf("Digite o nome da musica: ");
    fgets(vector[structQtd].song_name, sizeof(vector[structQtd].song_name),stdin);
    StripNewLine(vector[structQtd].song_name);
    printf("Digite o nome do artista: ");
    fgets(vector[structQtd].artist_name, sizeof(vector[structQtd].artist_name),stdin);
    StripNewLine(vector[structQtd].artist_name);
    printf("Digite o ano de lancamento: ");
    scanf("%d",&vector[structQtd].launch_year); 
    ClearBuffer();
    printf("Digite a duracao da musica: ");
    scanf("%d",&vector[structQtd].duration);
    ClearBuffer();

    structQtd++;
        
    }
}

void ListSongs(playlist vector[]){

    for(int i=0; i<structQtd; i++){
        printf("Musica: %d\nNome: %s\nArtista: %s\nAno: %d\nDuração: %d\n\n",i+1, vector[i].song_name, vector[i].artist_name, vector[i].launch_year, vector[i].duration);
    }

}

void SearchSongs(playlist vector[]){
    int searchQtd = 0;
    char nomeTemp[50];
    
    printf("Digite a musica a ser procurado na lista: ");
    ClearBuffer();
    fgets(nomeTemp, sizeof(nomeTemp),stdin);
    StripNewLine(nomeTemp);

    for(int i=0; i<structQtd; i++){

        if(!strcmp(nomeTemp, vector[i].song_name)){
        printf("Musica: %d\nNome: %s\nArtista: %s\nAno: %d\nDuração: %d\n\n",i+1, vector[i].song_name, vector[i].artist_name, vector[i].launch_year, vector[i].duration);
            searchQtd++;
        }
    }

    if(searchQtd == 0) printf("\nA musica descrita nao foi encontrado na lista.\n");

}


int main(){

playlist myPlaylist[MAX];
int select;


do{
    printf("\nO que voce deseja fazer?\n1- Incluir musica.\n2- Listar musica.\n3- Pesquisar musica por nome.\n4- Sair do menu.\n\n");
    scanf("%d",&select);
    ClearBuffer();
    
switch(select){
    case 1:
    AddSongs(myPlaylist);
    break;
    case 2:
    ListSongs(myPlaylist);
    break;
    case 3:
    SearchSongs(myPlaylist);
    break;
    case 4:
    break;
    default:
    printf("Digite um comando valido.");
    break;


}



}while(select != 4);

}