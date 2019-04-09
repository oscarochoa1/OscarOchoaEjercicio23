#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_lee(string filename, string filename1);


int main () {
  string filename;
    string filename1;
  filename = "valores_x.txt";
    filename1 = "valores_y.txt";
  ejemplo_lee(filename, filename1);

  
}

void ejemplo_lee(string filename, string filename1){
  ifstream infile; 
  string line;

  infile.open(filename, filename1); 
  
  cout << "Leyendo de " << filename << filename1<< endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}

