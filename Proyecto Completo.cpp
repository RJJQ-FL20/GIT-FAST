#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<conio.h>
#include <time.h>
#include<string.h>
#include <windows.h> 
#include<fstream>

using namespace std;


// Declaraciones de Ashly
/*****************************/

struct tProduc{
	int num;
	int cod;
	char categoria[40];
	char nombre[40];
	char descripcion[60];
	double precio;
	int stock;
};

struct tVenta{
	long long int dni; 
	char nombre[40];
	char apellido[60];
	long long int modo_pago;	
};	

	int cod_venta[100];	
	int unidades[100];
	double precio_venta[100];
	double total [100];
		
	//Variables para struct tVenta	
	long long int dni1; 
	char nombre2[40];
	char apellido2[60];
	long long int modo2;
	
	int t=0;
	int cont=0;

//Menu
void tienda4();
void menu_tienda4();
void menu_tcliente1();
void menu_tpersonal9();
void menu_tcliente_woman();

//Cliente
void tcliente_lectura_cuidadoFa();
void tcliente_lectura_limpiadores();
void tcliente_lectura_cuidadoCa();
void tcliente_lectura_fijacion();

//Almacen
void menu_tpersonal_Registrar0();
void menu_tpersonal_Reporte0(); 
void menu_tpersonal_agregar0();
void menu_tpersonal_quitar0();
void menu_tpersonal_eliminar0();

//Sistema de venta
void sistema_venta();
void boleta_electronica(tVenta);


// Declaracion de Karen
/***************************/

struct tProduct{
		int num;
		int cod;
		char categoria[40];
	    char nombre[40];
	    char autor[40];
		double precio;
		int stock;
};

//	Arreglos globales
	int compratk[100];
	int compratp[100];
	int compratn[100];
	 
	int k=0; // Para saber si ahi alguna compra del cliente
	int unidad; // Por la cantidad de productos que se multiplica

//MENU PRINCIPAL
int tienda_principal();

//Menus de tiendas
void tienda_2();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();

 
//Archivos Txt
void mostrar_proveedores();
void codigodelproducto();
void productos();
void inventario();
void clientes();
void registro_facturas();
void ventas();

//Almacen Archivos Binarios
void menu_tpersonal_Regis();
void menu_tpersonal_Repor();
void menu_tpersonal_elim();

//ventas Txt
void venta_productos();
 

// Declaracion de Wilson
/**************************/

struct tProducto{
	int num;
	int cod;
	char categoria[50];
	char nombre[40];
	char descripcion[60];
	double precio;
	int stock;
};
	
struct clientela{
	char nom[20];
	char apellidos[50];
	long long int dni; 
	long long int modo;	
};

//Arreglos globales
	int comprascv[100];
	int comprasuv[100];
	double compraspv[100];
	
	int ope=0;
	int q=0;
	int cod;
	float uni;	
	int xz;
	int opf;


void estructura_general();
void menu_tienda();
void menu_tcliente();
void menu_tpersonal();

//Variedad de vinos
void menu_tcliente_vinos();
void tcliente_lectura_rosado();
void tcliente_lectura_espumoso();
void tcliente_lectura_blanco();
void tcliente_lectura_tinto();

//Variedad de wiskys
void menu_tcliente_wiskys();
void tcliente_lectura_walker();
void tcliente_lectura_ballantines();
void tcliente_lectura_daniels();

//Variedad de ron
void menu_tcliente_ron();
void tcliente_lectura_cartavio();
void tcliente_lectura_flor();

//Variedad de vodka
void menu_tcliente_vodka();
void tcliente_lectura_absolut();
void tcliente_lectura_danzka();


//Almacen
void menu_tpersonal_Registrar();
void menu_tpersonal_Reporte(); 
void menu_tpersonal_agregar();
void menu_tpersonal_quitar();
void menu_tpersonal_eliminar();

//Venta
void venta_productoo();	
void boletaa(clientela);


// Declaracion de Walter
/*************************/

// 		Estruturas
struct producto{
	int codigo;
	char nombre[40];
	int unidad;
	int precio_compra;
	int precio_venta;	
}; 

struct cliente{
	char nombr[15];
	char apellidos[40];
	long long int dni; 
	long long int modo;		
};

//	Arreglos Globales
	int comprasc[100];
	int comprasu[100];
	int comprasp[100];

	int entrada;
	
	int op;
	int mar;
	int esp;
	int con;
	int xy;
	int unid;
	int i=0;
	int sumau=0;
	
	
void estructura();
void menu_inicial();
void tiendas();
void tienda_1();
	
void productos_mac();
void productos_ipad();	
void productos_iphone();
void productos_watch();	
		
void entrada_almacen();
void lectura();
void reporte();
void unidad_a_descontar();
void eliminar_producto_w(); ///implementar
	
void venta_producto();	
void registra_productos();

void boleta(cliente);
void boletas_1(cliente);
	
//void registra_productos()
		
