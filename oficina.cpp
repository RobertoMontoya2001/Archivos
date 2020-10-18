#include "oficina.h"
#include <fstream>

Oficina::Oficina() {
  cont = 0;
}

void Oficina::agregarFinal(const Computadora &c) {
  if (cont < 5) {
    arreglo[cont] = c; 
    cont++;
  }
  else {
    cout << "Arreglo lleno..." << endl;
  }
}

void Oficina::mostrar() {
  cout <<left;
  cout <<setw(10)<<"SO:";
  cout <<setw(20)<<"Modelo de PC:";
  cout <<setw(20)<<"Procesador:";
  cout <<setw(6)<<"RAM:";
  cout <<endl;
  for (size_t i = 0; i < cont; i++) {
    Computadora c = arreglo[i];
    cout  << c;
    //cout << "Sistema Operativo de la maquina: " << c.getSisOp() << endl;
    //cout << "Modelo de PC: " << c.getMod() << endl;
    //cout << "Procesador: " << c.getProc() << endl;
    //cout << "RAM: " << c.getMemRam() << " GB" << endl;
    //cout << endl;
  }
} 
void Oficina::respaldar_tabla()
{

    ofstream archivo("Computadoras_Tabla.txt");
    if (archivo.is_open()){
        archivo <<left;
        archivo <<setw(10)<<"SO:";
        archivo <<setw(20)<<"Modelo de PC:";
        archivo <<setw(20)<<"Procesador:";
        archivo <<setw(6)<<"RAM:";
        archivo <<endl;
        for (size_t i = 0; i < cont; i++) {
        Computadora &c = arreglo[i];
        archivo << c;
        }
    }
    archivo.close();
}

void Oficina::respaldar()
{

    ofstream archivo("Computadoras.txt");
    if (archivo.is_open()){
        for (size_t i = 0; i < cont; i++) {
        Computadora &c = arreglo[i];
        archivo << c.getSisOp()<<endl;
        archivo << c.getMod()<<endl;
        archivo << c.getProc()<<endl;
        archivo << c.getMemRam()<<endl;

        }
    }
    archivo.close();
}

void Oficina::recuperar()
{

    ifstream archivo("Computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int memoriaRam;
        Computadora c;

        while(true)
        {   
            getline(archivo, temp);
            if (archivo.eof()){
                break;
            }
            c.setSO(temp);

            getline(archivo,temp);
            c.setMod(temp);

            getline(archivo,temp);
            c.setProc(temp);

            getline(archivo,temp);
            memoriaRam = stoi(temp);
            c.setMemRam(memoriaRam); 

            agregarFinal(c);

        }


    }
    archivo.close();

}