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
void createPyramid(int n);

// http://jessicarbrown.com/images/ft-cpp-loop.gif
int main()
{
    // declaramos el mapa y lo rellenamos con el estilo de c++ 11 //
    map<string, float> mapa1 = {{"hola mundo",1.2},{"que tal mundo",2.3},{"redondea hacia arriba",7.7},{"adios mundo",3.4}};
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

    mapa2 = convertMap(mapa1);
    
    cout << "\n" << "Mapa copiado: " << "\n";
    // recorre el mapa devuelto por la funcion anterior //
    for(auto it1 : mapa2)
    {
        cout << it1.first << "," << it1.second << "\n";
    }

    // 3. create a for loop that gets a map of <string, float> and updates the
    // same map so that it adds "yeah!" to each string and rounds the float
    // number. transform it in place.
     cout << "\nejercicio 3.2:" << "\n"; 
    convertMap2(mapa1);
  
    // recorremos el mapa una vez cambiado en la funcion // 
    for(auto it2 : mapa1)
    {
        cout << it2.first << "," << it2.second << "\n";
    }

    //----------------------------------------------------------------------
        
    // 4. transform every previous exercise to ranged for loops. use as much
    // c++11 syntax as you can
    // EL FICHERO CON LOS BUCLES SIN UTILIZAR LA SINTASIX DE C++ 11 es el 
    // loop_exercises.cpp   
 
    // 5. write a for loop that prints a pyramid of height N, like this:    
    //	
    //	               **
    //	              ****
    //	             ******
    //	            ********
    //	           **********
    //	          ************
    
    cout << "\n";
    createPyramid(6);
    cout << "\n";
    createPyramid(5);
    cout << "\n";
    createPyramid(10);
}

void createPyramid(int n)
{
    int i;

    // inicia el bucle para recorrer todas las fillas //
    for(int c=0;c<n;c++)
    {
        // pinta los caracteres en blanco //
        // que seran el numero de filas menos la fila donde // 
        // se encuentra el bucle //
        for(i=0;i<n-c-1;i++)
        {
            cout << " ";
        }
        // pinta el doble de * del numero de fila que se encuentra //
        for(i=0;i<(c+1);i++)
        {
            cout << "**";
        }
        // salta a la siguiente fila //
        cout << "\n";
   }
}

void convertMap2(map<string, float> &mapa1)
{
    // recorre el mapa con un bucle estili c++ 11 //
    for(auto it : mapa1)
    {
        // redondeamos el float //
        it.second = round(it.second);
        // cambiamos el texto por yeah! //
        it.first.assign("yeah!");
    }
}

map<char*, int> convertMap(map<string, float> mapa1)
{
    // declara e inicia el mapa a devolver //
    map<char*, int> mapa2; 
    // creamos una variable auxiliar para guardar los char * //
    char *aux;

    cout << "\n" << "Mapa original:" << "\n";
    // bucle estilo c++11 //
    for(auto it : mapa1)
    {
        // imprime por pantalla la posicion actual del mapa //
        cout << it.first << "," << it.second << "\n";
        // reservamos memoria para la cadena de carateres //
        aux = new char[it.first.length()];
        // copiamos el string al char * //
	strcpy(aux,it.first.c_str());
        // copiamos la posicion nueva del map al nuevo map //
        mapa2.insert(pair<char*,int>(aux,(int)it.second));
    }

    // devolvemos el valor //
    return mapa2;
}


void loopString()
{
    // crea el vecor inicializandolo a 5 strings //
    vector<string> vec = {"hola", ",Que"," tal" ," estas", ". Adios"};

    // utilizamos un bucle estilo c++ 11 //
    for(auto it : vec)
    {
        cout << it ;
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


