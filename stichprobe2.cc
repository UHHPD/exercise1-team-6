#include<iostream>
#include<fstream>
#include<cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");

  for (int j = 0; j < 26; ++j){
    double sum = 0;
    for (int i = j * 9; i < (j + 1) * 9; ++i){
      int zahl;
      fin >> zahl;
      sum = sum + zahl;
    }
  double mean = sum / 9;
  
  double var=0;
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

  std::ifstream fin4("mittelwerte.txt"); 
  std::ifstream fin3("varianzen.txt");
 
  double sum = 0;
  double sumv = 0;
  for (int i = 0; i < 26; ++i){
    double zahl2;
    double zahl3;

    fin4 >> zahl2;
    fin3 >> zahl3;

    sum = sum + zahl2;  
    sumv = sumv + zahl3;
  }
  double mean = sum / 26.0;
  double meanv = sumv / 26.0;
  
  std::cout << "mean mean   " << mean << std::endl;
  std::cout << "mean var   " << meanv << std::endl;

  fin4.close();
  fin3.close();
}
