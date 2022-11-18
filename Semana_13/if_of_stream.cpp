#include <fstream>
using namespace std;

int main(){
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    double sum=0,cont=0;
    while(!source.eof()){
        int x;
        source >> x;
        destination << x << endl;
        cont++;
        sum=+x;
    }
    
    source.close();
    destination << sum/cont;
    
    

}