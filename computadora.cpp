#include "computadora.h"

Computadora::Computadora() {

}

Computadora::Computadora(const string &_SO, const string &_modelo, const string &_proce, int _memoriaRam) {
  this -> SO = _SO;
  this -> modelo = _modelo;
  this -> procesador = _proce;
  this -> memoriaRam = _memoriaRam;
}

void Computadora::setSO(const string &v) {
  SO = v;
}

string Computadora::getSisOp() {
  return SO;
}

void Computadora::setMod(const string &v) {
  modelo = v;
}

string Computadora::getMod() {
  return modelo;
}

void Computadora::setProc(const string &v) {
  procesador = v;
}

string Computadora::getProc() {
  return procesador;
}

void Computadora::setMemRam(int v) {
  memoriaRam = v;
}

int Computadora::getMemRam() {
  return memoriaRam;
}