void gotoxy(int x,int y)
{  
	HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  
		
int main()
{
	estructura();
	return 0;
}

void estructura()
{	
	menu_inicial();
	
	if(entrada==1)
	{
		tiendas();
	}								
}

void menu_inicial()
{
	do{
		system("cls");
		system("color 6");
		gotoxy(30,5); 
		cout<<"|------------------------------------------------------|";
		gotoxy(30,6);
		cout<<"|               SISTEMA DE COMPRAS Y VENTAS            |";
		gotoxy(30,7);
		cout<<"|------------------------------------------------------|";
		
		gotoxy(30,9);
		cout<<"|------------------------------------------------------|";
		gotoxy(30,10);
		cout<<"|            CENTRO COMERCIAL MEGATIENDITAS            |";
		gotoxy(30,11);
		cout<<"|------------------------------------------------------|";
		cout<<endl<<endl;
	
		gotoxy(30,13);
		
		cout<<" Ingresar al centro comercial  ( Si-> 1 / Salir-> 0 )  = ";
		cin>>entrada;
		
		if(entrada==0) exit(1);
			
	  }while(entrada!=1 && entrada!=0);		
		
}
		

void tiendas()
{
	system("cls");
	system("color 6");
	gotoxy(15,2);
	cout<<"|--------------------------|";
	gotoxy(15,3);
	cout<<"|     NUESTRAS TIENDAS     |";
	gotoxy(15,4);
	cout<<"|--------------------------|"<<endl;
		
	cout<<"\n [1] TIC APPLE             <*-*> "<<endl;
	cout<<"\n [2] LICORERY BLUMARKET    <*-*> "<<endl;
	cout<<"\n [3] BOOKS HOUSE           <*-*> "<<endl;
	cout<<"\n [4] LOREASH' NATURA       <*-*> "<<endl;
	cout<<"\n [5] SALIR                 <*-*> "<<endl;
	do{
	cout<<"\n\nELIGA SU OPCION : ";cin>>op;
	}while(op<0 || op>5);		
	
	//Aqui van todas las tiendas
	
	if(op==1) tienda_1(); //Walter Abregu
	if(op==2) estructura_general();// Wilson Zaciga
	if(op==3) tienda_principal(); // Karen Castañeda
	if(op==4) tienda4();// Ashly Aguilar
	if(op==5) estructura();		
	 				
}

void tienda_1()
{
	
struct cliente t;	
	
int aq,din1=0,tin1=0; 
	
do{	
	system("cls");
	system("color 2");
	 	cout<<"      \t _____________________________________"<<endl;
        cout<<"      \t|                                     |"<<endl;
        cout<<"      \t|                                     |"<<endl;
        cout<<"      \t|         *** BIENVENIDOS***          |"<<endl;
        cout<<"      \t|              TIC APPLE              |"<<endl;
        cout<<"      \t|                                     |"<<endl;
        cout<<"      \t|  /--------------------------------- |"<<endl;
        cout<<"      \t|  |  _    _    _ _    _    _    _  | |"<<endl;
        cout<<"      \t|  | |_|  |_|  | | |  |_|  |_|  |_| | |"<<endl;
        cout<<"      \t|  |           | | |                | |"<<endl;
        cout<<"      \t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	
	cout<<endl;
	cout<<" NUESTROS PRODUCTOS !"<<endl;
	cout<<endl;
	cout<<" [1] ->  MAC       "<<endl;
	cout<<" [2] ->  IPAD      "<<endl;
	cout<<" [3] ->  IPHONE    "<<endl;
	cout<<" [4] ->  WATCH     "<<endl;
	cout<<endl<<endl;
	
	cout<<" [5] -> PERSONAL DE LA TIENDA"<<endl;
	cout<<" [6] -> SALIR DE LA TIENDA   "<<endl;
	cout<<endl<<endl;
	cout<<"|---------------------|"<<endl;
	cout<<"|  INGRESE SU OPCION  |"<<endl; 
	cout<<"|------------------>  ";
	
	cin>>mar;
	
	if(mar==1) productos_mac();
	if(mar==2) productos_ipad();	
	if(mar==3) productos_iphone();
	if(mar==4) productos_watch();
	if(mar==5) entrada_almacen();
	
 do{
	
	if(mar==6) 
	{
		system("cls");
		xy=1;
		if(xy==1 && i>0 )
		{
			cout<<"\n Para imprimir su BOLETA ELECTRONICA - Ingrese sus DATOS  \n"<<endl;
			
			do{ //modificar orig		
				cout<<"DNI :";
				cin>>t.dni;
				cout<<endl;
				
				if(t.dni>0 && t.dni>9999999 && t.dni<100000000)
				{
				cout<<"NOMBRE : ";
				cin>>t.nombr; //cambiar orig
				fflush(stdin);
				cout<<endl;
				
				cout<<"APELLIDOS : ";
				cin.getline(t.apellidos,30,'\n');
				fflush(stdin);
				cout<<endl;
				
				do{
				cout<<"INGRESE SU NUMERO DE TARJETA : ";
				cin>>t.modo;

						if(t.modo>0 && t.modo>999999999999999 && t.modo<10000000000000000)
						{
							cout<<"GRACIAS EL MONTO FUE DESCONTADO . "<<endl;
									
						}
						else
						{
						
							cout<<"NUMERO DE TARJETA INCORRECTO ! "<<endl;
							tin1=1;
						}
					
				}while(tin1==1);
				
					
				}
				else{
					
					cout<<"DNI INCORRECTO !"<<endl;
					din1=1;
				}
						
			}while(din1==1);
			
			cout<<endl;
			boleta(t);

		}
			
		if(xy==1)
		{
			tiendas();	
		}

		if(xy!=1 )
		{
			tienda_1();	
		}
		
	
	}
	
	cout<<"\n|-----------------------------------------------------------------------------------|"<<endl;
	cout<<"  Quisiera regresar a nuestros Productos  -> (SI -> 1/ NO ->(cualquier numero))  	  "<<endl; 
	cout<<"|----------------------------------------------------------------------------------> ";
	cin>>aq;	

	mar=6;
	}while(aq!=1);
	
}while(aq==1);
	
}

void productos_mac()
{
		system("cls");
			cout<<endl;
			cout<<"|---------------------|"<<endl;
			cout<<"|  PRODUCTOS MAC    "<<endl; 
			cout<<"|---------------------|";
			
			cout<<endl<<endl;
							
			cout<<" CODIGO    NOMBRE                                   			       PRECIO"<<endl;
			cout<<endl;
			cout<<" 101       MacBook_Plus             					   	Precio: 700  "<<endl;
				
			cout<<endl;
			cout<<" 102       MacBook Air de 13 pulgadas 						Precio: 800 "<<endl;
				
			cout<<endl;
			cout<<" 103       MacBook Pro de 13 pulgadas  						Precio: 900 "<<endl;
			cout<<endl;
			cout<<" 103       MacBook Pro de 13 pulgadas  						Precio: 900  "<<endl;
				
			cout<<endl;
			cout<<" 104       MacBook Pro de 15 pulgadas  						Precio: 1100 "<<endl;
				
			cout<<endl;
			cout<<" 105       iMac de 21.5 pulgadas   						Precio: 1000 "<<endl;
				
			cout<<endl;
			cout<<" 106       iMac de 27 pulgadas   						Precio: 1500 "<<endl;
				
			cout<<endl;
			cout<<" 107       Mac mini Pro    					     		Precio: 800  "<<endl;
				
			cout<<endl;
			cout<<" 108       Mac Pro   							        Precio: 1000 "<<endl;
				
			cout<<endl;

			venta_producto();
}
void productos_ipad(){
	system("cls");
			cout<<endl;
			cout<<"|---------------------|"<<endl;
			cout<<"|  PRODUCTOS IPAD    "<<endl; 
			cout<<"|---------------------|";
			
			cout<<endl<<endl;
			
			cout<<" CODIGO    NOMBRE                                               PRECIO"<<endl;
			cout<<endl;	
			cout<<" 109     iPad Pro de 12.9 pulgadas  				Precio: 800 "<<endl;
				
			cout<<endl;
			cout<<" 110     iPad Pro de 10.5 pulgadas   				Precio: 650 "<<endl;
				
			cout<<endl;
			cout<<" 111     iPad Pro   						Precio:  1100 "<<endl;
			
			cout<<endl;
			cout<<" 112     iPad mini 4    					Precio:  950 "<<endl;
				
			cout<<endl;
	
			venta_producto();
}
void productos_iphone(){
	system("cls");
				cout<<endl;
				cout<<"|---------------------|"<<endl;
				cout<<"|  PRODUCTOS IPHONE    "<<endl; 
				cout<<"|---------------------|";
			
				cout<<endl<<endl;
					
				cout<<" CODIGO    NOMBRE                                   		PRECIO"<<endl;
				cout<<endl;	
				cout<<" 113       iPhone 7 	 					Precio: 2000  "<<endl;
				cout<<endl;
				
				cout<<" 114       iPhone 7 Plus 	 				Precio: 2500  "<<endl;
				cout<<endl;
			
				cout<<" 115       iPhone 6s 						Precio:1500   "<<endl;
				cout<<endl;
				
				cout<<" 116       iPhone SE 	 					Precio: 900   "<<endl;
				
				cout<<endl;
			
				venta_producto();		
}
void productos_watch(){
	system("cls");
				cout<<endl;
				cout<<"|---------------------|"<<endl;
				cout<<"|  PRODUCTOS WATCH    "<<endl; 
				cout<<"|---------------------|";
			
				cout<<endl<<endl;
				
				cout<<" CODIGO    NOMBRE                                       PRECIO"<<endl;
				cout<<endl;	
				cout<<" 117       Apple Watch Series 1 			Precio: 700"<<endl;
				
				cout<<endl;
				cout<<" 118       Apple Watch Series 2  			Precio: 900 "<<endl;
				
				cout<<endl;
				cout<<" 119       Apple Watch Nike+  				Precio: 1000"<<endl;
				
				cout<<endl;
				cout<<" 120       Apple Watch Hermès  				Precio: 900 "<<endl;
				
				cout<<endl;
					

				venta_producto();	
} 


void entrada_almacen()
{
	int z;
	int x;
	int y;
	int r,rw;//agregar orig

do{
			//Para ver la parte del almacenamiento en la tienda
			
				system("cls");
				system("color 4");
				
				gotoxy(37,9);
				cout<<"|------------------------------------------------------|";
				gotoxy(37,10);
				cout<<"| 		               			            |";
				gotoxy(37,11);
				cout<<"|------------------------------------------------------|";
				
				gotoxy(40,10);
				cout<<"Ingrese CONTRASENIA para el Almacen : ";
				gotoxy(77,10);
				cin>>con; 
			
			if(con==2015235542)
			{
				//aqui ya puedes ver todo el almacen de productos que tenemos 
			
				/****************
				cout<<"Quieres ingresar un producto : (SI=1 / NO= 0 ) : ";
				cin>>x;
					if(x==1)
					{
					registra_productos();
					}	
				****************/
			do{
					system("cls");
					gotoxy(32,13);
					cout<<"Ver Almacen [ SI-> 1 / NO ->(cualquier numero) ] : ";
					cin>>y; 

				if(y==1)
				{
						
					lectura();
					
					cout<<endl<<endl;
					
					reporte ();
						
					gotoxy(10,30); 
					cout<<"Descontar/Agregar stock del Producto  [ SI->1 / NO ->(cualquier numero) ] : ";
					cin>>z;	
					
					if(z==1)unidad_a_descontar();
					
					cout<<endl<<endl;
					
					cout<<"\t  Desea eliminar un Producto  [ SI->1 / NO ->(cualquier numero) ] : "; 
					cin>>z;	
					
					if(z==1) eliminar_producto_w(); 
					
					cout<<endl;
					cout<<"\n\t  Desea regresar al almacen [ SI->1 / NO ->(cualquier numero) ]: ";cin>>r; 
					rw=1; 
				}
				else{
					rw=0;
				}
	
				}while(r==1 && rw!=0);
				
				if(rw==0){
				
					tienda_1();
				}

			}else
			{
				cout<<"\n Lo sentimos contrasenia INCORRECTA !\n";
				cout<<endl;
			}
				
	}while(con!=2015235542)	;
			
}


//Codigo Inavilitado..
/*************************************
void registra_productos()
{
	int as;
	
		
	FILE *almacen;
    long tamano;
    struct producto temporal;
    
do{
   
    if ((almacen = fopen("productos.sec", "a+b"))== NULL)
   		{ 
       		printf( "No se puede abrir archivo.\n"); 
   		}else
   			{
   				
   					tamano=ftell(almacen);
  	 			fseek(almacen,tamano,SEEK_SET);
  	 			
 	  			printf("Ingrese el Codigo...");
 	  			scanf("%i",&temporal.codigo);
 	  			fflush(stdin);
  	 			printf("Ingrese Product....");
  	 			fflush(stdin);
  	 			scanf("%s",temporal.nombre);
  			 	printf("Ingrese las unidades...");
  			 	scanf("%i",&temporal.unidad);
  			 	printf("Ingrese precio compra...");
  			 	scanf("%i",&temporal.precio_compra);
  			 	printf("Ingrese precio venta...");
  			 	scanf("%i",&temporal.precio_venta);
  			 	fwrite(&temporal,sizeof(temporal),1,almacen);
   				fclose(almacen);
   				cout<<"\n\nIngresa otro producto : ";
   				cin>>as;
				  	
  			}	
			  
	 }while(as==1);				
}
**************************/

void lectura(){
	
	system("cls");
	
	FILE* arch_cliente = fopen("productos.sec", "rb");
	
	struct producto temporal;
	
    fread ( &temporal, sizeof(producto), 1, arch_cliente );
    
    cout <<endl;
    cout<<"================================================\n";
    cout<<"    REPORTE DE NUESTROS PRODUCTOS DE ALMACEN  ..\n";
    cout<<"================================================\n"<<endl;
	cout<<"CODIGO \t\t PRODUCTO \t UNIDADES \t PRECIO_COMPRA \t PRECIO_VENTA\n\n";

    while (!feof( arch_cliente ))
		{
			cout<<temporal.codigo<<"\t\t"<<temporal.nombre<<"\t"<<temporal.unidad<<"\t\t"<<temporal.precio_compra<<"\t\t"<<temporal.precio_venta<<"\t\t\n";
			
        	fread ( &temporal, sizeof(temporal), 1, arch_cliente );    
   		}

    cout << endl;
    fclose(arch_cliente); 
}

void reporte ()
{
	// crea un archivo txt para poder abrirlo y ver 
	FILE *almacen,*reporte;
	struct producto temporal;
	
   		almacen=fopen("productos.sec", "r+b");
   		reporte=fopen("reporte.txt", "w");
   
   if ((almacen ==  NULL) || (reporte ==  NULL)) 
	{ 
       	printf( "No se puede abrir archivo.\n"); 
  	} 
   else
   {
   	
  	fprintf(reporte,"REPORTE DE NUESTROS PRODUCTOS DE ALMACEN ..\n");
   	fprintf(reporte,"CODIGO\t\tDESCRIPCION\tUNIDADES\tPRECIO_COMPRA0\tPRECIO_VENTA\n");
   	fseek(almacen,0L,SEEK_SET);
   	fread(&temporal,sizeof(temporal),1,almacen);

   	do{
   		printf("\n"); 
   		fprintf(reporte,"%i\t\t%s\t\t%i\t\t%i\t\t%i\n",temporal.codigo,temporal.nombre,temporal.unidad,temporal.precio_compra,temporal.precio_venta);
       	fread(&temporal,sizeof(temporal),1,almacen);
   	}while (!feof(almacen));
   	
   	fclose(almacen);
   	fclose(reporte);
 	}
	 		
}

void unidad_a_descontar()
{
   FILE *almacen;
   struct producto temporal;
   int anadir,n;

   char continuar=' ';
   int cod;

do{   

    bool duplicado= false;
   
   if ((almacen = fopen("productos.sec", "r+b"))== NULL) {
   
       printf( "No se puede abrir archivo.\n"); }
   
   else{
  
   		printf("Ingrese el Codigo : ");
   		scanf("%i",&cod);
		
		fread(&temporal,sizeof(producto),1,almacen);
		while(!feof(almacen))
		{
			if(temporal.codigo== cod)
			{
				cout<<"\n\nCodigo  encontrado ! "<<endl;
				//fclose(almacen);
				duplicado=true;
				break;
			}	
		fread(&temporal,sizeof(producto),1,almacen);
		}
		
		if(duplicado==true) 
		{
			fseek(almacen,0L,SEEK_SET);
   			fread(&temporal,sizeof(temporal),1,almacen);
   	
   			while (!feof(almacen))
			{
   				fread(&temporal,sizeof(temporal),1,almacen);
   				if(temporal.codigo==cod) 
   				{
   					printf("Ingrese el Monto a descontar en stock : ");
   	    	    	scanf("%i",&anadir);
   					temporal.unidad=temporal.unidad-anadir;
   					fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
   					fwrite(&temporal,sizeof(temporal),1,almacen);
   					break;
   				}
   		 	}
		} 	
		if(duplicado==false){
			cout<<"Codigo no encontrado ! "<<endl;
			
		}
		cout<<"\nDesea seguir descontando ? (s/n) :";
		cin>>continuar;
   	

   	fclose(almacen);

  	}
  		
	}while(continuar=='s');   	
		
}


void eliminar_producto_w(){ 

	FILE *almacen,*elimin;
    long tamano;

	struct producto temporal;
	int eliminar;
	char kb=' ';
	int encontrar=0;
	int k=20;
do{
	
	
	
	almacen=fopen("productos.sec","r+b");//abrimos el archivo binario para lectura y escritura 

	if(almacen==NULL) 
	{
		cout<<"No se pudo abrir el archivo !"<<endl;
		cout<<"\n\r<<< Oprima cualquier tecla para continuar >>>";
		return;
	}

		elimin=fopen("elimin.tmp","wb"); //creamos un abrivo binario para escritura/lectura
	
		fseek(almacen,0L,SEEK_SET);
		cout<<"Ingrese el codigo del producto a eliminar : ";
		cin>>eliminar;
		fread(&temporal,sizeof(temporal),1,almacen);
		
		while(!feof(almacen))
		{
			if(temporal.codigo!=eliminar)
			{
				encontrar++;
				
				fwrite(&temporal,sizeof(temporal),1,elimin);//escriba en el archivo binario creado
					
			}
			
			fread(&temporal,sizeof(temporal),1,almacen);
		}
		
		fclose(elimin);
		fclose(almacen);
		
		remove("productos.sec");
		rename("elimin.tmp","productos.sec");
		
		if(encontrar==k)
		{
			cout<<"Codigo no encontrado ! "<<endl;
				
		}else
			{
				k=k-1;
				cout<<"Registro eliminado !"<<endl;
			}
		cout<<"Desea eliminar otro producto ? (s/n) : ";
		cin>>kb;
	
	}while(kb=='s');	
	
	return;
}

void venta_producto()
{
	FILE *almacen;
	struct producto temporal;
	bool encontrado=false; 
	
	long int total;
	int conf;
	int ss,ce;

	cout<<"Quieres comprar algun producto ? (SI ->1 / NO ->(cualquier numero)) : ";
	cin>>esp;

	if(esp==1)
	{

	do{
		almacen=fopen("productos.sec","r+b");
   
       	if(almacen==NULL){
       	
		    cout<<"No se puede abrir el archivo "<<endl;
		   	
		}
		else{
			
		cout<<"\n\nIngrese el Codigo del Producto : ";
		cin>>comprasc[i];
			
		fread(&temporal,sizeof(temporal),1,almacen);	
		
			while(!feof(almacen))
			{
				if(temporal.codigo==comprasc[i])
				{
					cout<<"Codigo encontrado ! "<<endl;
					encontrado=true;					
					cout<<" \nCuantas unidades desea comprar? : ";
					cin>>comprasu[i];
					
					comprasp[i]=temporal.precio_venta;
					total=comprasp[i]*comprasu[i];
					
				
					cout<<" Todo le saldria :  S/."<<total<<endl ;
					cout<<" \nConfirmar su compra (Si->1 / NO ->(cualquier numero) ) : ";
					cin>>conf;
				
					if(conf==1)
					{
						temporal.unidad=temporal.unidad-comprasu[i];
	
  				 		fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
  			 			fwrite(&temporal,sizeof(temporal),1,almacen);
  						i++;
						
					}
					break;
		
				}

				fread(&temporal,sizeof(temporal),1,almacen);	
				
			}
			if(encontrado==false)
			{
			cout<<"Codigo no encontrado !"<<endl; 
			}
			
			fclose(almacen);
		
			cout<<"\n\nAlgun otro producto (Si->1 / NO ->(cualquier numero) ) : ";
			cin>>ss;
	
		}
		
		//fclose(almacen);
		
   		}while(ss!=0);

		cout<<"A comprado  Productos :" <<i<<endl;
		cout<<"\n Al final de su recorrido en la tienda, se le dara su boleta con las compras completas."<<endl;
		cout<<endl;	
		system("pause");
	}
	cout<<endl;	
}


void boleta(cliente t)
{	
	int sii;

	system("cls");
	cout<<"BOLETA ELECTRONICA "<<endl;
	cout<<"REALIZADA ";
	
		time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);
        
    	cout<<"\n\nDoc Cliente :             "<<t.dni;
		cout<<"\nNombre :                  "<<t.nombr;
		cout<<"\nApellids :                "<<t.apellidos;
		cout<<"\nNumero de tarjeta :        "<<t.modo; 
		cout<<endl<<endl;
		cout<<endl<<endl;
		cout<<" Productos comprados "<<endl;
	
	for(int j=0;j<i;j++)
	{
		cout<<"\n Codigo : "<<comprasc[j];
		cout<<"\n Unidades : "<<comprasu[j];
		cout<<"\n Precio : S/."<<comprasp[j]; 
		cout<<endl;
	}
	
	for(int j=0;j<i;j++)
	{
		sumau=sumau + comprasu[j]*comprasp[j];	
	}
	
	cout<<"\n El total es : S/."<<sumau;
	cout<<"\n Gracias por su visita a la tienda , vuelva pronto ."<<endl;
	
	boletas_1(t);
	cout<<endl<<endl;
	
	cout<<"\nSalir (Si -> 1/ NO ->(cualquier numero)) : ";
	cin>>sii;
	if(sii==1)
	{
		tiendas();
	}
	else{
		tienda_1();
		
	}

}


