#include "casedetect.h"

int casedetect(char c) {

    if (c >= 'A' && c <= 'Z')
      return 1;

    return 0;

}
