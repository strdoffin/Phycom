#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
typedef struct DataNode{
    char * data;
    struct DataNode * next;
} DataNode;
 
typedef struct SinglyLinkedList{
    unsigned int count;
    DataNode * head;
}SinglyLinkedList;
 
SinglyLinkedList * createSinglyLinkedList(){
    SinglyLinkedList * linkedlist = malloc(sizeof(SinglyLinkedList));
    linkedlist->head = NULL;
    linkedlist->count = 0;
    return linkedlist;
}
 
void traverse(SinglyLinkedList* list){
    if (list->count == 0){
        printf("This is an empty list.\n");
        return;
    }
    DataNode* head = list->head;
    while (head->next != NULL){
        printf("%s -> ", head->data);
        head = head->next;
    }
    printf("%s", head->data);
}
 
DataNode * createDataNode(char *input){
    DataNode * pNew = malloc(sizeof(DataNode));
    pNew->data = malloc(strlen(input)+1);
    strcpy(pNew->data, input);
    pNew->next = NULL;
    return pNew;
}
 
void insert_last(SinglyLinkedList * list, char * data){
    DataNode* pNew = createDataNode(data);
    if (list->count == 0){
        list->head = pNew;
        list->count++;
        return;
    }
    DataNode* head = list->head;
    while(head->next != NULL){
        head = head->next;
    }
    head->next = pNew;
    list->count++;
 
}
 
void insert_front(SinglyLinkedList * list, char* data){
    DataNode* pNew = createDataNode(data);
    if (list->count == 0){
        list->head = pNew;        
    }else{
        pNew->next = list->head;
        list->head = pNew;
    }
    list->count++;
}
 
int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); 
        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }
 
    traverse(mylist);
    // Remember to free allocated memory for each node's data
    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}