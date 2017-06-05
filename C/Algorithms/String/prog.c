#include "stdio.h"
#include "stdlib.h"
#include "reverseSentence.c"

int main(void)
{
        char *sentence = malloc(sizeof(char) * 200); //sentence = total number of characters in input sentence
		scanf("%[^\n]%*c", sentence);

        if(sentence){
			char **ans = reverseSentence(sentence);
			for(int i = 0; i < 20; i++){
				if(ans[i] != NULL)
					printf("%s", ans[i]);
			}
        }
        else
                printf("Program Error");
		
        free(sentence);
		system("pause");
        return 0;
}