void boletas_1(cliente t)
{

	FILE *reporteb;
	
   	reporteb=fopen("Boleta_del cliente.txt", "w");
   
   if ((reporteb ==  NULL)) 
   		{ 
       		printf( "No se puede abrir archivo.\n"); 
  		} 
   else
   {
   	
  	fprintf(reporteb,"Reporte de Boleta...\n");
   	fprintf(reporteb,"Doc.Cliente : \t\t Nombre : \t\t Apellidos : \t\t Num de la Tajeta \t Precio Total \t\t ");
   	
   		for(int j=0;j<i;j++)
			{
				fprintf(reporteb,"Codigo \t\t Unidad  \t\t Precio \t\t ");
			}
       		
   			printf("\n"); 
   			fprintf(reporteb,"\n%i \t\t %s \t\t %s \t\t %i \t\t %i \t\t\t ",t.dni,t.nombr,t.apellidos,t.modo,sumau);
   			
       			for(int j=0;j<i;j++)
			{
				fprintf(reporteb,"%i \t\t\t %i \t\t\t %i \t\t  ",comprasc[j],comprasu[j],comprasp[j]);
			}

   	
   		fclose(reporteb);
   		
   		cout<<"Se guardo el archivo del cliente.."<<endl;
 	}
	 		
}

//Inicio del codigo de Wilson 
/**************************/

void estructura_general()
{	

	struct clientela t;
	int din3=0,tin3=0;
			
 
		system("cls");
		system("color 3");
		menu_tienda();
		

			if(ope==3 && q>0)
			{

				cout<<"\n Para imprimir su BOLETA ELECTRONICA - Ingrese sus DATOS  \n"<<endl;
				
			do{
					
				cout<<"DNI :";
				cin>>t.dni;
				cout<<endl;
				
				if(t.dni>0 && t.dni>9999999 && t.dni<100000000)
				{
				cout<<"NOMBRE : ";
				cin>>t.nom;
				fflush(stdin);
				cout<<endl;
				
				cout<<"APELLIDOS : ";
				cin.getline(t.apellidos,30,'\n');
				fflush(stdin);
				cout<<endl;
				
				
				do{
				cout<<"INGRESE SU NUMERO DE TARJETA : ";
				cin>>t.modo;

				if(t.modo>0 && t.modo>999999999999999 && t.modo<10000000000000000)
				{
						
					cout<<endl;
					boletaa(t);

				}
				else{
					
					cout<<"TARJETA INCORRECTA !"<<endl;
					tin3=1;
				}
					
				}while(tin3==1);

			
				}
				else{
					
					cout<<"DNI INCORRECTO!"<<endl;
					din3=1;
				}
				
			}while(din3==1);
	
			}else{
				tiendas();
			}
			
}

void menu_tienda()
{
        cout<<"      \t ////////////////////////////////////"<<endl;
        cout<<"      \t|                                   |"<<endl;
        cout<<"      \t|                                   |"<<endl;
        cout<<"      \t|         *** BIENVENIDOS***        |"<<endl;
        cout<<"      \t|          LICORERY BLUMARKET       |"<<endl;
        cout<<"      \t|                                   |"<<endl;
        cout<<"      \t|  _________________________________|"<<endl;
        cout<<"      \t|  |  __    __           __    __   |"<<endl;
        cout<<"      \t|  |  ||    ||           ||    ||   |"<<endl;        
        cout<<"      \t|  | |  |  |  |  _____  |  |  |  |  |"<<endl;
        cout<<"      \t|  | |_ |  |_ |  | | |  |_ |  | _|  |"<<endl;
        cout<<"      \t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

do{

	cout<<" MENU PRINCIPAL  !"<<endl<<endl;
	cout<<"\n[1] -> INGRESAR CLIENTE       "<<endl;
	cout<<"\n[2] -> PERSONAL DE LA TIENDA  "<<endl;
	cout<<"\n[3] -> SALIR DE LA TIENDA    "<<endl;
	cout<<endl;
	cout<<"\n DIGITE SU OPCION  ";cin>>ope;
	
	system("cls");
	
 }while(ope<1||ope>3);
	
	if(ope==1)
	{
	menu_tcliente();	
	} 
	 
	if(ope==2)
	{
	menu_tpersonal();		
	} 
	 
	if(ope==3) 
	{
	system("cls");
	cout<<"GRACIAS POR VISITAR NUESTRA TIENDA !"<<endl;

	}

}


void menu_tcliente()
{	
	int ope_1=0;
	
	
	do{
		system("cls");
	
		cout<<"\nOFRECEMOS LA SIGUIENTE VARIEDAD DE LICORES\n"<<endl<<endl;
	
		cout<<" [1] -> VINOS  "<<endl;
		cout<<" [2] -> WISKYS "<<endl;
		cout<<" [3] -> RON    "<<endl;
		cout<<" [4] -> VODKA  "<<endl;
		cout<<" [5] -> MENU PRINCIPAL "<<endl<<endl;
		cout<<"DIGITE SU OPCION : ";
		cin>>ope_1;
		
			switch(ope_1)
			{
				case 1:
				{
					system("cls");
					menu_tcliente_vinos();
					venta_productoo();	
		 		break;		
				}
				
				case 2:
				{
					system("cls");
					menu_tcliente_wiskys();
					venta_productoo();
		 		break;		
				}
				
				case 3:
				{
					system("cls");
					menu_tcliente_ron();
					venta_productoo();
		 		break;		
				}
				
				case 4:
				{
					system("cls");
					menu_tcliente_vodka();
					venta_productoo();
		 		break;		
				}
				
				case 5:
				{
					system("cls");
					menu_tienda();
		 		break;
				}					
			}
		
	}while(ope_1<1 || ope_1>5);		
	
}

void menu_tcliente_vinos()
{
	int ope_2=0;
do{
		system("cls");
		cout<<"\nTenemos la siguiente variedad de VINOS :\n "<<endl<<endl;
		cout<<" [1] -> Vino tinto "<<endl;
		cout<<" [2] -> Vino blanco "<<endl; 
		cout<<" [3] -> Vino rosado "<<endl;
		cout<<" [4] -> MENU PRINCIPAL\n "<<endl;
		cout<<endl;
		cout<<" DIGITE SU OPCION : ";
		cin>>ope_2;
		
	switch (ope_2)
		{
			case 1:
				system("cls");
				tcliente_lectura_tinto();
			break;
			
			case 2:
				system("cls");
				tcliente_lectura_blanco();
			break;
			
			case 3:
				system("cls");
				tcliente_lectura_rosado();
			break;
			
			case 4:
				system("cls");
				menu_tienda();
			break;	
		}	
		
	}while(ope_2<1||ope_2>4);
			
}

void tcliente_lectura_tinto()
{
	FILE*almacen;
	long tamano;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		fread(&temporal,sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
	do{
			cout<<"PRODUCTO        : "<<temporal.num<<endl;
   			cout<<"CODIGO          : "<<temporal.cod<<endl;
   			cout<<"CATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"NOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"DESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"PRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;
			fread(&temporal,sizeof(temporal),1,almacen);
			
		}while(temporal.num<=10);
		 
	fclose(almacen);	
}

void tcliente_lectura_blanco()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=11 && temporal.num<=20)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;		
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}
	fclose(almacen);	
}

void tcliente_lectura_rosado()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=21 && temporal.num<=25) // determinar motivo de los valores
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

	fclose(almacen);	
}


void menu_tcliente_wiskys()
{
	int ope_3=0;
	
	do{
		
	system("cls");
	cout<<"\nTenemos la siguiente variedad de WISKYS : \n "<<endl<<endl;
	cout<<"[1] -> Jhonnie Walker"<<endl;
	cout<<"[2] -> Jack Daniels"<<endl;
	cout<<"[3] -> Ballantines"<<endl;
	cout<<"[4] -> MENU PRINCIPAL\n "<<endl;
	cout<<endl;
	cout<<" DIGITE SU OPCION: ";
	cin>>ope_3;
	
	switch(ope_3)
	{
	
		case 1:
			system("cls");
			tcliente_lectura_walker();
		break;
	
		case 2:
			system("cls");
			tcliente_lectura_daniels();
		break;
					
		case 3:
			system("cls");
			tcliente_lectura_ballantines();
		break;
		
		
		case 4:
			system("cls");
			menu_tienda();
		break;
		
	}
	
	}while(ope_3<1||ope_3>4);
		
}


void tcliente_lectura_walker()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;	
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=26 && temporal.num<=31)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

	fclose(almacen);	
}

void tcliente_lectura_ballantines()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;	
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=34 && temporal.num<=36)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

		fclose(almacen);	
}

void tcliente_lectura_daniels()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=32 && temporal.num<=33)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
			fread(&temporal,sizeof(temporal),1,almacen);
		}

	fclose(almacen);		
}


void menu_tcliente_ron()
{
	int ope_4=0;
	
	do{
		
		system("cls");
		cout<<"\nTenemos la siguiente variedad de RON :\n "<<endl<<endl;
		cout<<"[1] ->  Cartavio"<<endl;
		cout<<"[2] ->  Flor de cania"<<endl;
		cout<<"[3] ->  MENU PRINCIPAL\n "<<endl;
		cout<<endl;
		cout<<"DIGITE OPCION: ";
		cin>>ope_4;
	
	}while(ope_4<1||ope_4>3);
	
		switch(ope_4)
		{
	
		case 1:
			system("cls");
			tcliente_lectura_cartavio();
		break;
	
		case 2:
			system("cls");
			tcliente_lectura_flor();
		break;
					
		case 3:
			system("cls");
			menu_tienda();
		break;
		
		}
		
}

void tcliente_lectura_cartavio()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=37 && temporal.num<=41)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

	fclose(almacen);	
}

void tcliente_lectura_flor()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;	
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=42 && temporal.num<=45)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

		fclose(almacen);	
}


void menu_tcliente_vodka()
{
int ope_5=0;
	
	do{
		
	system("cls");
	cout<<"\nTenemos la siguiente variedad de VODKA :\n "<<endl<<endl;
	cout<<"[1] -> Absolut"<<endl;
	cout<<"[2] -> Danzka"<<endl;
	cout<<"[3] -> MENU PRINCIPAL\n "<<endl;
	cout<<endl;
	cout<<" DIGITE SU OPCION: ";
	cin>>ope_5;
	
	switch(ope_5)
	{
		case 1:
			system("cls");
			tcliente_lectura_absolut();
		break;
	
		case 2:
			system("cls");
			tcliente_lectura_danzka();
		break;
					
		case 3:
			system("cls");
			menu_tienda();
		break;
	}
	
	}while(ope_5<1||ope_5>3);

	
}

