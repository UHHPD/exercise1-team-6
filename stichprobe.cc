#include<iostream>
#include<fstream>
#include<cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  float sum = 0;
  for (int i = 0; i < 234; ++i){
    int zahl;
    fin >> zahl;
    sum = sum + zahl;
  }
  fin.close();
  float mean = sum / 234;
  std::cout << "mean  " << mean << std::endl;

  std::ifstream fon("datensumme.txt");

  float var=0;
  for (int i = 0; i < 234; ++i){
    int zahl;
    fon >> zahl;
    var = var + pow((zahl - mean), 2);
  }

  fin.close();
  var = var / 234;
  std::cout << "var   " << var << std::endl;

  std::cout << "std   " << sqrt(var) << std::endl;

}