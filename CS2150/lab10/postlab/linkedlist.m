#import "listnode.h"
#import <stdio.h>

int main(void) {
  int count;
  listnode *root = [listnode new];
  listnode *current = [listnode new];
  current = root;
  printf("Enter how many values to input: ");
  scanf("%i", &count);
  for(int n = 1; n<= count; n++){
    printf("Enter value %i:  ", n);
    int insert;
    scanf("%i", &insert);
    listnode *temp = [listnode new];
    [temp val: insert];
    int hurdur = [temp val];
    //printf("%i \n", hurdur);
    [current next: temp];
    current = [current next];
  }
  current = [root next];
  for(int n=1; n<=count; n++) {
    int val;
    val = [current val];
    printf("%i \n", val);
    listnode* temp  = [current next];
    [current free];
    current = temp;

  }
}
