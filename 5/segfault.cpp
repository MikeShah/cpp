
void func(){

    int x = 9999999;

    int* px = new int[50];

    px[x] = 50;

    delete[] px;
}

int main(){

    func();

    return 0;
}
