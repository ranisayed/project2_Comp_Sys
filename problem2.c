#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>


typedef struct tree_node {
    char* name;
    int children_no;
    struct tree_node* children; 
} t_node;

void create_tree_node(pid_t pid, int children_no, t_node* children){

}

void read_tree_file (const char *filename){

}


void print_tree (struct tree_node *root){

}

void gen_proc_tree(t_node root){
    int i;
    pid_t pid;
    for(i = 0; i < root.children_no; i++){
        pid = fork();
    }
    root.pid = pid;


}

int main(int argc, char** argv){
    read_tree_file(argv[1]);
}