

#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_lee(string filename);


int main () {
  string filename;
  filename = "valores_x.txt";
  ejemplo_lee(filename);

  
}

void ejemplo_lee(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}
