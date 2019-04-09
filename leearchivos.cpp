#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_lee(string filename);
void ejemplo_leenew(string filenamenew);


int main () {
  string filename;
    string filenamenew;
  filename = "valores_x.txt";
    filenamenew = "valores_y.txt";
    ejemplo_leenew(filenamenew);
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
void ejemplo_leenew(string filenamenew){
  ifstream infile; 
  string line;

  infile.open(filenamenew); 
  
  cout << "Leyendo de " << filenamenew << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}