void tcliente_lectura_absolut()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
		
	}
	
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=46 && temporal.num<=50)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;
				
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}
		fclose(almacen);		
}

void tcliente_lectura_danzka()
{
	FILE*almacen;
	struct tProducto temporal;
	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
		
	}
	
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"\nNUESTROS PRODUCTOS !"<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=51 && temporal.num<=53)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;
				
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

		fclose(almacen);	
	
}


void menu_tpersonal()
{
	int password;
	int opc_almacen_prod;
	int mm;
	
	do{
		cout<<"\n Contrasenia para entrar al almacen: ";
		cin>>password;
		
		if(password==2017)
		{
		
		do{	
			
			do{
					system("cls");
				
					cout<<endl<<endl;
					//cout<<"[1] -> Registrar productos "<<endl;
					cout<<"[2] -> Reporte del almacen "<<endl;
					cout<<"[3] -> Agregar stock "<<endl;
					cout<<"[4] -> Quitar stock "<<endl;
					cout<<"[5] -> Eliminar producto"<<endl;
					cout<<"[6] -> Regresar \n"<<endl;
					cout<<endl;
					cout<<"DIGITE SU OPCION: ";
					cin>>opc_almacen_prod;
					
				}while(opc_almacen_prod<2||opc_almacen_prod>6); //es a partir de 2
				
				
				switch(opc_almacen_prod)
				{
				
					case 1 :
					{
						system("cls");
						//menu_tpersonal_Registrar();
								
					break;
					}
						
					case 2 :
					{
						system("cls");
						menu_tpersonal_Reporte();
					
							
					break;
					}
						
						
					case 3 :
					{
						system("cls");
						menu_tpersonal_agregar();
							
					break;
					}
						
					case 4 :
					{
						system("cls");
						menu_tpersonal_quitar();
					break;
					}
						
					case 5 :
					{
						system("cls");
						menu_tpersonal_eliminar();
					break;
					}
					
					case 6 :
					{
						system("cls");
						estructura_general();
					break;
					}
						
				}	
				
				do{
				cout<<"Deseas regresar al almacen ? (si ->1) :  ";
				cin>>mm;	
				}while(mm<=0  ||  mm>1);
				
					
			}while(mm==1);
			
				
			}else
				{
					cout<<endl;
					cout<<"Contrasenia INCORRECTA ! "<<endl;
				}
		}while(password!= 2017);	
				
				
}

/******************************
void menu_tpersonal_Registrar()
{
	int as;//opcion
	FILE *almacen;
    long tamano;
    struct tProducto temporal;
    
do{
   
    if ((almacen = fopen("product_alcohol.sec", "a+b"))== NULL)
   		{ 
       		cout<<"No se puede abrir el archivo"<<endl;
       		
   		}else
   			{
   				//ingresar datos en la struct
   				tamano=ftell(almacen); //retorna la posicion actual del puntero del flujo medido en bytes desde el comienzo del archivo
  	 			fseek(almacen,tamano,SEEK_SET);
  	 			
  	 			cout<<"Ingrese el numero : ";
  	 			cin>>temporal.num;
 	  			cout<<"Ingrese el codigo : ";
 	  			cin>>temporal.cod;	
				fflush(stdin);
 	  			cout<<"Ingrese la categoria : ";
  	 			fflush(stdin);
  	 			gets(temporal.categoria); // se utiliza para cadenas de tipo char, te guardan todas las letras y espacio en un arreglo
  	 			fflush(stdin);
  	 			cout<<"Ingrese el nombre : ";
  	 			fflush(stdin);
  	 			gets(temporal.nombre);
  	 			fflush(stdin);
  	 			cout<<"Ingrese la descripcion : ";
  	 			fflush(stdin);
  	 			gets(temporal.descripcion);
  	 			fflush(stdin);
  			 	cout<<"Ingrese el precio de Venta : S/.";//agregado			 	
  			 	cin>>temporal.precio;
  	 			cout<<"Ingrese el stock : ";
  			 	cin>>temporal.stock;
  	 		
  			 	//escribir en archivo binario
  			 	fwrite(&temporal,sizeof(temporal),1,almacen);
   				fclose(almacen);
   				
   				cout<<"\n\nIngresa otro producto : si ->1 / no ->2 :";
   				cin>>as;
				  	
  			}	
			  
	 }while(as==1);		
	 	 		
}
***************************/

void menu_tpersonal_Reporte()
{
   FILE *almacen,*almacentxt;
   struct tProducto temporal;
   
   almacen=fopen("product_alcohol.sec","r+b"); //abre el archivo binario para lectura /escritura
   almacentxt=fopen("productos_texto_alcohol.txt","wt"); //crea un archivo de teto para lectura/ecritura
   
   	if ((almacen==NULL) || (almacentxt==NULL))// abre el archivo binario  y archivo de texto para lectura/escritura
	{ 
       cout<<"No se pudo abrir el archivo "<<endl;
	} 
  	else
  	 {
  	 	fprintf(almacentxt,"ALMACEN - REPORTE TOTAL DE PRODUCTOS \n");
  	 	fprintf(almacentxt,"NUMERO\tCODIGO\tCATEGORIA\tNOMBRE\t\t\tDESCRIPCION\tPRECIO\tSTOCK\n");
  	 	
  	 	cout<<"ALMACEN - REPORTE TOTAL DE PRODUCTOS \n"<<endl;
  	 	
   		fseek(almacen,0L,SEEK_SET);
   		fread(&temporal,sizeof(temporal),1,almacen);
   		do{
   			 //escribir en el archivo de texto 
   			fprintf(almacentxt,"%i\t%i\t%s\t%s\t\t%s\t%f\t%i\n",temporal.num,temporal.cod,temporal.categoria,temporal.nombre,temporal.descripcion,temporal.precio,temporal.stock);
   			
			cout<<"PRODUCTO        : "<<temporal.num<<endl;
   			cout<<"CODIGO          : "<<temporal.cod<<endl;
   			cout<<"CATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"NOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"DESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"PRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<"STOCK           : "<<temporal.stock<<endl;
   			cout<<"\n-----------------------------"<<endl;
   			cout<<endl;
   			
      	 	fread(&temporal,sizeof(temporal),1,almacen);

   		} while (!feof(almacen));
   	
   		fclose(almacen);
   		fclose(almacentxt);
 	}
 	system("PAUSE");
	 
}


void menu_tpersonal_agregar() 
{
	FILE *almacen;
	long tamano;
	int anadir,auxiliar1;
	struct tProducto temporal;
	char conti=' ';
	bool encont=false;
	
	do{
	if ((almacen=fopen("product_alcohol.sec","r+b"))==NULL)
	{
		cout<<"No se pudo abrir el archivo"<<endl;
	
	}else
	{
		fseek(almacen,0L,SEEK_SET);
		cout<<"Ingrese el codigo del producto para añadir stock :";
		cin>>auxiliar1;
		
		fseek(almacen,0L,SEEK_SET);
   		fread(&temporal,sizeof(temporal),1,almacen);
   		
  	 	while(!feof(almacen))
		{
   			if (temporal.cod==auxiliar1) 
   			{
   			encont=true;
   			cout<<"Codigo encontrado ! "<<endl;
   			cout<<"Ingrese el monto añadir:";
   			cin>>anadir;
   			temporal.stock=temporal.stock+anadir;
   			
   			fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
   			fwrite(&temporal,sizeof(temporal),1,almacen);
   			break;
   			}
   		fread(&temporal,sizeof(temporal),1,almacen);
   	 
		}
		if(encont==true ){
		cout<<"Stock agregado !"<<endl;	
		}
		if(encont==false){
		
		cout<<"Condigo no encontrado ! "<<endl;

		}
				
	cout<<"\nDesea seguir agregando ? (s/n) :";
	cin>>conti;	
	fclose(almacen);
			
	}
	
	}while(conti=='s');

	system("cls");
}


void menu_tpersonal_quitar() 
{
	FILE *almacen;
	int quitar,auxiliar2;
	long tamano;
	struct tProducto temporal;
	char conti=' ';
	bool encont=false;
	

	
	do{
	if ((almacen=fopen("product_alcohol.sec","r+b"))==NULL)
	{
		cout<<"No se pudo abrir el archivo !"<<endl;
	}
	else
	{
		fseek(almacen,0L,SEEK_SET); //posiciono el puntero al comienzo 
		cout<<"Ingrese el codigo del producto a  quitar stock:";
		cin>>auxiliar2;
		fread(&temporal,sizeof(temporal),1,almacen); //leo los datos guardados en archivo binario
		while(!feof(almacen))
		{
			if(temporal.cod==auxiliar2)
			{
			encont=true;
   			cout<<"Codigo encontrado ! "<<endl;
			cout<<"Ingrese el monto a descontar en stock:";
			cin>>quitar;
			temporal.stock=temporal.stock-quitar;
			
			fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
			fwrite(&temporal,sizeof(temporal),1,almacen);
			break;
			}
			fread(&temporal,sizeof(temporal),1,almacen);
		}
		if(encont==true){
			cout<<"Stock descontado ! "<<endl;
		}
	
		if(encont==false){
		
		cout<<"Condigo no encontrado ! "<<endl;
		}
	
	cout<<"\nDesea seguir descontando ? (s/n):";
	cin>>conti;	
	
	fclose(almacen);
				
	}
		
	}while(conti=='s');
	

	system("cls");
}


void menu_tpersonal_eliminar() 
{
	FILE*almacen,*eliminados;
	long tamano;
	struct tProducto temporal;
	int eliminar;
	char kb=' ';
	int q=52 ;

do{
	int encontrar=0;
	

	almacen=fopen("product_alcohol.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL) 
	{
		cout<<"No se pudo abrir el archivo !"<<endl;
		cout<<"\n\r<<< Oprima cualquier tecla para continuar >>>";
		return;
	}
	else{
		
		eliminados=fopen("prod_eliminados.tmp","wb"); //creamos un abrivo binario para escritura/lectura
	
		fseek(almacen,0L,SEEK_SET);
		cout<<"Ingrese el codigo del producto a eliminar : ";
		cin>>eliminar;
		fread(&temporal,sizeof(temporal),1,almacen);
		
		while(!feof(almacen))
		{
			if(temporal.cod!=eliminar)
			{
				encontrar++;
				
				fwrite(&temporal,sizeof(temporal),1,eliminados);//escriba en el archivo binario creado
					
			}
			
			fread(&temporal,sizeof(temporal),1,almacen);
		}	
	
		fclose(eliminados);
		fclose(almacen);
		
		remove("product_alcohol.sec");
		rename("prod_eliminados.tmp","product_alcohol.sec");
	
		if(encontrar==q){
			cout<<"Registro no fue eliminado ! "<<endl;
		}else{
			q=q-1;
			cout<<"Codigo fue eliminado";
		}
			
	}
	
	cout<<"\nDesea eliminar otro producto ? (s/n) : ";
	cin>>kb;
	
	}while(kb=='s');	
	
	return;
}

void venta_productoo()
{
	FILE*almacen;
	struct tProducto temporal;
	bool encontrado=false; 

	double total;
	int conf;
	int ss;
	
	int qq;
	int ww;
	
	
	cout<<"Desea comprar algun Producto ? (Si -> 1/ NO ->(cualquier numero)) : ";
	cin>>qq;
		
	if(qq==1){
		
	do{	
		almacen=fopen("product_alcohol.sec","r+b");
   
       	if(almacen==NULL){
       	
		    cout<<"No se puede abrir el archivo "<<endl;
		   	
		}
		else{
		
		cout<<"\n\nIngrese Codigo del Producto : ";
		cin>>comprascv[q];
			
		fread(&temporal,sizeof(temporal),1,almacen);	
		
		while(!feof(almacen))
		{
				if(temporal.cod==comprascv[q])
				{
					encontrado=true;
					cout<<"Codigo encontrado !"<<endl;
					cout<<" \nCuantas unidades va a querer : ";
					cin>>comprasuv[q];
					
					compraspv[q]=temporal.precio;
					total=compraspv[q]*comprasuv[q];
				
					cout<<" Todo le saldria : S/."<<total<<endl ;
					cout<<"\n\nConfirmar su compra  (Si ->1 / No ->0 ) : ";
					cin>>conf;
				
					if(conf==1)
					{
						temporal.stock=temporal.stock-comprasuv[q];
	
  				 		fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
  			 			fwrite(&temporal,sizeof(temporal),1,almacen);
  						q++;	
					}
					break;
		
				}

				fread(&temporal,sizeof(temporal),1,almacen);	
				
		}
			
			if(encontrado==false){
				cout<<"Codigo no encontrado !"<<endl;
			}
		
			cout<<"\n\nAlgun otro producto ? (Si->1 / No->0 ) : ";
			cin>>ss;
			
		}
		fclose(almacen);//
	}while(ss==1);
			
			cout<<endl;
			cout<<"A comprado - Productos : "<<q<<endl;
			cout<<"\n Al final de su recorrido de la Tienda se le dara su boleta con las compras completas."<<endl;
			cout<<endl;	
			
			system("pause"); 
			estructura_general(); 
			
			
	}else
		{
			menu_tcliente(); 
		}

				
}

void boletaa(clientela t)
{
	int sii;
	int sumau=0;

	cout<<"BOLETA ELECTRONICA"<<endl;
	cout<<"Realizada: ";
	
		time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);
        
    	cout<<"\n\nDocumento del Cliente :             "<<t.dni;
		cout<<"\nNombre :                  "<<t.nom;
		cout<<"\nApellidos :                "<<t.apellidos;
		cout<<"\nNumero de Tarjeta :            "<<t.modo;
		cout<<endl<<endl;
		cout<<endl<<endl;
		
	cout<<" Productos comprados "<<endl;
	
	for(int j=0;j<q;j++)
	{
		cout<<"\n Codigo : "<<comprascv[j];
		cout<<"\n Unidades : "<<comprasuv[j];
		cout<<"\n Precio :"<<compraspv[j];
		cout<<endl;
	}
	
	for(int j=0;j<q;j++)
	{	
		sumau=sumau + comprasuv[j]*compraspv[j];	
	}
	
	cout<<"\n El total es : S/."<<sumau;
	
	cout<<"\n Gracias por su visita a la tienda , Vuelva pronto ."<<endl;
	
	cout<<endl<<endl;
	
	cout<<"Salir (Si-> 1) : ";
	cin>>sii;
	if(sii==1)
	{
	
		tiendas();
    }
}


