#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


/*
Function that generates a text file based on given input
The text file contains a list of integers seperate by new lines
There are 3 keys, of value -50, hidden at size_of_list/4, size_of_list/2, size_of_list x 3/4 =-50
*/
int gen_list(int size_of_list, char* file_name) {

}



/*
Function iterates through the provided section, 
denoted by a start and end index, 
and returns the maximum integer of the provided list
The function only searches up to but not at the end index
*/
void* find_max(int* search_list, int start_index, int end_index){

}




/*
Function iterates through the provided section of a list, and searches for one of the three keys
these keys all equal -50, it will search up to but not at the end index
*/
void* search(int* search_list, int start_index, int end_index){
    
}



/*
Generates a 2d array that contains a range of indices based on the provided size
and the number of threads that will be used
For example if size is n, and the number of threads is m then the format would look like the following:
[[0,ceil(n/m)],[ceil(n/m),ceil(n/m)+ceil(n/m)],...[(m-1)*ceil(n/m),n]]
In total there should be m pair's of indices one for each thread
*/
int** gen_indices(int search_list_size, int num_of_threads){
    
}


/*


*/
int gen_threads(){

}


int main(int argc, char** argv){

}