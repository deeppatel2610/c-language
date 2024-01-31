 #include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter your value a b c d e :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	(a>b) ? (a>c) ? (a>d) ? (a>e) ? printf("a maximum") : printf("e maximum") : (d>e) ? printf("d maximum") : printf("e maximum") :(c>d) ? (c>e) ? printf("c maximum") : printf("e maximum") : (d>e) ? printf("d maximum") : printf("e maximum") : (b>c) ? (b>d) ? (b>e) ? printf("b maximum") : printf("e maximum") : (d>e) ? printf("d maximum") : printf("e maximum") : (c>d) ? (c>e) ? printf("c maximum") : printf("e maximum") : (d>e) ? printf("d maximum") : printf("e maximum");
}