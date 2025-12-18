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

    char song_name_temp[CHAR], artist_name_temp[CHAR];
    int launch_year_temp, duration_temp;

    if(structQtd >= MAX){
        printf("A lista ja esta cheia, nao e possivel adicionar mais musicas\n");
        return;
    }

    printf("Digite o nome da musica: ");
    fgets(song_name_temp, sizeof(song_name_temp),stdin);
    StripNewLine(song_name_temp);
    printf("Digite o nome do artista: ");
    fgets(artist_name_temp, sizeof(artist_name_temp),stdin);
    StripNewLine(artist_name_temp);
    printf("Digite o ano de lancamento: ");
    scanf("%d",&launch_year_temp); 
    ClearBuffer();
    printf("Digite a duracao da musica: ");
    scanf("%d",&duration_temp);
    ClearBuffer();


    for(int i=0; i<structQtd; i++){
        if(!strcmp(song_name_temp, vector[i].song_name) && !strcmp(artist_name_temp, vector[i].artist_name)){
            printf("\nEssa musica ja existe na playlist, por favor adicione outra.\n\n");
            return;
        }
    }
    
    strcpy(vector[structQtd].song_name,song_name_temp);
    strcpy(vector[structQtd].artist_name,artist_name_temp);
    vector[structQtd].launch_year = launch_year_temp;
    vector[structQtd].duration = duration_temp;

    structQtd++;
        
}

void ListSongs(playlist vector[]){

    if(structQtd == 0) printf("\nAinda nao ha nenhuma musica adicionada na playlist. Retornando ao menu...\n\n");

    for(int i=0; i<structQtd; i++){
        printf("Musica: %d\nNome: %s\nArtista: %s\nAno: %d\nDuracao: %d\n\n",i+1, vector[i].song_name, vector[i].artist_name, vector[i].launch_year, vector[i].duration);
    }

}

void SearchSongs(playlist vector[]){
    int searchQtd = 0;
    char nameTemp[CHAR];
    
    printf("Digite a musica a ser procurado na lista: ");
    fgets(nameTemp, sizeof(nameTemp),stdin);
    StripNewLine(nameTemp);

    for(int i=0; i<structQtd; i++){
        if(!strcmp(nameTemp, vector[i].song_name)){
            printf("Musica: %d\nNome: %s\nArtista: %s\nAno: %d\nDuracao: %d\n\n",i+1, vector[i].song_name, vector[i].artist_name, vector[i].launch_year, vector[i].duration);
            searchQtd++;
        }
    }

    if(searchQtd == 0) printf("\nA musica descrita nao foi encontrado na lista. Retornando ao menu...\n");

}

void AlterSong(playlist vector[]){

    int searchQtd = 0, indexTemp=0;
    char nameTemp[CHAR], artistTemp[CHAR];
    
    printf("Digite a musica a ser procurado na lista: ");
    fgets(nameTemp, sizeof(nameTemp),stdin);
    StripNewLine(nameTemp);
    printf("Digite o artista a ser procurado na lista: ");
    fgets(artistTemp, sizeof(artistTemp),stdin);
    StripNewLine(artistTemp);

    for(int i=0; i<structQtd; i++){
        if(!strcmp(nameTemp, vector[i].song_name) && !strcmp(artistTemp, vector[i].artist_name)){
            printf("\n\nMusica encontrada:\n\nMusica: %d\nNome: %s\nArtista: %s\nAno: %d\nDuracao: %d\n\n",i+1, vector[i].song_name, vector[i].artist_name, vector[i].launch_year, vector[i].duration);
            indexTemp = i;
            searchQtd++;
            break;
        }
    }


    if(searchQtd == 0) printf("\nA musica descrita nao foi encontrado na lista. Retornando ao menu...\n");
    else{
        printf("\nInforme os novos dados:\n\n");

        printf("Digite o ano de lancamento: ");
        scanf("%d",&vector[indexTemp].launch_year); 
        ClearBuffer();
        printf("Digite a duracao da musica: ");
        scanf("%d",&vector[indexTemp].duration);
        ClearBuffer();

    }

}

void DeleteSong(playlist vector[]){

    int searchQtd = 0, indexTemp=0;
    char answer, nameTemp[CHAR], artistTemp[CHAR];
    
    printf("Digite a musica a ser procurado na lista: ");
    fgets(nameTemp, sizeof(nameTemp),stdin);
    StripNewLine(nameTemp);
    printf("Digite o artista a ser procurado na lista: ");
    fgets(artistTemp, sizeof(artistTemp),stdin);
    StripNewLine(artistTemp);

    for(int i=0; i<structQtd; i++){
        if(!strcmp(nameTemp, vector[i].song_name) && !strcmp(artistTemp, vector[i].artist_name)){
            printf("\n\nMusica encontrada:\n\nMusica: %d\nNome: %s\nArtista: %s\nAno: %d\nDuracao: %d\n\n",i+1, vector[i].song_name, vector[i].artist_name, vector[i].launch_year, vector[i].duration);
            indexTemp = i;
            searchQtd++;
            break;
        }
    }


    if(searchQtd == 0) printf("\nA musica descrita nao foi encontrado na lista. Retornando ao menu...\n");
    else{
        printf("\nTem certeza que deseja excluir essa musica? s/n\n\n");

        if((answer = getchar()) == 's' || answer == 'S'){

            for(int i=indexTemp; i<structQtd-1; i++){
                vector[i] = vector[i + 1];
            }

            structQtd--;
            printf("\n\nMusica deletada com sucesso! Retornando ao menu...\n\n");

        }
        else printf("\nOk, retornando ao menu...\n\n");

    }
    

}


int main(){

playlist myPlaylist[MAX];
int select;


do{
    printf("\nO que voce deseja fazer?\n1- Incluir musica.\n2- Listar musica.\n3- Pesquisar musica por nome.\n4- Alterar musica\n5- Deletar musica\n6- Sair do menu.\n\n");
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
    AlterSong(myPlaylist);
    break;
    case 5:
    DeleteSong(myPlaylist);
    break;
    case 6:
    break;
    default:
    printf("Digite um comando valido.");
    break;


}



}while(select != 6);

return 0;

}