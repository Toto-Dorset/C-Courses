#include <stdio.h>

void firstQuestion()
{
    int dollar;
    int nbSodas = 0;
    printf("How much do you want to pay ?\n");
    scanf("%d",&dollar);

    nbSodas = dollar;
    nbSodas += dollar/2;

    printf("You have %d free sodas\n",dollar/2);
    printf("You can have : %d sodas.\n",nbSodas);
    scanf("");
    
}

void secondQuestion()
{
    int nbMarks = 0;
    printf("How many marks do you have ?\n");
    scanf("%d",&nbMarks);

    int tabMarks[nbMarks];

    for(int i = 0;i < nbMarks; i++)
    {
        printf("Enter the mark nb %d : \n", i+1);
        scanf("%d", &tabMarks[i]);
    }

    int totalMarks = 0;
    for(int j =0; j < nbMarks; j++)
    {
        totalMarks += tabMarks[j];
    }
    printf("The total of your marks is : %d\n", totalMarks);
    float average = (float)totalMarks/nbMarks;
    printf("Your average grades is %f : \n", average);

}

int main()
{
    //firstQuestion();
    secondQuestion();
    return 0;
}