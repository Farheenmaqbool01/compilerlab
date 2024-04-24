#include <stdio.h>
#include<string.h>

int main() {
    char pt[100];
    char ct[100];
    int key=3;
    int i;
    printf("Enter the plain text: ");
    gets(pt);
    for( i=0; i<strlen(pt); i++){
    	
        if (pt[i] >= 'A' && pt[i] <= 'Z') {
        	
            ct[i] = (pt[i]  + key-'A') % 26 + 'A';
            
        } else if (pt[i] >= 'a' && pt[i] <= 'z') {
        	
            ct[i] = (pt[i] + key - 'a') % 26 + 'a';
        }
    }
     for(i=0;i<strlen(pt);i++)
     {
     	printf("%c",ct[i]);
	 }
	 return 0;
}