//Codigo de tienda de Karen Libros
/*************************/


int tienda_principal()
{
	int ops,op2,op3,op4,op5;
    
    do{ 
    
    	system("cls");
    	system("color 5");
		tienda_2();
        menu1();
        
        cin>>ops;
        
            switch(ops)
			{
            //COMPRAS
            	case 1: 
				
					system("cls");
                 do{
                    	tienda_2();
                    	menu2();
                    
                    	cin>>op2;
 
                    		switch(op2)
							{           
                            	case 1: 
                            
									system("cls");
                            		mostrar_proveedores();
                            		cout<<"\n";
                            		system("pause");
                           		break;
                            
 								case 2:   
							 	break;
							 
                            	default: 
                            
									cout<<"\tINGRESE UNA OPCION VALIDA...\n"; 
							
								break;
							
                        	}
                        	
                            cout<<endl;
							system("cls");
							
                    }while(op2!=2);
                    break;
                    
                //VENTAS
                case 2: 
					
					system("cls");
                 do{
                        tienda_2();
                        menu3();
                      
                        cin>>op3;
 
                            switch(op3)
							{
                            	case 1:
							    {
                                    system("cls");
                                    venta_productos();
                                    cout<<endl;
									system("pause");  
									system("cls");	
								break;		
								}		
									
                 
                                case 2:
									{
									system("cls");
                                    registro_facturas();
                                    cout<<endl;
									system("pause");  
									system("cls");
                                       	
                                break;
									}
							
										 
                                case 3: 
                                	{
                                		system("cls");
										break;
									}
                                
                                		
								default:
									{
									cout<<"\tINGRESE UNA OPCION VALIDA...\n"; 
										
									break;	
									 }	 
								
                            }
							
               		}while(op3!=3);
                    break;
                    
                //INVENTARIO
                case 3: 
                
					system("cls");
                 do{
                 	
                    tienda_2();
                     menu4();
                    
                    cin>>op4;
                    
                        switch(op4)
						{
                            case 1: 
                            
								system("cls");
                                codigodelproducto();
                                cout<<"\n"; 
                                system("pause");  
                                system("cls");
                            break;
                            
                            case 2: 
                            
								system("cls");
                                productos();
                                cout<<"\n"; 
                                system("pause");  
                                system("cls");
                            break;
                            	
                            
                            case 3: 
							break;
							
                            default: 
								
								cout<<"\tINGRESE UNA OPCION VALIDA...\n";
							break;
							
                        }
                        
                            cout<<endl;

                    }while(op4!=3);
                    break;
                        
                //SOLO personal de registro
                case 4: 
					
					system("cls");
                 do{
                 	
                    tienda_2();
                    menu5();
                    cin>>op5;
                    
                        switch(op5)
						{
                            case 1: 
                            
								system("cls");
							
    	                    	menu_tpersonal_Regis();  
							                             
                            break;  
							                        
                            case 2: 
								
								system("cls");
							
                            	menu_tpersonal_Repor();   
                                system("pause");
                            break;
                                            
                        	case 3: 
                        	
                        		system("cls");
								menu_tpersonal_elim();
								system("pause");
							break;
							
                            default: 
                            
								cout<<"\tINGRESE UNA OPCION VALIDA..."; 
							
							break;
                        }
                            cout<<endl;
                             
							system("cls");

							
                    }while(op5!=4 && op2!=5);// agregue &&op2! para inavilitar la opcion de registrar
                    break;
                    
                case 5: 
						tiendas();// tiendas codigo de Walter

                 
            }
            
            cout<<endl;
			system("cls");
			
        }while(ops!=5);
	
}


