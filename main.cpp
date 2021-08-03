#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <pthread.h>
#include <sys/wait.h>
using namespace std;

pthread_t tid1, tid2, tid3, tid4, tid5, tid6, tid7, tid8, tid9,
            tid10, tid11, tid12, tid13, tid14, tid15, tid16, tid17, tid18,
            tid19, tid20, tid21, tid22, tid23, tid24, tid25, tid26, tid27;

int grid[9][9] =  {
6, 2, 4, 5, 3, 9, 1, 8, 7,
5, 1, 9, 7, 2, 8, 6, 3, 4,
8, 3, 7, 6, 1, 4, 2, 9, 5,
1, 4, 3, 8, 6, 5, 7, 2, 9,
9, 5, 8, 2, 4, 7, 3, 6, 1,
7, 6, 2, 3, 9, 1, 4, 5, 8,
3, 7, 1, 9, 5, 6, 8, 4, 2,
4, 9, 6, 1, 8, 2, 5, 7, 3,
2, 8, 5, 4, 7, 3, 9, 1, 6
};

bool valid = true;

void* col1(void* arg) {

    int colNo = 0;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col2(void* arg) {

    int colNo = 1;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col3(void* arg) {

    int colNo = 2;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col4(void* arg) {

    int colNo = 3;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}


void* col5(void* arg) {

    int colNo = 4;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col6(void* arg) {

    int colNo = 5;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col7(void* arg) {

    int colNo = 6;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col8(void* arg) {

    int colNo = 7;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* col9(void* arg) {

    int colNo = 8;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[i][colNo];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;

}

void* row1(void* arg) {

    int rowNo = 0;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row2(void* arg) {

    int rowNo = 1;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row3(void* arg) {

    int rowNo = 2;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row4(void* arg) {

    int rowNo = 3;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row5(void* arg) {

    int rowNo = 4;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row6(void* arg) {

    int rowNo = 5;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row7(void* arg) {

    int rowNo = 6;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row8(void* arg) {

    int rowNo = 7;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* row9(void* arg) {

    int rowNo = 8;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;

    for (int i = 0; i < 9; i++) {
        int val = grid[rowNo][i];

        switch (val) {
            case 1:
                one = true;
                break;
            case 2:
                two = true;
                break;
            case 3:
                three = true;
                break;
            case 4:
                four = true;
                break;
            case 5:
                five = true;
                break;
            case 6:
                six = true;
                break;
            case 7:
                seven = true;
                break;
            case 8:
                eight = true;
                break;
            case 9:
                nine = true;
                break;
            default:
                break;
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid1(void* arg) {

    int index1 = 0, index2 = 0;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid2(void* arg) {

    int index1 = 0, index2 = 3;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid3(void* arg) {

    int index1 = 0, index2 = 6;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid4(void* arg) {

    int index1 = 3, index2 = 0;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid5(void* arg) {

    int index1 = 3, index2 = 3;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid6(void* arg) {

    int index1 = 3, index2 = 6;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid7(void* arg) {

    int index1 = 6, index2 = 0;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid8(void* arg) {

    int index1 = 6, index2 = 3;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

void* subGrid9(void* arg) {

    int index1 = 6, index2 = 6;
    bool one, two, three, four, five, six, seven, eight, nine;
    one = two = three = four = five = six = seven = eight = nine = false;
    
    for (int i = index1; i < index1 + 3; i++) {
        for (int j = index2; j < index2 + 3; j++) {
            int val = grid[i][j];

            switch (val) {
                case 1:
                    one = true;
                    break;
                case 2:
                    two = true;
                    break;
                case 3:
                    three = true;
                    break;
                case 4:
                    four = true;
                    break;
                case 5:
                    five = true;
                    break;
                case 6:
                    six = true;
                    break;
                case 7:
                    seven = true;
                    break;
                case 8:
                    eight = true;
                    break;
                case 9:
                    nine = true;
                    break;
                default:
                    break;
            }
        }
    }

    if (one and two and three and four and five and six and seven and eight and nine)
        valid = true;
    else
        valid = false;

    return NULL;
}

int main() {

    // checking all columns
    pthread_create(&tid1, NULL, col1, NULL);
    pthread_create(&tid2, NULL, col2, NULL);
    pthread_create(&tid3, NULL, col3, NULL);
    pthread_create(&tid4, NULL, col4, NULL);
    pthread_create(&tid5, NULL, col5, NULL);
    pthread_create(&tid6, NULL, col6, NULL);
    pthread_create(&tid7, NULL, col7, NULL);
    pthread_create(&tid8, NULL, col8, NULL);
    pthread_create(&tid9, NULL, col9, NULL);

    // checking all rows
    pthread_create(&tid10, NULL, row1, NULL);
    pthread_create(&tid11, NULL, row2, NULL);
    pthread_create(&tid12, NULL, row3, NULL);
    pthread_create(&tid13, NULL, row4, NULL);
    pthread_create(&tid14, NULL, row5, NULL);
    pthread_create(&tid15, NULL, row6, NULL);
    pthread_create(&tid16, NULL, row7, NULL);
    pthread_create(&tid17, NULL, row8, NULL);
    pthread_create(&tid18, NULL, row9, NULL);

    // checking all subgrids
    pthread_create(&tid19, NULL, subGrid1, NULL);
    pthread_create(&tid20, NULL, subGrid2, NULL);
    pthread_create(&tid21, NULL, subGrid3, NULL);
    pthread_create(&tid22, NULL, subGrid4, NULL);
    pthread_create(&tid23, NULL, subGrid5, NULL);
    pthread_create(&tid24, NULL, subGrid6, NULL);
    pthread_create(&tid25, NULL, subGrid7, NULL);
    pthread_create(&tid26, NULL, subGrid8, NULL);
    pthread_create(&tid27, NULL, subGrid9, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_join(tid3, NULL);
    pthread_join(tid4, NULL);
    pthread_join(tid5, NULL);
    pthread_join(tid6, NULL);
    pthread_join(tid7, NULL);
    pthread_join(tid8, NULL);
    pthread_join(tid9, NULL);
    pthread_join(tid10, NULL);
    pthread_join(tid11, NULL);
    pthread_join(tid12, NULL);
    pthread_join(tid13, NULL);
    pthread_join(tid14, NULL);
    pthread_join(tid15, NULL);
    pthread_join(tid16, NULL);
    pthread_join(tid17, NULL);
    pthread_join(tid18, NULL);
    pthread_join(tid19, NULL);
    pthread_join(tid20, NULL);
    pthread_join(tid21, NULL);
    pthread_join(tid22, NULL);
    pthread_join(tid23, NULL);
    pthread_join(tid24, NULL);
    pthread_join(tid25, NULL);
    pthread_join(tid26, NULL);
    pthread_join(tid27, NULL);

    if (valid)
        cout << "Grid is valid\n";
    else
        cout << "Grid is invalid\n";
        
    
	pthread_exit(NULL);
}
