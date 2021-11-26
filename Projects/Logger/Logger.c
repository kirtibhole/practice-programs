/*LOGGER*/

#include<stdio.h>
#include<malloc.h>

#include "Logger.h"

/*
#if LOG_FILE_CREATE
FILE *fp = NULL;
#endif
*/

struct Node
{
	int iData;
	struct Node *pNext;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

//##################INSERT FIRST##################//

void InsertFirst(PPNODE Head, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->iData = value;
    newn->pNext = NULL;
    
    if(*Head == NULL)   // jar ll empty asel
    {
        *Head = newn;
    }
    else        // ek node
    {
        newn->pNext = *Head;
        *Head = newn;
    }
}


//################## Display ##################//

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->iData);
        Head = Head -> pNext;
    }
    printf("NULL\n");
}


//################## Delete First ##################//

void DeleteFirst(PPNODE Head)
{
    PNODE temp  = *Head;
    
    if(*Head != NULL)
    {
        *Head = (*Head) -> pNext;
        free(temp);
    }
}
//################## MAIN ##################//

int main()
{
	PNODE pFirst = NULL;
	int  iRet = 0;
	 
	//FILE CREATION//

	FILE * fp=NULL;

    fp = fopen("logger.txt","w"); 
    if(NULL == fp)
    {
        puts("Unable to open file\n");
		return -1;

    }
       //ADD LOG//
#if LOG_MAIN
    #ifndef LOG_FILE_CREATE
	 FILE *fp=NULL;
	 CreateLogFile(&fp);
    #endif

    #if LOG_MAIN
	 fputs("IN MAIN\n",fp);
    #endif

    #if LOG_MAIN
	 fputs("CALLING INSERT FIRST\n",fp);
    #endif
     
	 InsertFirst(&pFirst,10);
	 #if LOG_MAIN
	 fputs("CALLING DISPLAY\n",fp);
     #endif
	 Display(pFirst);

	 #if LOG_MAIN
	 fputs("CALLING Deletefirst\n",fp);
     #endif
	 DeleteFirst(&pFirst);

	  #if LOG_MAIN
	 fputs("CALLING DISPLAY\n",fp);
     #endif
	 Display(pFirst);
#endif
	return 0;
}









