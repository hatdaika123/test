#include "score.h"  // user define header file

int main(void){
	int scores[MAX], marks[MAX];
	int statistics[6]={0}; // for 6 different mark 0-5

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);

	return 0;

}
