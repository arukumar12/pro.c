#include <stdio.h>
int main()
{
    int arr[60];
    int size;
    int i, j, temp;
    printf("Enter size of array: ");
    scanf("%d\n", &size);
    
    for(i=0; i<size; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
        
    }
	return 0;
}
