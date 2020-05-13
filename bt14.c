#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){    
    FILE *fp;
    fp = fopen("names.txt", "r");
    char names[200][100];
    char *p;
        
    /* Get each name into names[] and replace \n with \0 (NULL) */
    int i=0;
    while((fgets(names[i],sizeof(names[i]), fp)) != NULL) {        
        if ((p = strchr(names[i], '\n')) != NULL) {
            *p = '\0';
        }
        i++;
    }
    fclose(fp);
    
    /*read keyword from the keyboard and remove the line break at the end*/
    printf("Name? ");
    char keyword[BUFSIZ];
    if (fgets(keyword, sizeof(keyword), stdin) != NULL) {
        if ((p = strchr(keyword, '\n')) != NULL)
            *p = '\0';
    }

    int lines[BUFSIZ];
    int k = 0;

    for(int j = 0 ; j < 200 ; j++){
        if(strcmp(names[j], keyword) == 0){
            lines[k] = j;
            k++;
        }
    }

    if(k == 0){
        printf("'%s' not found\n", keyword);
    }
    else{
        printf("'%s' found in line: ", keyword);
        for(int j = 0 ; j < k ; j++){
            printf("%d", lines[j] + 1);
            if(j < k - 1){
                printf(", ");
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}