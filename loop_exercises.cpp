#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <cmath>

using namespace std;

void countFive();
void loopString();
map<char*, int> convertMap(map<string, float> mapa1);
void convertMap2(map<string, float> &mapa1);


// http://jessicarbrown.com/images/ft-cpp-loop.gif
int main()
{
    map<string, float> mapa1;
    map<char*, int> mapa2;
    
    // non-c++11 syntax:
    
    // 1. create a for loop that prints numbers 1 to 5
    cout << "ejercicio 1:" << "\n";
    countFive();
    
    // 2. create a for loop that iterates through a vector of strings and print
    // them
 
    cout << "\nejercicio 2:" << "\n";
    loopString();
    
    // 3. create a for loop that gets a map of <string, float> and returns a
    // new map of of (char*, int)

    cout << "\nejercicio 3.1:" << "\n";
    mapa1.insert(pair<string,float>("hola mundo",1.2));
    mapa1.insert(pair<string,float>("que tal mundo",2.3));
    mapa1.insert(pair<string,float>("redondea hacia arriba",7.7));
    mapa1.insert(pair<string,float>("adios mundo",3.4));

    mapa2 = convertMap(mapa1);
    
    cout << "\n" << "Mapa copiado: " << "\n";
    for(map<char *,int>::iterator it1 = mapa2.begin();it1 != mapa2.end();it1++)
    {
        cout << it1->first << "," << it1->second << "\n";
    }

    // 3. create a for loop that gets a map of <string, float> and updates the
    // same map so that it adds "yeah!" to each string and rounds the float
    // number. transform it in place.
     cout << "\nejercicio 3.2:" << "\n"; 
    convertMap2(mapa1);
  
    
    for(map<string,float>::iterator it2 = mapa1.begin();it2 != mapa1.end();it2++)
    {
        cout << it2->first << "," << it2->second << "\n";
    }

    //----------------------------------------------------------------------
        
    // 4. transform every previous exercise to ranged for loops. use as much
    // c++11 syntax as you can
    
    // 5. write a for loop that prints a pyramid of height N, like this:    
    //	
    //	               **
    //	              ****
    //	             ******
    //	            ********
    //	           **********
    //	          ************
    
}

void convertMap2(map<string, float> &mapa1)
{

    map<string, float>::iterator it = mapa1.begin(); 

    for(;it!=mapa1.end();it++)
    {
        it->second = round(it->second);
        it->first.assign("yeah!");
    }

   //convertMap(mapa1); 
}

map<char*, int> convertMap(map<string, float> mapa1)
{
    // declara e inicia el mapa a devolver //
    map<char*, int> mapa2; 
    // creamos una variable auxiliar para guardar los char * //
    char *aux;

    // crea el iterador para el mapa //
    map<string, float>::iterator it = mapa1.begin();

    cout << "\n" << "Mapa original:" << "\n";
    for(;it != mapa1.end();it++)
    {
        // imprime por pantalla la posicion actual del mapa //
        cout << it->first << "," << it->second << "\n";
        // reservamos memoria para la cadena de carateres //
        aux = new char[it->first.length()];
        // copiamos el string al char * //
	strcpy(aux,it->first.c_str());
        // copiamos la posicion nueva del map al nuevo map //
        mapa2.insert(pair<char*,int>(aux,(int)it->second));
    }

    // devolvemos el valor //
    return mapa2;
}


void loopString()
{
    // crea el vecor inicializandolo a 5 strings //
    vector<string> vec = {"hola", ",Que"," tal" ," estas", ". Adios"};

    // declara iterador en el for e inicia la iteracion //
    for(vector<string>::iterator it = vec.begin(); it!=vec.end();it++)
    {
        cout << *it ;
    }

    cout << "\n";


}

void countFive()
{
    // bucle for que cuenta de 1 a 5 //
    for(int c=1;c<=5;c++)
    {
        cout << c ;
    }

   cout << "\n";

}


