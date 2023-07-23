
#include "printing.hpp"

using namespace fmt;
void print_start(const char func[]) {
    print("{}", fmt::format("{:=^80}\n", func));
}

void print_end() {
    print("{}", fmt::format("{:=^80}\n", "="));
}
void run_vals(void) {
    print("{}\n", 42);
}

void run_char(void) {
    char char_1{'b'};
    char_1 = 'c';
    char char_3{'a'};
    char_1 = 'n';
    char char_5{'w'};
    char_5 = 'L';
    char char_7{'i'};
    char_1 = 'R';
    char char_9{'f'};
    char_3 = 'n';
    char char_11{'O'};
    char_9 = 'y';
    char char_13{'s'};
    
    print_start(__func__);
    print("{}{}{}\n",
          char_1, char_11, char_5);
    print_end();
}
void run_copies(void) {
}

void run_char_copies(void) {
}

void run_references(void) {
}
