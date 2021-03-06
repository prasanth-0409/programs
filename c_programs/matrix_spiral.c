#include <stdio.h>

// Print all the elements of a matrix, in spiral form, starting from
// last row and last column.
int main()
{
	int row=5, col=5;
	//int row = 3, col = 2;

#if 0 
	int array[4][3] = {
		            {1,2,3},
		            {4,5,6},
		            {7,8,9},
		            {10,11,12}
		         };
	int array[2][3] = {
		           {1,2,3},
			   {4,5,6}
		         };
#endif
	int array[6][6] = {
		           {1,    2,    3,   4,    5,   6},
		           {11,   22,   33,  44,   55,  66},
		           {111,  222,  333, 444,  555, 666},
		           {10,   20,   30,  40,   50,  60},
		           {100,  200,  300, 400,  500, 600},
		           {1000, 2000, 3000,4000, 5000,6000},
		          };
        int start_row = 0, start_col = 0;
	int last_row = row, last_col = col;
	int i = 0;

	while ( (start_row < last_row) && (start_col < last_col)){
		for ( i = last_row; i >=start_row; --i){
			printf("%2d ", array[i][last_col]);
		}
		for ( i = last_col-1; i >=start_col; --i){
			printf("%2d ", array[start_row][i]);
		}
		for ( i = start_row + 1; i <=last_row; ++i){
			printf("%2d ", array[i][start_col]);
		}
		for ( i = start_col+1; i <=last_col-1; ++i){
			printf("%2d ", array[last_row][i]);
		}
		++start_row;
		--last_row;
		++start_col;
		--last_col;
	}
}
