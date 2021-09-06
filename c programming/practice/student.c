#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 

 

struct Student{

 

    int RollNo;
    char Name[25];
    char gender[1];
    int score;

 

} s[5];

 

 

void main()
{
    int n;
    printf("enter number of students records to be added:\n");
    scanf("%d",&n);
    printf("\n");
    char max_name[25];
    int max=0;
    char min_name[25];
    int min=100;
    do{
    printf("---------------MENU OF OPTIONS--------------\n");
    printf("\n");
    printf("1. Add Student Records\n2. View all student records\n3. Show student who gets the maximum score\n4. Show student who gets the minimum score\n5. Exit\n");
    printf("\n");
    int choice;
    printf("enter a choice:\n");
    scanf("%d",&choice);
   switch(choice)
      {
         case 1:

 

                printf("enter students records:\n");
                printf("\n");
                for(int i=0;i<n;i++)
                  {
                    printf("enter student %d records: \n",i);
                    printf("\n");
                    printf("enter roll number: ");
                    scanf("%d",&s[i].RollNo);
                    printf("enter name: ");
                    scanf("%s", s[i].Name);
                    printf("enter gender: ");
                    scanf(" %s",s[i].gender);
                    printf("enter marks: ");
                    scanf("%d",&s[i].score);
                    printf("\n");
                  }
                  break;

 

        case 2: printf("The students information is as:\n");
                printf("\n");
                for(int i=0;i<n;i++)
                {
                    printf("Student %d details are:\n",i);
                    printf("\n");
                    printf("Roll number=%d\nName=%s\nGender=%s\nMarks=%d\n",s[i].RollNo,s[i].Name,s[i].gender,s[i].score);
                    printf("\n");
                }
                 break;

 

        case 3:
                printf("Student who got the maximum score:\n");
                printf("\n");
                for(int i=0;i<n;i++){
                    if(s[i].score>max){
                        max=s[i].score;
                        strcpy(max_name,s[i].Name);
                    }
                }
                printf("%s has highest score \n",max_name);
                break;

 

        case 4:
                printf("Student who got the least score:\n");
                printf("\n");
                for(int i=0;i<n;i++){
                    if(s[i].score<min){
                        min=s[i].score;
                        strcpy(min_name,s[i].Name);
                        printf("%s got least marks \n",s[i].Name);
                    }
                }
                printf("%s has least score \n",min_name);
                break;

 

        case 5:    exit(0);

 

        default:    printf("Invalid choice,Enter a choice from 1 to 5\n");
                    break;
    }

 

 

  } while(1);
}
