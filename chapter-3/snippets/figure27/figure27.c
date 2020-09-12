long leaf(long x) {
    return x+2;
}

long top(long x) {
    return 2*leaf(x-5);
}

int main() {
    top(100);
}
