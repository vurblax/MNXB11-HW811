#include <iostream>
#include "argh.h"
#include "csv.h"
#include "date.h"

using namespace date;
using namespace std::chrono;

int main(int, char *argv[]) {
argh::parser cmdl(argv);

if (cmdl[{"-h", "--help"}]) {
    std::cout << "  -h, --help          Display this help message\n";
    std::cout << "  -i, --input-file    Specify the name of a CSV file to read\n";
return 0;
}

const std::string csvName = "./datasets/test.csv";
if (cmdl({"-i", "--input-file"}, csvName)) {
        std::cout << "Reading CSV file: " << csvName << std::endl;
    } else {
        std::cout << "Error: Missing input file. Use -i or --input-file to specify a CSV file.\n";
        return 1; 
    }

 io::CSVReader<4> in(csvName.c_str());  
    in.read_header(io::ignore_extra_column, "day", "year", "month", "measurement");
    int day; int year; int month; double measurement;

    while (in.read_row(day, year, month, measurement)) {
        date::day d(day);
        date::year y(year);
        date::month m(month);
        date::year_month_day ymd(y, m, d);
        date::weekday wd = date::weekday(ymd);

        std::cout << "date: " << ymd << " | weekday: " << wd << " | measurement: " << measurement << std::endl;
    }

  return 0;
}
