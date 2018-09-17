/**********************
 * EE209 Assignment 1 *
  Name: ANAS 
  ID: 
 **********************/
/* wc209.c */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>



enum { FALSE = 0, TRUE };

typedef enum {
    C_EXIT,       /* exit */
    C_REG,        /* register */
    C_UNREG,      /* unregister */
    C_FIND,       /* find */
    C_FAIL,       /* failure */
    C_EOF         /* end of file */
} Command_T;
enum DFAstates {SPACE,CHARACTER}; 
/* DFA state for checking Characters */
enum DFAstates1 {OFF,ON};
 /* to check the existence of space/ quote/ backslash */
enum DFAstates1 SUCCESS = OFF;
 /* to chek if the DFA is in final state */
enum DFAstates state = CHARACTER; 
/* initial state of the DFA */
enum DFAstates SPACE = OFF, CHARACTER = OFF;
 
int CHAR_count = 0; /* for counting the number of Characters */
int WORD_count = 0; /* for counting the number of Words */
int LINE_count = 0; /* for counting the number of Lines */
/*--------------------------------------------------------------------*/
/* Module to count number of  Characters.                             */
/* Input: Uncommented text froom a file.                              */
/* Return value: Number of characters								  */
/*--------------------------------------------------------------------*/
int Char_Count(char)
{
    int CHRCount=0;

    /* Structure for character count module */
    while ((c = getchar()) != EOF)
        CHRCount++;
    
    return CHRCount;
}

/*--------------------------------------------------------------------*/
/* Module to count number of  Words.	                              */
/* Input: Uncommented text froom a file.                              */
/* Return value: Number of Words   		           					  */
/*--------------------------------------------------------------------*/
int Word_Count(char)
{
    int WRDCount=0;

    /* Structure for Word count module */
    while ((c = getchar()) != EOF)
        WRDCount++;
    
    return WRDCount;
}



/*--------------------------------------------------------------------*/
/* Module to count number of  Lines.	                              */
/* Input: Uncommented text froom a file.                              */
/* Return value: Number of Lines   		           					  */
/*--------------------------------------------------------------------*/
int Line_Count(char)
{
    int LINECount=0;

    /* Structure for Line count module */
    while ((c = getchar()) != EOF)
        LINECount++;
    
    return LINECount;
}



/*--------------------------------------------------------------------*/
/* Module to uncomment the string input.                              */
/* Input: Commented text froom a file.                                */
/* Return value: Uncommented text file.	           					  */
/*--------------------------------------------------------------------*/
char unComment(char)
{
    

    /* Structure for uncomment module */
    while ((c = getchar()) != EOF)
            /* Uncomment everyline of the input file and read to a textt file and return it */
   
    return LINECount;
}




/*--------------------------------------------------------------------*/
/* ================  Main Module. ================                    */
/*--------------------------------------------------------------------*/
int main(const char *argv[])
{
    /* Structure of Main Method 
		Reads a text file and calls Uncomment Method 
		
	    On EXIT_SUCCESS, calls CHAR_count, WORD_count amd LINE_count Modules
		
		On EXIT_FAILURE, call Line_Count module and prints an error Message with its respective line number  */
		
		
    return 0;
}
