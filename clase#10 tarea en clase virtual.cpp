

#include <iostream>
#include <string.h>
using namespace std;
	struct coleccion_cd {
		
	
    char b[13];
    char b1[13];
    char b2[13];
    char b3[13];
     char b4[13];
     char b5[13];
     char b6[13];
    char b7[13];
     char b8[13];
      char b9[13];
  }cd1,cd2,cd3,cd4,cd5,cd6,cd7,cd8,cd9,cd10;
int main (){
cout<<"JEXS S.A"<<endl;
cout<<"Departamentos en la empresa: gerencia, administracion, produccion."<<endl;
	int a,e,f,a1,e1,a2,e2,a3,e3,a4,e4,a5,e5,a6,e6,a7,e7,a8,e8,a9,e9;
	string c,c1,c2,c3,c4,c5,c6,c7,c8,c9,d,d1,d2,d3,d4,d5,d6,d7,d8,d9;
	cout<<"base de datos de empleados contratados: "<<endl;
	cout<<"<-----empleado 1----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a;
	cout<<"nombre de empleado"<<endl;
	cin>>cd1.b;
	cout<<"puesto"<<endl;
	cin>>c;
	cout<<"departamento"<<endl;
	cin>>d;
	cout<<"salario Q";
	cin>>e;
		cout<<"<-----empleado 2----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a1;
	cout<<"nombre de empleado"<<endl;
	cin>>cd2.b1;
	cout<<"puesto"<<endl;
	cin>>c1;
	cout<<"departamento"<<endl;
	cin>>d1;
	cout<<"salario Q";
	cin>>e1;
		cout<<"<-----empleado 3----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a2;
	cout<<"nombre de empleado"<<endl;
	cin>>cd3.b2;
	cout<<"puesto"<<endl;
	cin>>c2;
	cout<<"departamento"<<endl;
	cin>>d2;
	cout<<"salario Q";
	cin>>e2;
		cout<<"<-----empleado 4----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a3;
	cout<<"nombre de empleado"<<endl;
	cin>>cd4.b3;
	cout<<"puesto"<<endl;
	cin>>c3;
	cout<<"departamento"<<endl;
	cin>>d3;
	cout<<"salario Q";
	cin>>e3;
		cout<<"<-----empleado 5----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a4;
	cout<<"nombre de empleado"<<endl;
	cin>>cd5.b4;
	cout<<"puesto"<<endl;
	cin>>c4;
	cout<<"departamento"<<endl;
	cin>>d4;
	cout<<"salario Q";
	cin>>e4;
		cout<<"<-----empleado 6----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a5;
	cout<<"nombre de empleado"<<endl;
	cin>>cd6.b5;
	cout<<"puesto"<<endl;
	cin>>c5;
	cout<<"departamento"<<endl;
	cin>>d5;
	cout<<"salario Q";
	cin>>e5;
		cout<<"<-----empleado 7----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a6;
	cout<<"nombre de empleado"<<endl;
	cin>>cd7.b6;
	cout<<"puesto"<<endl;
	cin>>c6;
	cout<<"departamento"<<endl;
	cin>>d6;
	cout<<"salario Q";
	cin>>e6;
		cout<<"<-----empleado 8----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a7;
	cout<<"nombre de empleado"<<endl;
	cin>>cd8.b7;
	cout<<"puesto"<<endl;
	cin>>c7;
	cout<<"departamento"<<endl;
	cin>>d7;
	cout<<"salario Q";
	cin>>e7;
		cout<<"<-----empleado 9----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a8;
	cout<<"nombre de empleado"<<endl;
	cin>>cd9.b8;
	cout<<"puesto"<<endl;
	cin>>c8;
	cout<<"departamento"<<endl;
	cin>>d8;
	cout<<"salario Q";
	cin>>e8;
		cout<<"<-----empleado 10----->\n";
	cout<<"codigo de empleado"<<endl;
	cin>>a9;
	cout<<"nombre de empleado"<<endl;
	cin>>cd10.b9;
	cout<<"puesto"<<endl;
	cin>>c9;
	cout<<"departamento"<<endl;
	cin>>d9;
	cout<<"salario Q";
	cin>>e9;
	do{

	cout<<"1.-despliegue de empleados"<<endl;
	cout<<"2.-plantilla total"<<endl;
	cout<<"3.-salir"<<endl;
	cin>>f;
	switch (f){
		case 1:
			cout<<cd1.b<<"\n"<<cd2.b1<<"\n"<<cd3.b2<<"\n"<<cd4.b3<<"\n"<<cd5.b4<<"\n"<<cd6.b5<<"\n"<<cd7.b6<<"\n"<<cd8.b7<<"\n"<<cd9.b8<<"\n"<<cd10.b9<<endl;
			break;
			case 2:
			cout<<"codigo de empleado"<<"          "<<"nombre de empleado"<<"                 "<<"puesto"<<"                "<<"departamento"<<"    "<<"salario"<<endl;
			cout<<     a               <<"                            "<<cd1.b         <<"                                  "<<         c                 <<"  \t              "<<      d     <<"               "<<  e       <<endl;
			cout<<     a1              <<"                            "<<cd2.b1        <<"                                  "<<         c1                <<"  \t              "<<      d1    <<"               "<< e1       <<endl;
			cout<<     a2              <<"                            "<< cd3.b2       <<"                                  "<<         c2                <<"  \t              "<<      d2    <<"               "<< e2       <<endl;
			cout<<     a3              <<"                            "<< cd4.b3       <<"                                  "<<         c3                <<"  \t              "<<      d3    <<"               "<< e3       <<endl;
			cout<<     a4              <<"                            "<< cd5.b4       <<"                                  "<<         c4                <<"  \t              "<<      d4    <<"               "<< e4       <<endl;
			cout<<     a5              <<"                            "<< cd6.b5       <<"                                  "<<         c5                <<"  \t              "<<      d5    <<"               "<< e5       <<endl;
			cout<<     a6              <<"                            "<< cd7.b6       <<"                                  "<<         c6                <<"  \t              "<<      d6    <<"               "<< e6       <<endl;
			cout<<     a7              <<"                            "<< cd8.b7       <<"                                  "<<         c7                <<"  \t              "<<      d7    <<"               "<< e7       <<endl;
			cout<<     a8              <<"                            "<< cd9.b8       <<"                                  "<<         c8                <<"  \t              "<<      d8    <<"               "<< e8       <<endl;
			cout<<     a9              <<"                            "<< cd10.b9      <<"                                  "<<         c9                <<"  \t              "<<      d9    <<"               "<< e9       <<endl;
			cout                       <<"                            "<<    10        <<"                                                                        "<<e+e1+e2+e3+e4+e5+e6+e7+e8+e9 <<endl;
		}
	}while (f!=3);

return 0;	
}
