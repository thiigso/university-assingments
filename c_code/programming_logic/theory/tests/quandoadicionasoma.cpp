#include <stdio.h>

int main(){

    int codigo[10],n_vagas[10],candidato_m[10],candidato_f[10];
    int maior_cand_vaga, maior_cand_m, maior_cand_f;
    int m1=0, m2=0, m3=0, soma=0;

    printf("Digite o codigo do 1 curso: ");
    scanf("%d",&codigo[0]);
    printf("Digite o numero de vagas do 1 curso: ");
    scanf("%d",&n_vagas[0]);
    printf("Digite o numero de candidatos masculinos do 1 curso: ");
    scanf("%d",&candidato_m[0]);
    printf("Digite o numero de candidatos femininos do 1 curso: ");
    scanf("%d",&candidato_f[0]);

    maior_cand_vaga = (candidato_f[0]+candidato_m[0])/n_vagas[0];
    maior_cand_m = candidato_m[0];
    maior_cand_f = candidato_f[0];
    //soma+= (candidato_f[0] + candidato_m[0]);

    for(int i=1; codigo[i]>0; i++){

        printf("\nDigite o codigo do %d curso: ", i+1);
        scanf("%d",&codigo[i]);

        if(codigo[i]<0) break;

        printf("Digite o numero de vagas do %d curso: ",i+1);
        scanf("%d",&n_vagas[i]);
        printf("Digite o numero de candidatos masculinos do %d curso: ",i+1);
        scanf("%d",&candidato_m[i]);
        printf("Digite o numero de candidatos femininos do %d curso: ",i+1);
        scanf("%d",&candidato_f[i]);

        if( (candidato_f[i]+candidato_m[i]/n_vagas[i]) > maior_cand_vaga){
            maior_cand_vaga = (candidato_f[i]+candidato_m[i])/n_vagas[i];
            m1=i;
        }
        if(candidato_m[i] > maior_cand_m){
            maior_cand_m = candidato_m[i];
            m2=i;
        }
        if(candidato_f[i] > maior_cand_f){
            maior_cand_f = candidato_f[i];
            m3=i;
        }
    }

    printf("\n\nO maior numero de candidato por vaga e: %d do curso: %d ", maior_cand_vaga, codigo[m1]);
    printf("\n\nO maior numero de candidatos masculino e: %d do curso: %d", maior_cand_m, codigo[m2]);
    printf("\n\nO maior numero de candidatos feminino e: %d do curso: %d", maior_cand_f, codigo[m3]);

    return 0;
}