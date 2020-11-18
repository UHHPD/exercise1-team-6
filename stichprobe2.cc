#include<iostream>
#include<fstream>
#include<cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");
  for (int j = 0; j < 26; ++j){
    float sum = 0;
    for (int i = j * 9; i < (j + 1) * 9; ++i){
      int zahl;
      fin >> zahl;
      sum = sum + zahl;
    }
    float mean = sum / 9;

  float var=0;
  for (int i = j * 9; i < (j + 1) * 9; ++i){
      int zahl;
      fin2 >> zahl;
      var = var + pow((zahl - mean), 2);
    }
    var = var / 9;

    fout << mean << std::endl;
    fout2 << var << std::endl;
  }
  fin.close();
  fin2.close();
  fout.close();
  fout2.close();
}
