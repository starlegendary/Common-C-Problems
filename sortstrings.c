#include <stdio.h>
#include <string.h>

int main()
{
	// Declare a 2D char array to stores inputs words
	// Maximum 100 input words and each word maximum 10 chars
	char words[100][10];
	char temp[10];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", words[i]);
	}
  
	// Add codes here to sort words
  for(int i=0;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
         if(strcmp(words[i],words[j])>0)
         {
            strcpy(temp,words[i]);
            strcpy(words[i],words[j]);
            strcpy(words[j],temp);
         }
      }    
  }


	for (int i = 0; i <= n; i++) {
		printf("%s\n", words[i]);
	}

  return 0;
}
