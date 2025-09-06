#include <stdio.h>

int main() {
   char userinput;
   int ascii;
   scanf("%c",&userinput);
   ascii = userinput;
   ascii += -64;
   if (ascii < 1 || ascii > 26){
      printf("");
   } else {
      
      int spaces = 0;
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      printf("A\n");
      ascii --;
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      if(ascii>0){printf("ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA\n"); ascii --;}
      for(spaces=ascii; spaces>1; spaces --){printf(" ");} 
      
      }
   /* Type your code here. */

   return 0;
}
