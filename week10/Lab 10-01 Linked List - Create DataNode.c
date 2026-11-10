#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct DataNode{
    char * data;
    struct DataNode * next;
} DataNode;
 
DataNode * createDataNode(char *input){
    DataNode * pNew = malloc(sizeof(DataNode));
    pNew->data = malloc(strlen(input)+1);
    strcpy(pNew->data, input);
    pNew->next = NULL;
    return pNew;
}
 
int main() {
  char data[101];
  scanf("%[^\n]s", data);
 
  DataNode* pNew = createDataNode(data);
 
  printf("%s\n", pNew->data);
  printf("%p\n", (void*)pNew->next);
 
  return 0;
}