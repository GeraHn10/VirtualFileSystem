#include <conio.h>
#include "VirtualFileS.h"

int main(){

	vfs file;
	int pos = 0;;
	
	cout << "Bienvenido a la Terminal" << endl;
	bool ing = true;
		cout << "Nombre para CrearDisco" << endl;
		cout << "CreateDisk:";
		char nombreDisco[20];
		cin >> nombreDisco;
		file.creatdisc(nombreDisco);


		

		
		//cout << file.diskInfo()<<endl;
		
	do {char comand[30];
		cout << "Cd:" <<file.sN(pos)<< endl;
		cout << "Command:" ;
		cin >> comand;
		//cout << pos;
		
	
		
		if (strcmp(comand,"mkdir")==0) {

			cout << "mkdir:";
			char nombreR[30];
			cin >> nombreR;
			
			

		

			file.diskInfo2(pos,nombreR);

		}

		if (strcmp(comand, "ls") == 0) {

			file.ls(pos);

		}
		if (strcmp(comand, "cd") == 0) {

			cout << "cd:";
			char nomcd[30];
			cin >> nomcd;
			if (strcmp(nomcd, "..")==0) {
				pos =file.cdRegreso(pos);
			}
			else {
				pos = file.cd(nomcd, pos);
			}

		}
		if (strcmp(comand, "rm") == 0) {

			int pos1 = pos;
			pos=file.cdRegreso(pos);
			file.diskInfo3(pos1);
			
		}

		if (strcmp(comand, "export")==0) {
			char name[30];
			cout << "export:";
			cin >> name;
			bool ing = file.esarchivo(pos);
			if (ing == true) {


				file.exportar(pos);

			}
			else {

				cout << "no se le agrega informacion a un directorio" << endl;
			}
		}

		if (strcmp(comand, "import") == 0) {
			char name[30];
			cout << "import:";
			cin >> name;
			bool ing = file.esarchivo(pos);
			if (ing == true) {


				file.importar(name, pos);

			}
			else {

				cout << "no se le agrega informacion a un directorio" << endl;
			}


		}
		

		
		if (strcmp(comand, "salir") == 0) {
		ing = false;
		}
		
		

	} while (ing == true);
	_getch();

	return 0;
}