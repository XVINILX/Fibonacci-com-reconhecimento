#include <stdio.h>

int a=0, b=1,n=0,k=0;

int main()
{
printf ("Escolha um numero inteiro \n");
scanf ("%d",&k);

while (a<k)
{
a=a+b;
if (a==k){
    printf ("%d esta na sequencia de fibonacci \n", k);
}
b=a+b;
if (b==k){
    printf ("%d esta na sequencia de fibonacci \n", k);
}

}
if (a!=k&&b!=k){
printf ("o numero %d nao esta na sequencia de fibonacci \n", k);
}
system ("PAUSE");
return 0;
}
