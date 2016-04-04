#include "stdio.h"
#include "string.h"

int main()
{
	FILE* file;
	char readStr[256], scanStr[256], check = 0;
		
	if(file = fopen("file.txt", "r"))
	{
		while(1)
		{
			check = 0;
			puts("Enter string: ");
			gets(scanStr);
			if(strcmp(scanStr, "exit") == 0)
				break;
				
			while(fgets(readStr, sizeof(readStr), file))
			{
				if(readStr[strlen(readStr)-1] == '\n')
					readStr[strlen(readStr)-1] = '\0';
				
				if(strcmp(scanStr, readStr) == 0)
				{
					puts("YES");
					check = 1;
					break;
				}
			}
			
			if(!check)
				puts("NO");
			
			fseek(file, SEEK_SET, 0);
		}
		fclose(file);
	}
	
	//gets(string);
	//printf("%s", string);
	
	/*while(string)
	{
		printf("%c", string);
		string++;
	}*/
	return 0;
}