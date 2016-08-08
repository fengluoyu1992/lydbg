#ifndef _PEINFO_H_
#define _PEINFO_H_

#include "ldr/pe.h"
#include <windows.h>


int get_pedata_mapped(char *filename, LPVOID data_strage);



#endif /* _PEINFO_H_ */