/*-------------------------------  TITULO PRINCIPAL   --------------------------*/
void tienda_2()
{
        cout<<"      \t  __________________________________________"<<endl;
        cout<<"      \t |                           ___________    |"<<endl;
        cout<<"      \t |                          | --  | --  |   |"<<endl;
        cout<<"      \t |    ***BIENVENIDOS***     | --  | --  |   |"<<endl;
        cout<<"      \t |       BOOKS HOUSE        |_____|_____|   |"<<endl;
        cout<<"      \t |                                          |"<<endl;
        cout<<"      \t |  _______________________         	    |"<<endl;
        cout<<"      \t |  |  _             _    |     []    []    |"<<endl;
        cout<<"      \t |  | | |    _____  | |   |     []    []    |"<<endl;
        cout<<"      \t |  | |_|    | | |  |_|   |                 |"<<endl;
        cout<<"      \t ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}
 
//menu principal
void menu1()
{
	int n1;
    cout<<"     \t-------------------------------------\n";
    cout<<"              ********  MENU  *********";
    cout<<"\n   \t-------------------------------------\n";
    cout<<"                                    "<<endl;
    cout<<" \t[1] -> AUTORES DISPONIBLES                   "<<endl;
    cout<<" \t[2] -> COMPRAS DE LIBRO                      "<<endl;
    cout<<" \t[3] -> INVENTARIO                            "<<endl;
    cout<<" \t[4] -> PERSONAL DE LA TIENDA  			   "<<endl;
    cout<<" \t[5] -> SALIR DE LA TIENDA                    "<<endl;
	cout<<endl;
    cout<<" \n\t -->INGRESE SU OPCION []: ";
}

//Autores disponibles
void menu2()
{     
    cout<<"     \t-------------------------------------\n";
    cout<<"              ******** Autores  *********";
    cout<<"\n   \t-------------------------------------\n";
    cout<<"                                        "<<endl;
    cout<<" \t[1] -> Mostrar los Autores          "<<endl;
    cout<<" \t[2] -> Regresar al Menu Principal   "<<endl;
    cout<<" \n\tIngrese su opcion []: ";
    
}

//Compras
void menu3()
{   
    cout<<"     \t-------------------------------------\n";
    cout<<"            ******** COMPRAS *********";
    cout<<"\n   \t-------------------------------------\n";
    cout<<" \t[1] -> Comprar Libros               "<<endl;
    cout<<" \t[2] -> Registro de Las Facturas     "<<endl;
    cout<<" \t[3] -> Salir                        "<<endl;
    cout<<" \n\tIngrese su opcion []: ";

}

//INVENTARIO
void menu4()
{
    cout<<"     \t-------------------------------------\n";
    cout<<"           ******** INVENTARIO  *********";
    cout<<"\n   \t-------------------------------------\n";
    cout<<" \t[1] ->Ver codigo de Los Libros      "<<endl;
    cout<<" \t[2] ->Ver Los Libros                "<<endl;
    //cout<<" \t-Ver Inventario           [3]  "<<endl;
    cout<<" \t[3] -> Salir                        "<<endl;
    cout<<" \n\tIngrese su opcion []: ";
 

}
//SOLO PERSONAL DE LA TIENDA //CONTRASEÑA 
void menu5()
{
   	int clave;
   	
	 do{
		
		//Para ver la parte del almacenamiento en la tienda
		cout<<" \n\t Ingrese Clave para el Almacen  :";
		cin>>clave; 
		
		if(clave==1995)
		{
 
    cout<<"     \t-------------------------------------\n";
    cout<<"           ******** ALMACEN  *********";
    cout<<"\n   \t-------------------------------------\n";
    cout<<" \t[1] -> Ingresar Producto "<<endl;
    cout<<" \t[2] -> Ver Producto      "<<endl;
    cout<<" \t[3] -> Eliminar          "<<endl;
    cout<<" \t[4] -> Salir             "<<endl;
    cout<<" \n\tIngrese su opcion []: ";
    
        }else
				{
					cout<<endl;
					cout<<"\n\tCLave INCORRECTA !"<<endl;
				}
    
       }while(clave!=1995);
       
}

 

//Funcion para mostrar los proveedores
void mostrar_proveedores()
{  
	ifstream archivo_entra("proveedores.txt");
	char car;
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
}

//Funcion para el codigo del producto
void codigodelproducto()
{  
	ifstream archivo_codigo("codigodelproducto.txt");
	char car1;
	while(archivo_codigo.get(car1))
	cout<<car1;
	archivo_codigo.close(); 
}

//Funcion de productos
void productos()
{  
	ifstream archivo_prod("producto.txt");
	char car2;
	while(archivo_prod.get(car2))
	cout<<car2;
	archivo_prod.close();
}

//Funcion de inventario
void inventario()
{  
	ifstream archivo_inv("inventario.txt");
	char car3;
	while(archivo_inv.get(car3))
	cout<<car3;
	archivo_inv.close();
}


//Funcion clientes
void registro_facturas()
{  
	ifstream archivo_inv("registro_facturas.txt");
	char car3;
	while(archivo_inv.get(car3))
	cout<<car3;
	archivo_inv.close();
	cout<<endl;
}


//Almacen Binario


void menu_tpersonal_Regis()
{
	int ast;
	FILE *almacen;
    long tamano;
    int esps;
    struct tProduct temporal;
   
    
    cout<<"\n\n\t"<<endl;
	cout<<"\t---->Registrar Algun Producto ?: ( si=[1] / no=[0] ): ";
	cin>>esps;
	
	if(esps==1)
	{
		do{
		
   		if ((almacen = fopen("product_libros.sec", "a+b"))== NULL)
   		{ 
       		cout<<"No se puede abrir el archivo"<<endl;
       		
   		}else
   			{
   				//ingresar datos en la struct
   				tamano=ftell(almacen); //retorna la posicion actual del puntero del flujo medido en bytes desde el comienzo del archivo
  	 			fseek(almacen,tamano,SEEK_SET);
  	 				 			
  	 			cout<<"Ingrese el numero : ";
  	 			cin>>temporal.num;
 	  			cout<<"Ingrese el codigo : ";
 	  			cin>>temporal.cod;
 	  			fflush(stdin);
 	  			
 	  			
 	  			
 	  			//while(!feof(almacen)) //ciclo mientras no se encuentre el final del archivo
 	  			cout<<"Ingrese la categoria : ";
  	 			fflush(stdin);
  	 			gets(temporal.categoria); // se utiliza para cadenas de tipo char, te guardan todas las letras y espacio en un arreglo
  	 			fflush(stdin);
  	 			cout<<"Ingrese el nombre : ";
  	 			fflush(stdin);
  	 			gets(temporal.nombre);
  	 			fflush(stdin);
  	 			cout<<"Ingrese el autor : ";
  	 			fflush(stdin);
  	 			gets(temporal.autor);
  	 			fflush(stdin);	 			
  			 	cout<<"Ingrese el precio de Venta : S/.";//agregado			 	
  			 	cin>>temporal.precio;
  	 			cout<<"Ingrese el stock : ";
  			 	cin>>temporal.stock;
  	 			

  			 	//escribir en archivo binario
  			 	fwrite(&temporal,sizeof(temporal),1,almacen);
   				fclose(almacen);
   				
   				cout<<"\n\nIngresa otro producto (si[1] / no[2]):";
   				cin>>ast;
				  	
  			}	
			  
			  
	 }while(ast==1);		
}
else{
		cout<<"\t---->Salir del Registro? si[1] / no[0] : ";
		cin>>esps;
		
		if(esps==1)
		{
			system("cls");
			menu1();
		}
		else
		
		{
			system("cls");
			menu_tpersonal_Regis();
			
		}
		
	}
		
}


void menu_tpersonal_elim()  
{
	FILE*almacen,*eliminados;
	long tamano;
	struct tProduct temporal;
	int eliminar;
	int esps;
	char kk=' ';
	
	int a=23;
	
	cout<<"\n\n\t"<<endl;
	cout<<"\t----> Desea eliminar algun producto ? ( si=[1] / no=[0] ): ";
	cin>>esps;
	
	if(esps==1)
	{
	
	
do{

	int cont=0;
	
	almacen=fopen("product_libros.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL) 
	{
		cout<<" No se pudo abrir el archivo !"<<endl;
		cout<<"\n\r<<< Oprima cualquier tecla para continuar >>>";
		return;
	}
	
		eliminados=fopen("prod_eliminados.tmp","wb"); //creamos un abrivo binario para escritura/lectura
	
		fseek(almacen,0L,SEEK_SET);
		cout<<"Ingrese el codigo del producto que desea Eliminar: ";
		cin>>eliminar;
		fread(&temporal,sizeof(temporal),1,almacen);
		
		while(!feof(almacen))
		{
			if(temporal.cod!=eliminar)
			{
				cont++;
				
				fwrite(&temporal,sizeof(temporal),1,eliminados);//escriba en el archivo binario creado
					
			}
			
			fread(&temporal,sizeof(temporal),1,almacen);
		}
		
		fclose(eliminados);
		fclose(almacen);
		
		remove("product_libros.sec");
		rename("prod_eliminados.tmp","product_libros.sec");

		if(cont==a)
		{
			cout<<"Codigo no encontrado ! "<<endl;
				
		}else
			{
				a=a-1;
				cout<<"Registro eliminado !"<<endl;
			}
		
		cout<<"\nDesea eliminar otro producto ? (s/n) : ";
		cin>>kk;
		
	
	}while(kk=='s');
		
		system("pause");
		
		
		
	}	
	else
	{
		cout<<"\t---->Desea salir  ? (si[1] / no[0]) : ";
		cin>>esps;
		
		if(esps==1)
		{
			system("cls");
		}
		else{
			system("cls");
			menu_tpersonal_elim();	
		}
		
	}
	return;
}


void menu_tpersonal_Repor()
{
	int esps;
	
	
     cout<<"\n\n\t"<<endl;
	 cout<<"\t----> Ver Registro ?: ( si=[1] / no=[0] ): ";
	 cin>>esps;
	
	if(esps==1)
	{
	
   FILE *almacen,*almacentxt;
   struct tProduct temporal;
   
   almacen=fopen("product_libros.sec","r+b"); //abre el archivo binario para lectura /escritura
   almacentxt=fopen("productos_texto.txt","wt"); //crea un archivo de teto para lectura/ecritura
   
   	if ((almacen==NULL) || (almacentxt==NULL))// abre el archivo binario  y archivo de texto para lectura/escritura
	{ 
       cout<<"No se pudo abrir el archivo "<<endl;
	} 
  	else
  	 {
  	 	
  	 	fprintf(almacentxt,"ALMACEN - REPORTE TOTAL DE PRODUCTOS \n");//archivo binario
  	 	
  	 	fprintf(almacentxt,"NUMERO\tCODIGO\tCATEGORIA\tNOMBRE\t\t\tDESCRIPCION\tPRECIO\tSTOCK\n");//archivo binario
  	 	
  	 	cout<<"ALMACEN - REPORTE TOTAL DE PRODUCTOS \n"<<endl;

  	 	
   		fseek(almacen,0L,SEEK_SET);
   		
   		fread(&temporal,sizeof(temporal),1,almacen);
   		
   		do{
   			 //escribir en el archivo de texto 
   			fprintf(almacentxt,"%i\t%i\t%s\t%s\t\t%s\t%f\t%i\n",temporal.num,temporal.cod,temporal.categoria,temporal.nombre,temporal.autor,temporal.precio,temporal.stock);
   			
   		
			cout<<"PRODUCTO        : "<<temporal.num<<endl;
   			cout<<"CODIGO          : "<<temporal.cod<<endl;
   			cout<<"CATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"NOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"AUTOR           : "<<temporal.autor<<endl;
   			cout<<"PRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<"STOCK           : "<<temporal.stock<<endl;
   			cout<<"\n-----------------------------"<<endl;
   			cout<<endl;
   			
      	 	fread(&temporal,sizeof(temporal),1,almacen);

   		} while (!feof(almacen));
   	
   		fclose(almacen);
   		fclose(almacentxt);
 	}
}
else
	{
		cout<<"\t---->Desea salir (si[1] / no[0] ): ";
		cin>>esps;
		
		if(esps==1)
		{
			system("cls");
		}else{
			system("cls");
			menu_tpersonal_Repor();
		}
		
	}


}

 void venta_productos()
{
	FILE *almacen;
	struct tProduct temporal;
	
	long int total;
	int confi;
	int sia;
	int esps;
	int sumatoti=0;
	char bus[20];
	char nom1[40];
	char nom2[40];
	
	int din2=0,tin2=0;
	
	
	long long int  nom3;
	long long int  nom4;
	char nom5[40];
	 	
	cout<<"\n\n\t COMPRA DE LIBROS :"<<endl;	
	cin.getline(bus,20);	
	ifstream archivo_codigo("codigodelproducto.txt");
	char car1;
	while(archivo_codigo.get(car1))
	{cout<<car1;}
	archivo_codigo.close();
	
	cout<<"\n\n\t"<<endl;
	cout<<"\t----> Desea Comprar Algun Producto ? ( si=[1] / no=[0] ): ";
	cin>>esps;
	
	if(esps==1)
	{
	
   	do{
		almacen=fopen("product_libros.sec","r+b");
   
       	if(almacen==NULL){
       	
		    cout<<"No se puede abrir el archivo "<<endl;	
		}else{
			
			
		cout<<"\n\nIngrese Codigo del Producto : ";
		cin>>compratk[k];
			
		fread(&temporal,sizeof(temporal),1,almacen);	
		
			while(!feof(almacen))
			{
				if(temporal.cod==compratk[k])
				{
					
					cout<<" \nCuantas unidades desea comprar : ";
					cin>>compratn[k];
					
					compratp[k]=temporal.precio;
					total=compratp[k]*compratn[k];
					
				
					cout<<" Todo le saldria : S_/."<<total<<endl ;
					cout<<"\n\nConfirmar su compra  (Si->1 / No ->0 ) : ";
					cin>>confi;
				
					if(confi==1)
					{
						temporal.stock=temporal.stock-compratn[k];
	
  				 		fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
  			 			fwrite(&temporal,sizeof(temporal),1,almacen);
  						k++;	
					}
					break;
		
				}

				fread(&temporal,sizeof(temporal),1,almacen);	
				
			}
		
			cout<<"Algun otro producto ? (Si->1 / No->0 ) : ";
			cin>>sia;
	
		}
			fclose(almacen);
		}while(sia!=0);


		cout<<"\n\t A CONTINUACION SE LE ENTREGARA PEDIRA SUS DATOS ."<<endl;
		cout<<endl;
	 	
	 	fstream registro_facturas;
	 	
	 	
	 	
	 	do{
	 		
	 		cout<<"------> Ingrese su Dni"<<endl;
			cin>>nom3;

		if(nom3>0 && nom3>9999999 && nom3<100000000)
		{
			
		cout<<"------> Ingrese Nombre Completo del cliente en cada linea: "<<endl;
		cin.getline(nom1,40);
		cin.getline(nom2,40);
	
		do{
				cout<<"------> Ingrese Numero de Tarjeta :"<<endl;
				cin>>nom4;
				
			if(nom4>0 && nom4>999999999999999 && nom4<10000000000000000)
			{
				 //Muestra la boleta en consola 
				system("cls"); 
				cout<<"\n\n\t"<<endl;
	 			cout<<"\t"<<" **********  FACTURA   ***********" <<endl;
	  			cout<<"\t"<<"Nombre del cliente: "<<nom1<<" "<<nom2<<endl;
	   			cout<<"\t"<<"Dni : "<<nom3<<endl;
	   			 for(int l=0;l<k;l++)
				{

				cout<<"\t"<<endl;
				cout<<"\t PRODUCTOS : "<<endl;
				cout<<"\t Codigo : "<<compratk[l]<<endl;
				cout<<"\t Unidades : "<<compratp[l]<<endl;
				cout<<"\t Precio :"<<compratn[l]<<endl;
				cout<<endl;
				}
	 
	     
	
				for(int l=0;l<k;l++)
				{
		
				sumatoti=sumatoti + compratp[l]*compratn[l];	
				}
	
				//Registro de boleta en archivo txt
				registro_facturas.open("registro_facturas.txt",ios::out|ios::app);
		     
	   			registro_facturas<<"\t"<<" **********  FACTURA   ***********" <<endl;
	    		registro_facturas.put('\n');//espacio entre datos globales 
	   			registro_facturas<<"\t"<<"Nombre del cliente: "<<nom1<<" "<<nom2<<endl;
	  			registro_facturas<<"\t"<<"DNI: "<<nom3<<endl;
	    		registro_facturas<<"\t"<<"Modo de pago : "<<"Tarjeta Debido"<<endl;
     			registro_facturas<<"\t"<<"Total de su compra: "<<sumatoti<< " "<<"soles"<<endl;
     			registro_facturas<<"\t Gracias por su visita a la tienda , vuelva pronto ."<<endl;
	  			registro_facturas.close();
	    

	  			cout<<endl;
	   			cout<<"\t El total es : S/."<<sumatoti<<" "<<"soles"<<endl; 
	   			cout<<"\t Modo de pago: " <<"Tarjeta Debido"<<endl;
	   			cout<<"\t Compra exitosa!!!!" <<endl;
     			cout<<"\t Gracias por su visita a la tienda , vuelva pronto ."<<endl;	
			}else{
				cout<<"TARJETA INCORRECTA ! "<<endl;
				tin2=1;
				}
			
		}while(tin2==1);
		
				
		}else
		
		{
			cout<<"DNI INCORRECTO ! "<<endl;
			din2=1;	
		}
	 		
	 		
		}while(din2==1);
		
	}else
	
	{
		cout<<"\t---->Desea salir de la tienda? si[1] / no[0] : ";
		cin>>esps;
		
		if(esps==1)
		{
			system("cls");
		}else{
			system("cls");
			venta_productos();	
		}	
	}	
}
 
 
 
 //Codigo de la tienda Ashly
/****************************/

void tienda4()
{ 

struct tVenta compra;

	int s;
	int din=0,tin=0;

	system("cls");
	system("color 9");
	menu_tienda4();	
			
			system("cls");

			if(ope==0  && t>0 )
			{
   				cout<<"\n Para poder darle la boleta , permitanos algunos datos : \n"<<endl;
				cout<<endl;
				
				do{
					
					cout<<"DNI :";
					cin>>compra.dni;
				
					if(compra.dni>0 && compra.dni>9999999 && compra.dni<100000000)
					{
			
						dni1=compra.dni;
				
						fflush(stdin);
						cout<<"NOMBRE : ";
						fflush(stdin);
						gets(compra.nombre); 
				
						for(int i=0;i<40;i++)
						{
						nombre2[i]=compra.nombre[i];
						}
				
						fflush(stdin);
						cout<<"APELLIDOS : ";
						fflush(stdin);
						gets(compra.apellido); 
				
						for(int i=0;i<40;i++)
						{
						apellido2[i]=compra.apellido[i];
						}
	
					do{
							fflush(stdin);
							cout<<"NUMERO DE TARJETA : "; 
							fflush(stdin);
							cin>>compra.modo_pago; 
						
							if(compra.modo_pago>0 && compra.modo_pago>999999999999999 && compra.modo_pago<10000000000000000)		
							{
								modo2=compra.modo_pago;
							}
							else
							{
								cout<<"NUMERO DE TARJETA INCORRECTA !!"<<endl;
								tin=1;
							}

							
						}while(tin==1);

					system("pause");
					}
					
					else{
					cout<<"DNI INCORRECTO !!"<<endl;
					din=1;
					}
					
				}while(din==1);
			
				boleta_electronica(compra);
				system("PAUSE");
			}else{
				system("cls");
				tiendas();
				
			}

}

void menu_tienda4()
{
	int ope;
	do{
		system("cls");
        cout<<"      \t    _______________________________________________________"<<endl;
        cout<<"      \t   /         *** BIENVENIDOS***       /___________________|"<<endl;
        cout<<"      \t  /            LOREASH'NATURA        /____________________|"<<endl;
        cout<<"      \t /______________<*-*>_______________/_____________________|"<<endl;
        cout<<"      \t|                                   |                     |"<<endl;
        cout<<"      \t|  _________________________________|                     |"<<endl;
        cout<<"      \t|  |                                |                     |"<<endl;        
        cout<<"      \t|  |  _    _   ____    _    _    _  |                     |"<<endl;
        cout<<"      \t|  | |_|  |_|  | | |  |_|  |_|  |_| |                     |"<<endl;
        cout<<"      \t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        cout<<endl;
        
    cout<<"|---------------------------------|"<<endl;
	cout<<"|  	MENU PRINCIPAL  	  |"<<endl; 
	cout<<"|---------------------------------|"<<endl<<endl;
        
	cout<<"\n[1] -> INGRESAR CLIENTE     	"<<endl;
	cout<<"\n[2] -> PESONAL DE LA TIENDA  	"<<endl;
	cout<<"\n[0] -> SALIR DE LA TIENDA  	"<<endl;
	cout<<endl;
	cout<<"\n\tINGRESE OPCION		---->  ";
	cin>>ope;
	}while(ope<0 || ope>2);

	if(ope==1)
	{
	menu_tcliente1();	
	 } 
	if(ope==2)
	{
	menu_tpersonal9();		
	 } 
	if(ope==0) 
	{
		system("cls");
		cout<<"GRACIAS POR VISITAR NUESTRA TIENDA !"<<endl;
 
	}

}

void menu_tcliente1()
{
	int ope_1;
		
do{
	system("cls");
	cout<<endl<<endl;
	cout<<"|---------------------------------|"<<endl;
	cout<<"|  	 PRESENTAMOS  	  	"<<endl; 
	cout<<"|---------------------------------|"<<endl<<endl;
	
	cout<<"\n[1] -> NUESTROS PRODUCTOS		"<<endl;
	cout<<"\n[0] -> MENU PRINCIPAL  		"<<endl;
	cout<<"\n\tINGRESE OPCION		----> : ";
	cin>>ope_1;
	
	}while(ope_1<0 || ope_1>1);

	if(ope_1==1) 
	{
		system("cls");
		menu_tcliente_woman();
		 
	}
	if(ope_1==0) 
	{
		system("cls");
		tienda4(); 
	}
	
}
void menu_tcliente_woman()
{
	int ope_2=0,ope_3=0,ope_4=0;
	do
	{
	system("cls");
	cout<<endl<<endl;
    cout<<"|---------------------------------|"<<endl;
	cout<<"|  	NUESTRAS CATEGORIAS  		 "<<endl; 
	cout<<"|---------------------------------|"<<endl<<endl;
	
	cout<<"[1] ->  PIEL  			"<<endl;
	cout<<"[2] ->  CABELLO 			"<<endl;
	cout<<"[3] ->  REGRESAR 		"<<endl;
	cout<<"[0] ->  MENU PRINCIAL    "<<endl;
	cout<<"\n\tINGRESE OPCION		----> : ";
	cin>>ope_2;
	}while(ope_2<0 || ope_2>3); 

	switch(ope_2)
	{
		case 1:
		{
			do{
				system("cls");
				cout<<endl<<endl,
			    cout<<"|---------------------------------|"<<endl;
				cout<<"|  	TU NECESIDAD 		 	 "<<endl; 
				cout<<"|---------------------------------|"<<endl<<endl;
				
				cout<<"[1] ->  CUIDADO FACIAL 	  "<<endl;
				cout<<"[2] ->  LIMPIADORES 	      "<<endl;
				cout<<"[3] ->  REGRESAR 	      "<<endl;
				cout<<"[0] ->  MENU PRINCIAL      "<<endl;
				cout<<"\n\tINGRESE OPCION		----> : ";
				cin>>ope_3;
				
				}while(ope_3<0 || ope_3>3);
			
				if(ope_3==1)
				{
					system("cls");
					tcliente_lectura_cuidadoFa();
					sistema_venta();	
				 } 
				 
				if(ope_3==2)
				{
					system("cls");
					tcliente_lectura_limpiadores();
					sistema_venta();
					break;		
				 } 
				 
				if(ope_3==3)
				{
					system("cls");
					menu_tcliente_woman();		
				} 
				
				if(ope_3==0)
				{
					system("cls");
					tienda4(); 			
				} 	
		break;
		}
		
		case 2:
		{
		do{	
			system("cls");
			cout<<endl<<endl;
			cout<<"|---------------------------------|"<<endl;
			cout<<"|  	TU NECESIDAD  	 "<<endl; 
			cout<<"|---------------------------------|"<<endl<<endl;
			
			cout<<"[1] ->   CUIDADOS DEL CABELLO  "<<endl;
			cout<<"[2] ->   FIJACIÓN              "<<endl;
			cout<<"[3] ->   REGRESAR 			  "<<endl;
			cout<<"[0] ->   MENU PRINCIAL 		  "<<endl;
			cout<<"\n\tINGRESE OPCION		----> : ";
			cin>>ope_4;
			
			}while(ope_4<0 || ope_4>3);
			
				if(ope_4==1)
				{
				system("cls");
					tcliente_lectura_cuidadoCa();
					sistema_venta();	
				break;		
	    		} 
	    	
				if(ope_4==2)
				{
				system("cls");
					tcliente_lectura_fijacion();
					sistema_venta();
				break;	
		    	} 
				
				if(ope_4==3)
				{
				system("cls");
					menu_tcliente_woman();
				break;	
				} 
				
				if(ope_4==0)
				{
					tienda4();
break;			
				} 
		break;
		}
				
		case 3:
		{
			system("cls");
			menu_tcliente1();
		break;
		}
				
		case 0:
		{
			system("cls");
			tienda4(); 
		 break;
		}
	}	


}

void menu_tpersonal9()
{
	int password;
	int opc_almacen_prod;
	int xx;
	
	system("cls");	
	
	do{
		//Para ver la parte del almacenamiento en la tienda
		cout<<endl<<endl<<endl<<endl;
		cout<<" \n\t\tContrasenia para entrar al Almacen : ";
		cin>>password; 
		
		if(password==2015237821)
			{
			
		do{
		
			 do{
					
				system("cls");
				cout<<endl<<endl;
				cout<<"|---------------------------------|"<<endl;
				cout<<"|  	ALMACEN / INVENTARIO  	 		"<<endl; 
				cout<<"|---------------------------------|"<<endl<<endl;

				//cout<<"[1] ->	Registrar productos 	"<<endl;
				cout<<"[2] ->	Reporte del almacen 	"<<endl;
				cout<<"[3] ->	Agregar stock 			"<<endl;
				cout<<"[4] ->	Quitar stock 			"<<endl;
				cout<<"[5] ->	Eliminar producto  		"<<endl;
				cout<<"[6] ->	Regresar 	 			"<<endl;
				cout<<"\n\tINGRESE OPCION		----> : ";
				cin>>opc_almacen_prod;
						
				}while(opc_almacen_prod<2 || opc_almacen_prod>6);
					
				switch(opc_almacen_prod)
				{
				
					case 1 :
					{
						system("cls");
						//menu_tpersonal_Registrar0();			
					break;
					}
						
					case 2 :
					{
						system("cls");
						menu_tpersonal_Reporte0();		
					break;
					}
						
					case 3 :
					{
						system("cls");
						  menu_tpersonal_agregar0();
							
					break;
					}
						
					case 4 :
					{
						system("cls");
						menu_tpersonal_quitar0();
					break;
					}
						
					case 5 :
					{
						system("cls");
						menu_tpersonal_eliminar0();
					break;
					}
					
					case 6 :
					{
						tienda4();
						break;
					}
							
				}	
				
			 do{
			 	cout<<endl;
				cout<<"\n\tDesea regresar al almacen ? (si -> 1) : ";
				cin>>xx;
				}while(xx<=0 || xx>1);	
				
				
				
			}while(xx==1);		
				
			}else
				{
					cout<<endl;
					cout<<"Contraseña INCORRECTA ! "<<endl;
				}
		}while(password!= 2015237821);	
}

/*******
void menu_tpersonal_Registrar0()
{
	int as;//opcion
	bool duplicado= false;
	FILE *almacen;
    long tamano;
    struct tProduc temporal;
    int cod;
    
do{
   
    if ((almacen = fopen("product_cremas.sec", "a+b"))== NULL)
   		{ 
       		cout<<"No se puede abrir el archivo"<<endl;
       		
   		}else
   			{
   				tamano=ftell(almacen); //retorna la posicion actual del puntero del flujo medido en bytes desde el comienzo del archivo
  	 			fseek(almacen,tamano,SEEK_SET);
  	 			
  	 			cout<<"Ingrese el numero : ";
  	 			cin>>temporal.num;
  	 			
 	  			cout<<"Ingrese el código : "; // CAMBIAR NUEVO
 	  			cin>>cod;
 	  			
 	  			fread(&temporal,sizeof(temporal),1,almacen);
 	  			
				while(!feof(almacen)){
					if(temporal.cod ==cod){
					cout<<"\n\nCodigo Duplicado"<<endl;
					fclose(almacen);
					duplicado=true;
					break;
					}
					
					fread(&temporal,sizeof(temporal),1,almacen);
				}
				
				if(duplicado==false)
				{
					temporal.cod=cod;
					fflush(stdin);
 	  				cout<<"Ingrese la categoria : ";
  	 				fflush(stdin);
  	 				gets(temporal.categoria); // se utiliza para cadenas de tipo char, te guardan todas las letras y espacio en un arreglo
  	 				fflush(stdin);
  	 				cout<<"Ingrese el nombre : ";
  	 				fflush(stdin);
  	 				gets(temporal.nombre);
  	 				fflush(stdin);
  	 				cout<<"Ingrese la descripcion : ";
  	 				fflush(stdin);
  	 				gets(temporal.descripcion);
  	 				fflush(stdin);
  			 		cout<<"Ingrese el precio de Venta : S/.";//agregado			 	
  			 		cin>>temporal.precio;
  	 				cout<<"Ingrese el stock : ";
  			 		cin>>temporal.stock;
  	 				
  	 				fwrite(&temporal,sizeof(temporal),1,almacen);
   				
				   }
   				cout<<"\n\nIngresa otro producto : si ->1 / no ->2 :";
   				cin>>as;
				  	
  			}
			    fclose(almacen);		
			  
	 }while(as==1);		
	 	 	
		
}

********/


void menu_tpersonal_Reporte0()
{

	
   FILE *almacen,*almacentxt;
   struct tProduc temporal;
   
   almacen=fopen("product_cremas.sec","r+b"); //abre el archivo binario para lectura /escritura
   almacentxt=fopen("productos_textoo.txt","wt"); //crea un archivo de teto para lectura/ecritura
   
   	if ((almacen==NULL) || (almacentxt==NULL))// abre el archivo binario  y archivo de texto para lectura/escritura
	{ 
       cout<<"No se pudo abrir el archivo "<<endl;
	} 
  	else
  	 {
  	 	fprintf(almacentxt,"ALMACEN - REPORTE TOTAL DE PRODUCTOS \n");
  	 	fprintf(almacentxt,"NUMERO\tCODIGO\tCATEGORIA\tNOMBRE\t\t\tDESCRIPCION\tPRECIO\tSTOCK\n");
  	 	cout<<endl<<endl;
  	 	cout<<"\n\tALMACEN - REPORTE TOTAL DE PRODUCTOS \n"<<endl<<endl;
  	 	
   		fseek(almacen,0L,SEEK_SET);
   		fread(&temporal,sizeof(temporal),1,almacen);
   		do{
   			 //escribir en el archivo de texto 
   			fprintf(almacentxt,"%i\t%i\t%s\t%s\t\t%s\t%f\t%i\n",temporal.num,temporal.cod,temporal.categoria,temporal.nombre,temporal.descripcion,temporal.precio,temporal.stock);
   			
			//mostrar en consola 
   			
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<"\tSTOCK           : "<<temporal.stock<<endl;
   			cout<<"\n\t-----------------------------"<<endl;
   			cout<<endl;
   			
      	 	fread(&temporal,sizeof(temporal),1,almacen);

   		} while (!feof(almacen));
   	
   		fclose(almacen);
   		fclose(almacentxt);
 	}
	 
}


void menu_tpersonal_agregar0() 
{
	
	FILE *almacen;
	long tamano;
	int anadir,auxiliar1;
	struct tProduc temporal;
	char continuar=' ';
	bool f=false;

do{
	
	if ((almacen=fopen("product_cremas.sec","r+b"))==NULL)
	{
		cout<<"No se pudo abrir el archivo"<<endl;
	
	}else
	{
		fseek(almacen,0L,SEEK_SET);
		cout<<endl<<endl;
		cout<<"\tIngrese el codigo del producto para añadir stock :";
		cin>>auxiliar1;
		fseek(almacen,0L,SEEK_SET);
   		fread(&temporal,sizeof(temporal),1,almacen);
   		
  	 	while(!feof(almacen))
		{
   			if (temporal.cod==auxiliar1) 
   			{
   			f=true;
   			cout<<"\tCodigo encontrado !"<<endl;
   				
   			cout<<"\n\tIngrese el monto añadir :";
   			cin>>anadir;
   			temporal.stock=temporal.stock+anadir;
   			
   			fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
   			fwrite(&temporal,sizeof(temporal),1,almacen);
   			break;
   			}
   		fread(&temporal,sizeof(temporal),1,almacen);
   	 
		}
		
		if(f==true){
		cout<<"\tStock agregado !"<<endl;	
		}
		if(f==false)
		{
		cout<<"\tCodigo no encontrado ! "<<endl;
		
		}
		
	cout<<"\n\tDesea seguir agregando ? (s/n):";
	cin>>continuar;
	
	fclose(almacen);

	}

 }while(continuar=='s');
	
system("cls");

}

void menu_tpersonal_quitar0()
{
	FILE *almacen;
	int quitar,auxiliar2;
	long tamano;
	bool f=false;
	struct tProduc temporal;
	char continuar=' ';


do{	
	
	if ((almacen=fopen("product_cremas.sec","r+b"))==NULL)
	{
		cout<<"No se pudo abrir el archivo !"<<endl;
	}
	else
	{
		fseek(almacen,0L,SEEK_SET); //posiciono el puntero al comienzo 
		cout<<endl<<endl;
		cout<<"\tIngrese el codigo del producto :";
		cin>>auxiliar2;
		
		fread(&temporal,sizeof(temporal),1,almacen); //leo los datos guardados en archivo binario
		while(!feof(almacen))
		{
			if(temporal.cod==auxiliar2)
			{
			f=true;
			cout<<"\tCodigo encontrado !"<<endl;
			
			cout<<"\tIngrese el monto a descontar stock :";
			cin>>quitar;
			temporal.stock=temporal.stock-quitar;
			
			fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
			fwrite(&temporal,sizeof(temporal),1,almacen);
			break;
			}
			fread(&temporal,sizeof(temporal),1,almacen);
		}
		
		cout<<endl;
		if(f==true){
		cout<<"\tStock descontado !"<<endl;	
		}
		if(f==false)
		{
		cout<<"\tCodigo no encontrado ! "<<endl;
		}
	
	cout<<"\n\tDesea seguir descontando ? (s/n) :";
	cin>>continuar;
	
	fclose(almacen);
	
	}
	
 }while(continuar=='s');
	
system("cls");

}	

void menu_tpersonal_eliminar0() 
{
	FILE*almacen,*eliminados;
	long tamano;
	struct tProduc temporal;
	int eliminar;

	char km=' ';
	int qa=40 ;

do{
	int f=0;
	
	almacen=fopen("product_cremas.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL) 
	{
		cout<<"No se pudo abrir el archivo !"<<endl;
		cout<<"\n\r<<< Oprima cualquier tecla para continuar >>>";
		return;
	}

		eliminados=fopen("prod_eliminados.tmp","wb"); //creamos un abrivo binario para escritura/lectura
	
		fseek(almacen,0L,SEEK_SET);
		cout<<endl<<endl;
		cout<<"\n\tIngrese el codigo del producto : ";
		cin>>eliminar;
		
		fread(&temporal,sizeof(temporal),1,almacen);
		
		while(!feof(almacen))
		{
			if(temporal.cod!=eliminar)
			{
				f++;
				fwrite(&temporal,sizeof(temporal),1,eliminados);//escriba en el archivo binario creado
					
			}
			
			fread(&temporal,sizeof(temporal),1,almacen);
		}
	
		
		
		fclose(eliminados);
		fclose(almacen);
		
		remove("product_cremas.sec");
		rename("prod_eliminados.tmp","product_cremas.sec");
		
		if(f==qa){
			cout<<"Registro no fue eliminado ! "<<endl;
		}else{
			qa=qa-1;
			cout<<"Codigo fue eliminado";
		}
			
	
	
	cout<<"\nDesea eliminar otro producto ? (s/n) : ";
	cin>>km;
	
	}while(km=='s');
			

	
}

void tcliente_lectura_cuidadoFa()
{
	
	FILE*almacen;
	long tamano;
	struct tProduc temporal;
	almacen=fopen("product_cremas.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
		
	}
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		fread(&temporal,sizeof(temporal),1,almacen);
		cout<<endl;
		cout<<"|------------------------------------------|"<<endl;
		cout<<"|  	PRODUCTOS - CUIDADO FACIAL	     "<<endl; 
		cout<<"|------------------------------------------|"<<endl<<endl;
		do
		{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;
			fread(&temporal,sizeof(temporal),1,almacen);
			
		}while(temporal.num<=12);
		
		fclose(almacen);	
}

void tcliente_lectura_limpiadores()
{
	FILE*almacen;
	struct tProduc temporal;
	almacen=fopen("product_cremas.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
		
	}
	
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<endl;
		cout<<"|----------------------------------------|"<<endl;
		cout<<"|  	PRODUCTOS - LIMPIADORES		    "<<endl; 
		cout<<"|----------------------------------------|"<<endl<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=13 && temporal.num<=21)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;	
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}
		fclose(almacen);	
}

void tcliente_lectura_cuidadoCa()
{
	FILE*almacen;
	struct tProduc temporal;
	almacen=fopen("product_cremas.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;
	}
	
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<endl;
		cout<<"|---------------------------------------------|"<<endl;
		cout<<"|	PRODUCTOS - CUIDADOS DEL CABELLO    "<<endl; 
		cout<<"|---------------------------------------------|"<<endl<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=22 && temporal.num<=37)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;
				
			}
		
			fread(&temporal,sizeof(temporal),1,almacen);
		}

		fclose(almacen);	
}

