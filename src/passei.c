
void printSituacao(float minhaNota)
{
    if(minhaNota >= 7.0)
    {
        printf("Aprovado por Nota!\n");
    }
    else //minhaNota < 7.0
    {
        if(minhaNota >= 5.0)
        {
            printf("Prova Final!\n");
        }
        else  //minhaNota < 5.0
        {
            printf("Reprovado por Nota!\n");
        }
    }
}
