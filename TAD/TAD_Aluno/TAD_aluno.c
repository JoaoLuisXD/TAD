#ifndef __TAD_ALUNO_C__
#define __TAD_ALUNO_C__

AAluno *cria_aluno(int n)
{
    AAluno* luno = (AAluno*)malloc(n*sizeof(AAluno));
    for(int i=0;i<n;i++)
    {
        luno[i] = NULL;
    }
    return luno;
}
void insere_aluno(AAluno *a,int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == NULL)
        {
            a[i] = (AAluno)malloc(sizeof(Aluno));
            printf("matricula: ");
            scanf("%d%*c",&a[i]->matricula);
            printf("nome: ");
            scanf("%99[^\n]", a[i]->nome);
            printf("idade: ");
            scanf("%d%*c",&a[i]->idade);
            printf("curso: ");
            scanf("%s%*c",a[i]->curso);
            
        }
        else printf("ESPACO OCUPADO");
    }
}
void busca_aluno(AAluno *a, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] != NULL && a[i]->matricula == m)
        {
            printf("ALUNO ENCONTRADO\n");
            printf("informacoes do aluno\n---------------------------\n");
            printf("mat : %d\n",a[i]->matricula);
            printf("nome : %s\n",a[i]->nome);
            printf("idade : %d\n",a[i]->idade);
            printf("curso : %s\n",a[i]->curso);
        }
        else printf("aluno nao encontrado");
    }
}
void listar_aluno(AAluno *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] != NULL)
        {
            printf("mat: %d\n",a[i]->matricula);
            printf("nome: %s\n",a[i]->nome);
            printf("idade: %d\n",a[i]->idade);
            printf("curso: %s\n",a[i]->curso);
            printf("---------------------------\n");
        }
    }
}
void remove_aluno(AAluno *a, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i]->matricula == m)
        {
            a[i] = NULL;
        }
    }
}
void libera_aluno(AAluno *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
}
void modifica_aluno(AAluno *a, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        int escolha;
        if(a[i]->matricula == m)
        {
            switch (escolha)
            {
            case 1:
                printf("novo nome: ");
                fgets(a[i]->nome,100,stdin);
            case 2:
                printf("nova idade: ");
                scanf("%d",&a[i]->idade);
            case 3:
                printf("novo curso: ");
                fgets(a[i]->curso,100,stdin);
            
            default:
                printf("nao tem esse numero");
                break;
            }
        }
    }
}

#endif