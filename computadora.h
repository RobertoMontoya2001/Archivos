#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora {
  string SO;
  string modelo;
  string procesador;
  int memoriaRam;

public:
  Computadora();
  Computadora(const string &SO, const string &modelo, const string &procesador, int memoriaRam);

  void setSO(const string &SO);
  string getSisOp();
  void setMod(const string &modelo);
  string getMod();
  void setProc(const string &procesador);
  string getProc();
  void setMemRam(int memoriaRam);
  int getMemRam();

  friend ostream& operator <<(ostream &out, const Computadora &c)
  {
    out <<left;
    out <<setw(10)<< c.SO;
    out <<setw(20)<< c.modelo;
    out <<setw(20)<< c.procesador;
    out <<setw(6)<< c.memoriaRam; 
    out <<endl;

    return out;
  }
  friend istream& operator >>(istream &in,Computadora &c)
  {
    //string temp;
    //int memoriaRam;


    cout <<"SO: ";
    getline(cin,c.SO);

    cout <<"Modelo: ";
    getline(cin,c.modelo);

    cout <<"Procesador: ";
    getline(cin,c.procesador);

    cout <<"Memoria RAM: ";
    cin >> c.memoriaRam;


    return in;
  } 
};

#endif