#include <stdio.h>
#include <stdlib.h>
/* Melanie Dyer */
/* Your task in this question is to complete the functions mystrcpy()
and mystrequal() whose skeleton is given above.
mystrcopy takes in the string (character array) src and copies it to the string (character array)
dst including the null at the end of the string.
This duplicates the functionality of strcpy in strings.h.
Note: You cannot use strcpy in your solution. 
*/
void mystrcpy(char *dst, char *src)
{
/* first my code allocates extra memory to the size of the array, temp. Then,
starting at the index where the extra memory is allocated, add the contents of
src and dst */
char *temp = (char * )malloc(sizeof(char)* (sizeof(src) + sizeof(dst)));
int i = strlen(dst), j = 0;
temp = dst;
for(j, i ; i < strlen(src), j < strlen(src); i++, j++)
{
temp[i] = src[j];
}
dst = temp;
}
/* mystrequal takes two strings (charcter arrays)
and determines if they represent the same sequence of null terminated char’s.
If the two arrays represent the same sequence return 1, otherwise 0. This function
has much of the same functionality of strcmp. Note: You cannot use strcmp in your solut
ion. */
int mystrequal(char *a, char *b)
{
/* this function will compare each character array, index by index . If each
character array’s count matches the size of the strings, return 1, otherwise return 0
*/
int m = 0, count = 0;
for(m; m < (int)strlen(a) || m < (int)strlen(b); m++)
{
  if(a[m] == b[m])
  {
  count++;
  }
}
if(count == strlen(a) && count == strlen(b))
 {
  return 1;
 }
else
  {
  return 0;
  }
}

int main(int argc, char *argv[])
{
char *a = "This string";
char *b = "This string too";
char *c = "This Xtring";
char buf[20];
printf("a=a %d a=b %d a=c %d b=a %d\n",mystrequal(a,a),mystrequal(a,b),mystrequal(a,c
),mystrequal(b,a));
mystrcpy(buf,a);
printf("copy ’%s’\n",buf);
mystrcpy(buf,"");
printf("copy ’%s’\n",buf);
return 0;
}

/* This solution is different from the original solution in Dennis Ritchie's book, C */ 