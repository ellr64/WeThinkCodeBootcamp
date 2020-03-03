

/*Lincluded for write function*/
#include <unistd.h>

int main(int argc, char **argv)
{
    /*Check if there is only one argument*/
    if (argc == 2)
    {
        /*Loop through the string*/
        int i = 0;
        while (argv[1][i])
        {
            /*Check if character is an a, then write a, and stop the loop*/
            if (argv[1][i] == 'a')
            {
                write(1, "a\n", 2);
                break;
            }
            i++;
        }
    }
    /*If not one argument, write a*/
    else
    {
        write(1, "a\n", 2);
    }
    
    return (0);
}
