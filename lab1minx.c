#include <stdio.h>
int main (){
int N1; 
int N2; 
scanf("%d", & N1);
scanf("%d", & N2);

if (N1>N2){
	int N3 = (N1-N2);
    printf("%d \n",N1);
    printf("Diff \t %d",N3);
} else {
	int N3 = (N2-N1);
    printf("%d \n",N2);
    printf("Diff \t %d",N3);
}
}
