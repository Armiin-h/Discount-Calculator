#include <stdio.h>
int main () {
	int lit,cost,a;
    printf("pls input lit :");
	scanf("%d",&lit);
    if (lit<=1000){
        cost=lit*10;
    }
    if (lit>1000 && lit<=3000){
    	cost=lit*20;
    }
    if (lit>3000 && lit<=6000){
    	cost=lit*50;
    }
    if (lit>6000){
    	a=lit-6000;
    	a=a*10;
    	a=a+50;
    	cost=lit*a
    }
    printf("cost = %d\n",cost)
    
}
