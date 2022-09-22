#include <iostream>
#include <string>

std::string box(int width, int height)
{
    std::string return_string = "";
    for(int y = 0; y < height; y++){
        for(int x = 0; x < width;x++){
            return_string+="*";
        }
        if(y!= height-1){
            return_string += "\n";
        }
    }
    return return_string;
}

std::string checkerboard(int width, int height)
{
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
        if (y != height - 1)
        {
            return_string += "\n";
        }
    }
    return return_string;
}

std::string cross(int size)
{
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
        if (y != size - 1)
        {
            return_string += "\n";
        }
    }
    return return_string;
}

std::string l_triangle(int length)
{
    std::string return_string = "";

    for(int y = 1; y < length+1;y++){
        for(int x = 0; x < y;x++){
            return_string += "*";
        }
        if (y != length)
        {
            return_string += "\n";
        }
    }

    return return_string;
}

std::string u_triangle(int length)
{
    std::string return_string = "";

    for (int y = length; y > 0; y--)
    {
        for (int x = 0; x < y; x++)
        {
            return_string += "*";
        }
        if (y != 1)
        {
            return_string += "\n";
        }
    }

    return return_string;
}

std::string upside_down_trapezoid(int width, int height)
{
    std::string return_string = "";
    if( 2 * (height - 1) >= width){
        return "Impossible shape!";
    }
    
    for(int y = 0; y < height; y ++){

        //initial spaces
        for(int i = 0; i < y; i++){
            return_string += " ";
        }

        //stars in each line
        for(int x = 0; x < width- 2 * y; x ++ ){
            return_string += "*";
        }
        if (y != height - 1)
        {
            return_string += "\n";
        }
    }

    return return_string;
}

std::string checkerboard_3x3(int width, int height)
{
    std::string return_string = "";

    std::string main_char = "*";
    std::string side_char = " ";

    for(int y = 0; y < height; y++){
        if( (y/3) % 2 == 1){
            main_char = " ";
            side_char = "*";
        }
        else{
            main_char = "*";
            side_char = " ";
        }
        for(int x = 0; x < width; x++){
            if( (x/3) % 2 == 1){
                return_string += side_char;
            }
            else{
                return_string += main_char;
            }
        }
        if (y != height - 1)
        {
            return_string += "\n";
        }
    }

    return return_string;
}