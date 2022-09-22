#include <iostream>
#include <string>

std::string box(int width, int height){
    std::string return_string;
    for(int y = 0; y < height; y++){
        for(int x = 0; x < width;x++){
            return_string+="*";
        }
        return_string+="\n";
    }
    return return_string;
}