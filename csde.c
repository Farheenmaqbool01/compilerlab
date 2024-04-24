 #include<stdio.h>
#include<string.h>

	int main() {
    char pt[100];
    char ct[100];
    int key=3;
    int i;
   
    printf("Enter the cipher text: ");
    gets(ct);
    for( i=0; i<strlen(ct); i++){
    	
        if (ct[i] >= 'A' && ct[i] <= 'Z') {
        	
            pt[i] = (ct[i]  - key-'A') % 26 + 'A';
            
        } else if (ct[i] >= 'a' && ct[i] <= 'z') {
        	
            pt[i] = (ct[i] - key - 'a') % 26 + 'a';
        }
    }
     for(i=0;i<strlen(ct);i++)
     {
     	printf("%c",pt[i]);
	 }
	 return 0;
}
