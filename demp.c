#include<stdio.h>
#include<conio.h>
struct Player
{
    char playerName[20];
    int matches;
    int TotalRuns;
    int highestScore;
    float averageScore;

};

int main()
{

   int i;
    struct Player no[10];
//input 10 player details
    for(i=0;i<10;i++)
    {
          gets(no[i].playerName);
       scanf("%d%d%d",&no[i].matches,&no[i].TotalRuns,&no[i].highestScore);
    scanf(" %f",&no[i].averageScore);
    }
//find the highest value
i=0;
   int max = no[i].highestScore;
   for( i=1;i<10;i++)
   {
        if(max<no[i].highestScore)
        {
             max = no[i].highestScore;
        }
   }
   printf("highest run:%d",max);

//find who played more than 50 matches and average also
   for(i=0;i<10;i++)
   {
       if(no[i].matches>50 && no[i].averageScore>50 )
       {
           puts(no[i].playerName);
           printf("\n No of Matches:%d\nNo of totalruns%d\nNo of highest runs:%d\nNo of avg:%f",no[i].matches,no[i].TotalRuns,no[i].highestScore,no[i].averageScore);
       }
   }
//find The name start with 'A'
    char playerName[20];
   for(i=1;i<10;i++)
   {
          no[i].playerName;

              if(playerName[i]=='A')
       {
            puts(no[i].playerName);
           printf("\n No of Matches:%d\nNo of totalruns%d\nNo of highest runs:%d\nNo of avg:%f",no[i].matches,no[i].TotalRuns,no[i].highestScore,no[i].averageScore);
       }
   }
}