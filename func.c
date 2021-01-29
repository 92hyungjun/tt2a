
//이 코드는 쓰레기다.

int sum( int a, int b ) {
    // commit 1
    return a + b;
}

int sub( int a, int b ) {
    // commit 2
    return a - b;
}

int mul( int* a, int b ) {
    // commit 3
    return a * b;
}

int main() {
    return 0;
}
