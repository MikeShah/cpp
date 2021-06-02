// @file multipleArgs.cpp

template<class T1, class T2>
void function(T1 arg1, T2 arg2){
    // Function body
}

int main(){

    function<bool,int>(true,7);
    function<float,const char*>(5.0f,"hi");

    return 0;
}


