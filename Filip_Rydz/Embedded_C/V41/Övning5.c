#include <stdio.h>

    int main(void)
    {
        int num;
        // input assigns number of elements to our array
        printf("Type numbers of arrays: ");
        scanf("%d", &num);
        // declare array, input 'num' sets number of elements
        float theArray[num];
        // set a = 5.5, will be our first element in the Array
        float a = 5.5;  
        // Loop til we have filled the number of elements
        for (int i = 0; i < num; i++)
        {    
            // assign first element with 5.5
            theArray[i] = a;
            // prints out value of [i] element
            printf("%.2f\n", theArray[i]);
            // increase next element with + 5.5 and next + 5.5 and so on...
            a = a + 5.5;
        }
        return 0;
    }