 #include <cs50.h>
 #include <stdio.h>
 #include <stdlib.h>

 int main(void)
 {
  int *numbers = NULL;
  int capacity = 0;

  int size = 0;
  while(true)
  {

   int number = get_int("Number:");

   if (number == INT_MAX)
   {
    break;
   }

   if(size == capacity)
   {
    numbers  = realloc(numbers, sizeof(int) * (size + 1) );
    capacity++;
    //if (tmp == NULL)
    //{
    // return 0;
   // }
   }

   numbers[size] = number;
   size++;

  }

for (int i = 0; i < size; i++)
    {
    printf("You Inputted : %i\n", numbers[i]);
    }

 }