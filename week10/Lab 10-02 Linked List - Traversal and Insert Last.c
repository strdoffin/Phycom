#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
//datanode struct
typedef struct DataNode{
    char* data;
    struct DataNode* next;
}DataNode;
 
//singly struct
typedef struct SinglyLinkedList{
    unsigned int count;
    DataNode* head;
}SinglyLinkedList;
 
//create dataNode
DataNode* createDataNode(char* data){
    DataNode* pNew = malloc(sizeof(DataNode));
    pNew->data = malloc(sizeof(char)* (strlen(data)+1));
    strcpy(pNew->data, data);
    pNew->next = NULL;
    return pNew;
}
 
//create singly
SinglyLinkedList* createSinglyLinkedList(){
    SinglyLinkedList* linkedlist = malloc(sizeof(SinglyLinkedList));
    linkedlist->count = 0;
    linkedlist->head = NULL;
    return linkedlist;
}
 
//insert last
void insert_last(SinglyLinkedList* link, char* data){
    DataNode* pNew = createDataNode(data);
    if (link->count == 0){
        link->head = pNew;
    }else{
        DataNode * ptr = link->head;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    link->count++;
}
//insert front
//traverse
void traverse(SinglyLinkedList *link){
    if (link->count == 0){
        printf("This is an empty list.\n");
        return;
    }
    DataNode* ptr = link->head;
    while(ptr->next != NULL){
        printf("%s -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("%s",ptr->data);
}
 
int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);
 
        if (condition == 'F') {
            ;
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
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}