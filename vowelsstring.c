

#include <stdio.h>
#include<string.h>
int main()
{
int c=0;
printf("Enter the string:\n");
char str[100];
scanf("%s",str);
//printf("%s",str);
  for(int i=0;i<strlen(str);i++){
      if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
          c++;
      }
      else{
          continue;
      }
  }
  printf("%d",c);
    return 0;
}
