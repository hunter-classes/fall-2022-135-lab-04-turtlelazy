#include <iostream>
#include <string>

std::string box(int width, int height){
    std::string return_string = "";
    for(int y = 0; y < height; y++){
        for(int x = 0; x < width;x++){
            return_string+="*";
        }
        return_string+="\n";
    }
    return return_string;
}

std::string checkerboard(int width, int height){
    std::string return_string = "";

    for (int y = 0; y < height; y++)
    {
        std::string char_main = "*";
        std::string char_side = " ";

        if(y%2 == 1){
            char_main = " ";
            char_side = "*";
        }

        for (int x = 0; x < width; x++)
        {
            if(x%2 == 1){
                return_string += char_side;
            }
            else{
                return_string+=char_main;
            }

            // if(x!=width-1){
            //     return_string += char_main + char_side;
            // }
            // else{
            //     return_string += char_main;
            // }
        }
        return_string += "\n";
    }
    return return_string;
}

std::string cross(int size){
    std::string return_string = "";

    int index = 0;

    for(int y = 0; y < size; y++){
        for(int x = 0; x < size; x++){
            if(x == index || x == size - 1 - index){
                return_string += "*";
            }
            else{
                return_string += " ";
            }
        }
        index += 1;
        return_string += "\n";
    }
    return return_string;
}