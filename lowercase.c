#include <stdio.h>
#include "casedetect.h"

int main(int argc, char* argv[]) {

    char c;

    while ((c=getchar()) != EOF) {
/* problem here that the lower case characters are also being converted. */        
	if (!casedetect(c)){
	  printf("%c",c);
	}

	else{
	  c = c + 32;
	  printf("%c",c);
	}

    }

    return 0;

}
