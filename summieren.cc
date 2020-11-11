#include<iostream>
#include<fstream>

int main(){
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  for (int i = 0; i < 234; ++i){
    int zahl1, zahl2, sum;
    fin >> zahl1;
    fin >> zahl2;
    sum = zahl1 + zahl2;
    fout << sum << std::endl;
    //std::cout << sum << std::endl;
  }
  fin.close();
  fout.close();
}