#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *data;
    struct node *next;
} Node;

Node *new_node(char *data) {
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insert(Node **head, char *data) {
    if (*head == NULL) {
        *head = new_node(data);
    } else {
        Node *cur = *head;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = new_node(data);
    }
}

Node *build_path_dirs_linked_list() {
    Node *linked_list = NULL;
    char *path_dirs = getenv("PATH");
    
    char *dir = strtok(path_dirs, ":");
    while (dir != NULL) {
        insert(&linked_list, dir);
        dir = strtok(NULL, ":");
    }
    return linked_list;
}