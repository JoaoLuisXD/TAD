#ifndef __TAD_MATRIZ_C__
    #define __TAD_MATRIZ_C__

    MMatriz cria_mat(int m, int n)
    {
        MMatriz mat = (MMatriz)malloc(sizeof(Matriz));
        mat->linhas = m;
        mat->colunas = n;
        

        mat->v = (float**)malloc(m*sizeof(float*));
        for(int i=0;i<m;i++)
        {
            mat->v[i]=(float*)malloc(n*sizeof(float));
            for(int j=0;j<n;j++)
            {
                scanf("%f",&mat->v[i][j]);
            }
        }
        return mat;
    }
    void libera_mat(MMatriz mat)
    {
        for(int i=0;i<mat->linhas;i++)
        {
            free(mat->v[i]);
        }
        free(mat->v);
        free(mat);
    }
    float acessa_mat(MMatriz mat,int i, int j)
    {
        return mat->v[i][j];
    }
    void atribui_mat(MMatriz mat, int i, int j, float v)
    {
        mat->v[i][j] = v;
    }
    int linhas_mat(MMatriz mat)
    {
        return mat->linhas;
    }
    int colunas_mat(MMatriz mat)
    {
        return mat->colunas;
    }

#endif