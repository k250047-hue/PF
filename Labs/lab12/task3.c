#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student
{
  char name[30];
  int marks;
} Student;

int main(void) {
  Student **stds = NULL;
  int n = 0;
  printf("Enter number of student: ");
  scanf("%d",&n);
  getchar();
  for (int i = 0; i < n; i++){
    stds =realloc(stds,sizeof(Student*)*(i+1));
    Student *std = malloc(1*sizeof(Student));
    
    printf("Name : ");
    fgets(std->name,sizeof(char)*30,stdin);
    std->name[strcspn(std->name,"\n")] = '\0';

    printf("Marks : ");
    scanf("%d",&std->marks);
    getchar();

    stds[i] = std;
  }
  printf("Students list (75 marks above) \n");
  for (int i = 0; i < n; i++){
    if(stds[i]->marks>75){
      printf("Name : %s | Marks : %d\n",stds[i]->name,stds[i]->marks);
    }
    free(stds[i]);
  }
  free(stds);

  return 0;
}