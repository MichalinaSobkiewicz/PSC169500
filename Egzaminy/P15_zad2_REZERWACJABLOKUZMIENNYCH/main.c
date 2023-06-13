float *init_block()
{
    float *wsk= malloc(4*sizeof(float));
    wsk[0]= 0.5;
    wsk[1]= 1.5;
    wsk[2]= 2.5;
    wsk[3]= 3.5;
    return &wsk[0];
}



int main()
{
    float *wsk= init_block();
    printf("%lf\n", *wsk);
    printf("%lf\n", *(wsk+1));
    printf("%lf\n", *(wsk+2));
    printf("%lf\n", *(wsk+3));

    free(wsk);
    return 0;
}
