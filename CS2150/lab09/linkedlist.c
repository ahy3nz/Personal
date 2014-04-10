/*Alex Yang ahy3nz*/
#include<stdlib.h>
#include<stdio.h>

struct listnode {
   int data;
   struct listnode * next;
};

typedef struct listnode item;

int main() {
   item * iterator, * head;
   int i;
   int size;
   head = NULL;
   printf("Size? ");
   scanf("%d",&size);
   

   for(i=0;i<size;i++) {
      iterator = (item *)malloc(sizeof(item));
     printf("Value? ");
     int dat;
     scanf("%d",&dat);
      iterator->data = dat;
      iterator->next  = head;
      head = iterator;
   }

   iterator = head;

   while(iterator) {
      printf("%d\n", iterator->data);
      item *nex = iterator->next ;
      free(iterator);
      iterator=nex;
   }
   return 0;
}
