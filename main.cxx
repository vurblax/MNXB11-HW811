#include <iostream>
#include "argh.h"

int main(int argc, char *argv[]) {
argh::parser cmdl(argv);

if (cmdl[{"-h", "--help"}]) {
    std::cout << "  -h, --help          Display this help message\n";
    std::cout << "  -i, --input-file    Specify the name of a CSV file to read\n";
return 0;
}

const std::string csvName = "smhi-opendata_1_52230_20231007_155448_Falsterbo.csv";
if (cmdl({"-i", "--input-file"}, csvName)) {
        std::cout << "Reading CSV file: " << csvName << std::endl;
    } else {
        std::cout << "Error: Missing input file. Use -i or --input-file to specify a CSV file.\n";
        return 1; 
    }



  return 0;
}
