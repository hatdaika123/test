// this file contains the definition of function input_score()
#include "score.h"
#include <stdio.h> //printf() and scanf()

void input_scores(int s[]){
   int i, input=0;
   printf("Enter scores, %d to stop", SENTINEL);
   for(i=0; i<MAX && input!=SENTINEL; i++){
      printf("%d: ", i+1);
      scanf("%d: ", &input);
      s[i] = input;
   }  // end of for
   printf("%d scores are given.\n", i);
}     // end of function