void tcliente_lectura_fijacion()
{
	FILE*almacen;
	struct tProduc temporal;
	almacen=fopen("product_cremas.sec","r+b");//abrimos el archivo binario para lectura y escritura 
	
	if(almacen==NULL)
	{
		cout<<"NO se puede abrir el archivo"<<endl;	
	}
	
		ftell(almacen);
		fseek(almacen,0L,SEEK_SET);
		
		fread(&temporal,ftell(almacen)-sizeof(temporal),1,almacen);
		cout<<"|-------------------------------------|"<<endl;
		cout<<"|  	PRODUCTOS - FIJACION			    "<<endl; 
		cout<<"|-------------------------------------|"<<endl<<endl;
		while(!feof(almacen))
		{
			if(temporal.num>=38 && temporal.num<=40)
			{
			cout<<"\tPRODUCTO        : "<<temporal.num<<endl;
   			cout<<"\tCODIGO          : "<<temporal.cod<<endl;
   			cout<<"\tCATEGORIA       : "<<temporal.categoria<<endl;
   			cout<<"\tNOMBRE          : "<<temporal.nombre<<endl;
   			cout<<"\tDESCRIPCION     : "<<temporal.descripcion<<endl;
   			cout<<"\tPRECIO DE VENTA : S/."<<temporal.precio<<endl;
   			cout<<endl;
				
			}
			fread(&temporal,sizeof(temporal),1,almacen);
		}

		fclose(almacen);	
}


