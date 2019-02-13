#pragma once
#ifndef VirtualFileS_H
#define VirtualFile_H
#include "structs.h"
#include <string.h>
class vfs {

public:
	char *bitmap;
	void creatdisc(char name[20]);
	int diskInfo();
	void diskInfo2(int padre,char name [30]);
	void diskInfo3(int padre);
	void makedir(int,int, bool,char name [30]);
	int cd( char name[30],int padre);
	int cdRegreso(int n);
	bool esarchivo(int padre);
	bool rm(int pos);
    string sN(int n);
	int retN();
	void wrtB(char * bitmap);
	void importar(char name[100], int padre);
	void ls(int Padre);
	void exportar(int padre);
};




#endif // !"VirtualFileS.h"