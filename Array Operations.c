#include <stdio.h>

int main()
{
    int a1[100];
    int no_of_element, element, i, choice, pos;
    char con;
    
    //initialize array
    printf("Enter number of elements");
    scanf("%d",&no_of_element);
    for(i=0;i<no_of_element;i++)
    {
        printf("Enter element");
        scanf("%d", &a1[i]);
    }
    
    do
    {
    
        //print Menu Options
        printf("Enter your choice\n 1. Insertion \n 2. Deletion with Postion \n 3. Deletion with Element \n 4. Display \n");
        scanf("%d", &choice);
        
        //printf("%d",no_of_element);
        switch(choice)
        {
            //insertion
            case 1: 
            if(no_of_element!=100)
            {
                printf("Enter element to be inserted");
                scanf("%d", &element);
                a1[no_of_element]=element;
                no_of_element+=1; //increase array size by 1
                printf("Elements: %d", no_of_element);
            }
            else
            {
                printf("ARRAY IS FULL (OVERFLOW)");
            }
            break;
        
            //Deletion_A
            case 2:
             if(no_of_element==0)
             {
               printf("ARRAY IS EMPTY (UNDERFLOW)");
             }
             else
             {
                
                printf("Enter position of element to be deleted");
                scanf("%d",&pos);
                for(i=pos-1;i<no_of_element;i++)
                {
                    a1[i]=a1[i+1];
                }
                no_of_element--;   //decrease size by 1
            }    
            break;
            //Deletion_B (delete first entry only)
            case 3:
            if(no_of_element!=0)
            {
                printf("Enter element to be deleted");
                scanf("%d",&element);
            
                //find the first position
                pos=-1;
                for(i=0; i<no_of_element;i++)
                {
                    if(a1[i]==element)
                        pos=i+1;
                }
                if(pos!=-1)
                {
                    for(i=pos-1;i<no_of_element;i++)
                    {
                        a1[i]=a1[i+1];
                    }
                    no_of_element--;     //decrease size by 1
                }
                else
                {
                    printf("\nElement is not present in array");
                }
            }
            else
            {
                printf("ARRAY IS EMPTY (UNDERFLOW)");
            } 
            break;
            case 4:
                //printing state of array
                printf("\nCurrent state of array ");
                for(i=0;i<no_of_element;i++)
                {
                    printf("%d \t", a1[i]);
                }
                break;
            default:
                printf("\nNot a valid Option");
        }
        printf("\nDo you want to perform some more operations (y/n)?");
        scanf("%s", &con);
    }while(con=='Y' || con == 'y');
    return 0;
}