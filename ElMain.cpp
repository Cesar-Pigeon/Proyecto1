#include <iostream>
#include <string>
#include <windows.h>
#include <bits/stdc++.h>

using namespace std;

void archivomenu1()
{
    ifstream archivo;
    string nombre, text;

    nombre = "titulo";

    archivo.open(nombre, ios::in);

    if(archivo.fail())
    {
        cout << "El archivo no se puede abrir" << endl;
    }

        while(!archivo.eof())
    {
        getline(archivo,text);
        cout <<text<<endl;
    }

    archivo.close();
}

void registroalumnos()
{

    ofstream archivo;
    string nombre, texto;
    nombre = "alumnos";
    archivo.open(nombre,ios::app);

        fflush(stdin);
        cout << "Ingresa tu nombre: " << endl;
        getline(cin, texto);
        archivo << "Usuario: " << texto << endl;

        fflush(stdin);
        cout << "Ingresa tu edad: " << endl;
        getline(cin, texto);
        archivo << "Edad: " << texto << endl;

        fflush(stdin);
        cout << "Ingresa la carrera que estudias: " << endl;
        getline(cin, texto);
        archivo << "Carrera: " << texto << endl;

        fflush(stdin);
        texto = "";
        archivo << texto << endl;

        fflush(stdin);
        texto = "";
        archivo << texto << endl;

    if(archivo.fail())
    {
        cout << "El archivo no se puede abrir" << endl;
    }

    archivo.close();
}

void registroasesor()
{
    ofstream archivo;
    int promedio;
    string nombre, texto;
    nombre = "asesores";
    archivo.open(nombre,ios::app);

        fflush(stdin);
        archivo << "" << endl;

        fflush(stdin);
        cout << "Ingresa tu nombre: " << endl;
        getline(cin, texto);
        archivo << "Usuario: " << texto << endl;

        fflush(stdin);
        cout << "Ingresa tu edad: " << endl;
        getline(cin, texto);
        archivo << "Edad: " << texto << endl;

        fflush(stdin);
        cout << "Ingresa la carrera que estudias: " << endl;
        getline(cin, texto);
        archivo << "Carrera: " << texto << endl;

        fflush(stdin);
        cout << "Ingresa tu promedio: " << endl;
        cin >> promedio;
        if(promedio < 8.5)
        {
            cout << "Tu promedio no es suficiente";
            texto = "USUARIO INVALIDO";
            archivo << texto << endl;
        }
        if(promedio >= 8.5)
        {
        archivo << "Promedio: " << promedio << endl;

        fflush(stdin);
        cout << "Ingresa la materia que desea impartir: " << endl;
        getline(cin, texto);
        archivo << "Materia que impartira: " << texto << endl;

        fflush(stdin);
        cout << "Ingresa el precio por tus servicios: " << endl;
        getline(cin, texto);
        archivo << "$" << texto << endl;

        fflush(stdin);
        texto = "";
        archivo << texto << endl;

        fflush(stdin);
        texto = "";
        archivo << texto << endl;
        }

    if(archivo.fail())
    {
        cout << "El archivo no se puede abrir" << endl;
    }

    archivo.close();
}

void Info()
{
        ifstream archivo;
    string nombre, text;

    nombre = "info";

    archivo.open(nombre, ios::in);

    if(archivo.fail())
    {
        cout << "El archivo no se puede abrir" << endl;
    }

        while(!archivo.eof())
    {
        getline(archivo,text);
        cout <<text<<endl;
    }

    archivo.close();
}

void titulo()
{
    archivomenu1();
    cout << "--------- Bienvenido ----------" << endl;
    cout << "                               " << endl;
    cout << " 1.- Informacion de el programa" << endl;
    cout << "                               " << endl;
    cout << " 2.- Registrarse como Alumno   " << endl;
    cout << "                               " << endl;
    cout << " 3.- Registrarse como Asesor   " << endl;
    cout << "                               " << endl;
    cout << " 4.- Escoger una clase         " << endl;
    cout << "                               " << endl;
    cout << " 5.- Salir                     " << endl;
    cout << "                               " << endl;
    cout << "-------------------------------" << endl;

}

void mostrarasesores()
{
    ifstream archivo;
    string nombre,text;

    nombre = "asesores";

    cout << "Escoge un asesor segun su posicion: " << endl;

    archivo.open(nombre, ios::in);

    if(archivo.fail())
    {
        cout << "El archivo no se puede abrir" << endl;
    }

    while(!archivo.eof())
    {
        getline(archivo,text);
        cout <<text<<endl;
    }

    archivo.close();
}

void tiempousado(int t)
{
     int temporizador = 1;
     int tt = t*10;
 while (temporizador <= tt)
 {
   cout << temporizador << endl;
   Sleep(1000); //1 segundo (1 segundo es igual a 1 hora)
   temporizador++;   
 }  
}

void menu()
{
    int usnum = 0;
    int p = 0;
    string op;
    string si = "Si";
    string no = "No";
    while(p < 1 || p > 5)
    {
        cin >> p;
    }
    if(p == 1)  //Opcion 1 (informacion)
    {
        Info();
        cout << "Deseas volver al menu?" << endl;
        cout << "  Inserte Si) o No)   " << endl;
        cin >> op;
        if(op == si)
        {
            titulo();
            menu();
        }
        if(op == no)
        {
            cout << "--------- Hasta luego ---------";
        }
    }

    if(p == 2) //Opcion 2 (Alumno)
    {
        registroalumnos();

        titulo();
        menu();
    }

        if(p == 3) //Opcion 3 (registro Asesor)
    {
        registroasesor();

        titulo();
        menu();
    }

        if(p == 4) //Opcion 4 (escoger Asesor)
    {
        mostrarasesores();
        cout << "Escoge un asesor: ";
        int a;
        cin >> a;
        cout << "Cuantas horas de asesoria necesitas: ";
        int t;
        cin >> t;
        tiempousado(t);

        titulo();
        menu();

    }

    if(p == 5) //Opcion 5 (Cerrar)
    {
        cout << "--------- Hasta luego ---------";
    }

}

int main()
{
    titulo();
    menu();

    return 0;
}