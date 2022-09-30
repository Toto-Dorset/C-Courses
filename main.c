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

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void adjustArray(int array[], int size)
{
    int left = 0; //beginning of the array
    int right = size-1; //end of the array

    while(left<right)
    {
        while(array[left]%2 == 0 && left < right)//it means that the numbers are odd or already sort if left > right
        {
            left++;
        }

        while(array[right]%2 == 1 && left < right)//same on the other side
        {
            right--;
        }
        //Here left and right are 2 numbers in the wrong place so we swap them
        if(left < right)
        {
            swap(&array[left], &array[right]);//we use the pointers to exange without any return
            left++;
            right--;
        }
    }

    for(int i =0; i < size; i++)
    {
        if(i != size-1)
        {
            printf("%d - ",array[i]);
        }
        else printf("%d", array[i]);
    }
}



int main()
{
    //firstQuestion();
    //secondQuestion();

    int size;
    printf("Enter the size of the array you want to create : \n");
    scanf("%d", &size);
    int array[size];

    for(int i =0; i < size; i++)
    {
        printf("Value %d : \n", i+1);
        scanf("%d", &array[i]);
    }

    adjustArray(array, size);
    return 0;
}