void sistema_venta()
{
	FILE *almacen;
	long tamano;
	
	struct tProduc temporal;
	struct tVenta compra;
	bool f=false;
	
	
	int conf=0,conf1=0,ss=0;

	cout<<"\tQuieres comprar algun producto ?  (SI ->1 / NO ->0 ): ";
	cin>>ss;

	if(ss==1)
	{
	do
	{
		almacen=fopen("product_cremas.sec","r+b"); //leemos el archivo binario creado

		if (almacen==NULL )
		{
			cout<<"NO se puede abrir el archivo"<<endl;
			
		}
		else
		{

				cont++;
		     	cout<<"\n\tIngrese el codigo  del Producto "<<cont<<" que desea comprar :";
				cin>>cod_venta[t];

				fread(&temporal,sizeof(temporal),1,almacen); //leemos el primer registro de la tabla almacen
			
				while(!feof(almacen))
   				{
   					if (temporal.cod==cod_venta[t]) 
   					{
   					f=true;
					cout<<"\tCodigo encontrado ! "<<endl;
   					cout<<"\n\tCuantas unidades desea comprar :";
   					cin>>unidades[t];

   					precio_venta[t]=temporal.precio;
   		
			  	 	total[t]=precio_venta[t]*unidades[t]; 	// total en un archivo binario	
				   
					cout<<" \tTodo le saldria : S/."<<total[t]<<endl ;
				
					cout<<"\n\tConfirmar su compra  (Si ->1 / No ->0 ) : ";
					cin>>conf;
				
						if(conf==1)
						{
							temporal.stock=temporal.stock-unidades[t];
   				
   							fseek(almacen,ftell(almacen)-sizeof(temporal),SEEK_SET);
   							fwrite(&temporal,sizeof(temporal),1,almacen); // escribimos en el archivo binario almacen
   							t++;
							
						}
			  	   							
   					break;
					}
		  	
		  			fread(&temporal,sizeof(temporal),1,almacen); 
				}
					
				if(f==false){
					cout<<"\tCodigo no encontrado ! "<<endl;
				}
				
   			cout<<"\n\n\tAlgun otro Producto ? (Si ->1 / No ->0 ) : ";
			cin>>conf1;
		
		}
			fclose(almacen);
	}while(conf1==1);
		

	cout<<endl<<endl;	
	cout<<"\tA comprado - Productos : "<<t<<endl;
	cout<<"\n\tAl final de su recorrido de la tienda se le dara su boleta con las compras completas."<<endl;
	cout<<endl;
	system("pause");
	
   	tienda4();
	
	}	
	else
	{
		menu_tcliente_woman();
	}
	
}


void boleta_electronica(tVenta compra)
{
	FILE *boleta;
	struct tProduc temporal;
	
	int conf3;
	float sumauu=0;

	boleta=fopen("boleta.txt","w+"); //creamos un abrivo  para escritura/lectura
    
    if (boleta==NULL)
	{
		printf( "No se puede abrir archivo.\n"); 
		
	}else
	{
		fprintf(boleta,"REPORTE TOTAL DE VENTAS \n");
  	 	fprintf(boleta,"CODIGO DEL PRODUCTO\t\tUNIDADES\tPRECIO\tTOTAL\tDNI\t\tNOMBRE\t\t\tAPELLIDO\tMODO DE PAGO\n");
  	 	
  	 	system("cls");
  	 	cout<<"\nBOLETA ELECTRONICA"<<endl;
		cout<<"Realizada: ";

		time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        printf("%s\n",output);
		
			//escribir en arhivo de texto
		for(int j=0;j<t;j++)
		{
			fprintf(boleta,"t%i\t%i\t%f\t%f",cod_venta[j],unidades[j],precio_venta[j],total[j]);		
		}	
		fprintf(boleta,"\t%i\t%s\t\t%s\t\t%i\n",compra.dni,compra.nombre,compra.apellido,compra.modo_pago);
	
		//por consola
		cout<<"\n\nDoc Cliente : "<<dni1;
		cout<<"\nNombre : "<<nombre2;
		cout<<"\nApellidos :"<<apellido2;
		cout<<"\nNumero de Tarjeta :"<<modo2;
		cout<<endl<<endl;
		cout<<endl<<endl;
				

		cout<<"\nProductos comprados "<<endl;	
		
		for(int j=0;j<t;j++)
		{		
		//	cout<<"\n Numero de venta : "<<cont;
			cout<<"\n Codigo : "<<cod_venta[j];
			cout<<"\n Unidades : "<<unidades[j];
			cout<<"\n Precio :"<<precio_venta[j];
			cout<<endl;		
		}	
		
		for(int j=0;j<t;j++)
		{	
			sumauu=sumauu +unidades[j]*precio_venta[j];	
		}
	
	}
		fclose(boleta);	

		cout<<"\n El total es : S/."<<sumauu;
		cout<<"\n Gracias por su visita a la tienda , Vuelva pronto ."<<endl;
		cout<<endl<<endl;

		cout<<"Salir (Si->1 /No ->0 ) ";
		cin>>conf3;
		
		if(conf3==1)
		{
			tiendas();
		}	
		else{
			tienda4();
		}				

}


