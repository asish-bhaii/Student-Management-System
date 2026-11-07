#include<stdio.h>
#include<string.h>
int main()
{
char name[100][20],roll[100][15];
int marks[100];
char search[20];
int choice, i, lmt=0,found=0;

do
{
  printf("                                       \n");
printf("\n\n--=======student management system=======--\n");
printf("\t1.add student\n");
printf("\t2.display all student\n");
printf("\t3.search student\n");
printf("\t4.find highest marks\n");
printf("\t5.exit\n");

printf("enter your choice:");
scanf("%d",&choice);

switch(choice)
{
//-----------------------------------------//
  case 1:
    if(lmt<100)
{
       printf("Enter student name: ");
       scanf("%s",name[lmt]);

       printf("Enter roll number: ");
       scanf("%s", roll[lmt]);

        printf("Enter marks: ");
        scanf("%d", &marks[lmt]);
       found++;
        lmt++;
        printf("--====added successfully!====--\n");
}
    else
        printf("reached the limit	");
        break;
//---------------------------------------------//
  case 2:
    if(lmt!=0)
{
     
      for(int i=0;i<lmt;i++)
{
       printf("%s",name[i]);
       printf("%s", roll[i]);
       printf("%d",marks[i]);
}
}
    else
    printf("no names");
     break;

  //-----------------------------search-------------------------------------// 

  case 3:
 {
  found =0;
printf("enter a name u want to search:");
scanf("%s",search);

for (i=0;i<lmt;i++)
if(strcmp(name[i],search)==0)
{
printf("---------found----------\n");
printf("name=%s",name[i]);
printf("roll=%s",roll[i]);
printf("marks=%d",marks[i]);
found =1;

}
if (found==0)
printf("\n\n  ---====== name not found ========---\n");
printf("     ======[try again]======\n");
break;

}
//--------------------------------higest marks----------------------------------------------//
 
 
case 4:
{
    if(lmt == 0)
    {
        printf("No students available\n");
    }
    else
    {
        int highest = 0;

        for(i = 1; i < lmt; i++)
        {
            if(marks[i] > marks[highest])
            {
                highest = i;
            }
        }

        printf("\nHighest marks student:\n");
        printf("Name: %s\n", name[highest]);
        printf("Roll: %s\n", roll[highest]);
        printf("Marks: %d\n", marks[highest]);
    }
    break;

}
case 5:
{
printf("==thank you see you again==");
}
}
}
while (choice!=5);
return 0;
}

    



      