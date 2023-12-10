#include <iostream>
#include <fstream>

int main(){
    char buffer[] = { 'x', 'y', 'z' };
    std::ofstream file("myfile.txt", std::ios::binary);
    if (!file){
        std::cerr << "Error opening file" << std::endl;
    }
    else{
        file.write(buffer, sizeof(buffer));
        file.close();
    }
    return 0;
}